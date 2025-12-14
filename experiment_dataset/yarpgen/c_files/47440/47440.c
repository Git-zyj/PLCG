/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = 1625354300;

        for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] = (max((-32767 - 1), (min((arr_5 [i_1]), (!var_18)))));
            arr_9 [i_0] [i_0] [i_0] = ((var_17 || ((8918 == (arr_6 [11] [i_1] [i_0])))));
            arr_10 [i_1] = var_8;
            arr_11 [i_1 - 1] [14] = -var_10;
        }
        for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] = ((578396640132259415 ? 226 : -11748));
            arr_16 [i_2] [i_0] = (max((arr_0 [i_2 - 2]), var_13));
            arr_17 [i_0] [1] = ((var_7 ^ (max((arr_0 [i_0]), ((var_10 ? var_19 : var_1))))));
        }
        for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_21 [12] = var_6;
            arr_22 [i_0] [i_0] &= var_15;
        }
        arr_23 [17] = ((((var_18 ? (arr_1 [i_0]) : ((~(arr_19 [i_0]))))) < 96));
        arr_24 [i_0] = -var_17;
        arr_25 [i_0] [i_0] = ((((var_15 ? (arr_14 [i_0] [i_0]) : -32756))) ? (var_8 - var_0) : -5592829428810840284);
    }
    var_21 = (((!var_1) ? (((!((max(var_3, 578396640132259393)))))) : var_7));
    var_22 = -578396640132259395;
    var_23 = -11748;
    #pragma endscop
}
