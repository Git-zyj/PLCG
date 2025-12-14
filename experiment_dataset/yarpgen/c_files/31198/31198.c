/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_10;
    var_13 = var_8;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 ^= ((2147483647 <= (max(168, (((arr_1 [i_0] [i_0]) ? -1717078809 : 60))))));
        var_15 = 3;
        arr_2 [i_0] = (!var_11);
        var_16 = var_0;
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_17 = ((max(2593304575, (!0))));
        arr_5 [i_1] = 2874328022;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_18 = 742119506;
        arr_8 [i_2] = ((-742119516 ? (arr_7 [i_2 - 3]) : (arr_7 [i_2])));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = (((max(127, (arr_4 [i_3] [i_4])))));
                var_20 = ((arr_10 [i_3] [i_3]) >= 7);
                arr_14 [i_4] = var_0;
            }
        }
    }
    #pragma endscop
}
