/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (((((var_10 != ((var_2 ? var_2 : var_2))))) < ((var_10 ? (~var_4) : var_15))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((arr_1 [i_1]) && (arr_0 [i_0] [i_1])));
            var_17 |= ((-1 ? -1 : 1));
            var_18 = ((~(-127 - 1)));
            arr_6 [i_0] [i_1] = ((((-(arr_1 [i_1]))) != ((((arr_1 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_1]))))));
        }
        arr_7 [i_0] = (((((arr_2 [i_0]) / (arr_2 [i_0]))) <= (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_12 [i_3] = ((-((((var_15 ? (arr_0 [i_3] [i_2]) : (arr_3 [i_0])))))));
                    arr_13 [i_0] [i_0] [i_3] = ((-((((((arr_8 [14] [i_2 - 2]) ? (arr_2 [i_2]) : (arr_2 [15])))) ? (!var_6) : (var_3 - var_1)))));
                    var_19 = ((((-(arr_2 [1]))) / 84));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_20 = (((arr_0 [i_4] [i_5]) ? var_1 : (arr_0 [i_4] [i_5])));
            var_21 = (arr_8 [12] [12]);
        }
        var_22 = (-(arr_11 [i_4] [i_4] [i_4]));
        var_23 ^= (1373673305 * (((arr_15 [i_4] [i_4]) ? (arr_9 [i_4]) : (arr_15 [i_4] [i_4]))));
        var_24 = (((12 ? 65535 : var_13)));
    }
    #pragma endscop
}
