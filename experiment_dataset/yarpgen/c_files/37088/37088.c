/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(99, var_14)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = ((((3 - (arr_2 [10] [i_1]))) + (arr_2 [16] [i_1 - 3])));
                    var_19 = (((arr_7 [i_0] [i_1] [i_2] [i_2]) ? var_2 : (arr_4 [1] [i_1 - 2])));
                    var_20 = (((arr_7 [i_1] [i_1] [i_1] [i_0]) ? (arr_7 [i_1] [i_1] [i_1] [i_0]) : (arr_7 [i_1] [i_1] [i_1] [i_1])));
                    var_21 = ((-(arr_1 [i_1 + 1] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 = ((-1 ? (arr_8 [i_4 + 1] [i_4 - 1] [i_1 + 1]) : (arr_9 [i_4] [i_4 + 1] [i_1 - 2])));
                                var_23 = (arr_4 [i_1 + 2] [i_1]);
                                var_24 = ((56 | (arr_7 [i_1 + 2] [i_1] [i_1 + 3] [i_1 + 1])));
                                var_25 = ((65533 ? (arr_10 [i_0] [i_0] [i_2]) : ((-199785553 ? -75 : 65532))));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (106 * 189);
        var_27 = (arr_5 [i_0]);
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_28 = ((+(((arr_1 [20] [20]) - (arr_3 [i_5] [1] [i_5])))));
        var_29 = var_6;
    }
    var_30 = (65508 <= 65533);
    #pragma endscop
}
