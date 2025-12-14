/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        var_12 = (5 % -59);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (arr_1 [i_0]);
                    var_14 = 56;
                    var_15 ^= var_3;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_16 = 27;
                        arr_13 [i_5] [8] [i_5] [i_3] [i_5] [i_5] = ((+(((arr_7 [i_3] [i_3]) ? 122 : 32767))));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, (((((1352619606973106480 && (arr_9 [i_5]))) ? (((!(arr_2 [13] [i_3] [i_3])))) : -var_2)))));
                            var_18 = ((var_4 ? (arr_6 [i_3]) : (arr_6 [i_3])));
                            var_19 = -3603;
                            var_20 |= ((122 ? (arr_10 [i_0 - 2] [i_5] [i_0 - 2]) : var_5));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_21 = var_1;
                            var_22 = ((var_7 ? var_8 : 39));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_23 = (((arr_1 [i_0 + 2]) / (arr_1 [i_0 - 1])));
                            var_24 = ((var_5 ? var_5 : (arr_14 [11] [i_3] [i_4] [i_4 - 1] [i_8] [i_0 + 2] [i_4])));
                        }
                    }
                }
            }
        }
    }
    var_25 &= (~var_0);
    var_26 = (min(var_26, (((((min(((var_5 ? var_2 : var_2)), 142))) ? var_7 : (min(((var_6 ? var_7 : var_2)), (var_8 / var_2))))))));
    #pragma endscop
}
