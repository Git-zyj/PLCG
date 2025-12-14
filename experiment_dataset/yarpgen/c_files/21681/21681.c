/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_10 / var_17) * -var_9))) != (min((min(var_3, var_8)), var_12))));
    var_21 = ((!((((var_7 > var_1) ? var_6 : (var_12 ^ var_7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            var_22 = (((((var_18 ? var_16 : var_11))) - (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? var_8 : (arr_8 [i_2] [i_2 + 1] [i_1 - 2] [i_2])))));
                            var_23 = ((((var_19 - (arr_11 [i_4])))) ? ((var_10 ? var_15 : (arr_10 [i_0] [17] [17] [i_3]))) : -var_7);
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_24 = var_16;
                            var_25 = ((~((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0])))));
                        }
                        var_26 = (max(var_26, (((var_17 % ((((arr_13 [i_1] [i_1] [i_3]) ? var_2 : (arr_1 [i_1] [i_3 + 3])))))))));
                    }
                }
            }
        }
        var_27 = ((var_10 ? (((arr_4 [i_0] [i_0]) ? (arr_0 [i_0]) : var_13)) : var_5));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_28 = ((((arr_14 [i_0] [i_6] [i_7] [i_7 - 1] [i_7] [i_7 - 1]) ^ (arr_3 [i_0] [i_7]))));
                    var_29 = (((!var_0) ? var_7 : (arr_17 [i_0] [i_6] [i_7] [i_7] [8] [i_7])));
                    var_30 = ((-((var_13 ? var_5 : var_16))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_29 [i_9] [i_6] [i_9 + 1] [i_9] = ((1 ? 3655 : 286042704));
                                var_31 = (max(var_31, (((!((((arr_23 [1] [1] [i_7 - 1] [i_7 - 1]) * var_16))))))));
                            }
                        }
                    }
                    var_32 = var_0;
                }
            }
        }
        var_33 = (min(var_33, (arr_24 [i_0] [i_0] [i_0] [i_0])));
        var_34 = (((arr_25 [i_0] [i_0] [4]) ? var_10 : var_6));
    }
    #pragma endscop
}
