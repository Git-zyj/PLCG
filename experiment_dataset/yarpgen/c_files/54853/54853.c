/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_11 += (arr_0 [i_0] [i_0 + 1]);
                        var_12 = (arr_5 [i_1]);

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_11 [i_3] [i_0] [i_3] [i_0] [i_0 - 1] = (arr_0 [i_4] [i_2]);
                            var_13 = ((-(((arr_10 [i_3] [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_3]) / var_9))));
                            var_14 = ((1 ? (((-(!var_8)))) : var_4));
                            var_15 = min((!126), (((1 ? var_1 : var_1))));
                            var_16 = var_9;
                        }
                        var_17 &= min((((-((1 ? 12178 : 1))))), (min((min(var_4, var_5)), var_10)));
                        var_18 |= (min(((((arr_8 [i_0 - 1] [i_0 - 1] [i_0]) != 1))), (min(((1 ? 1 : 1)), var_8))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_19 = -1;
                        var_20 = var_1;

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_21 = (((arr_10 [i_1] [16] [i_2] [i_5 - 1] [i_6 + 1] [i_5] [i_6 + 1]) >= var_1));
                            var_22 = ((~(arr_1 [i_0 + 3])));
                        }
                        var_23 = (max(var_23, (((~((var_0 + (arr_1 [i_5]))))))));
                    }
                    var_24 = ((!(((((~(arr_5 [i_1])))) && (((1 ? 33030144 : 1)))))));
                }
            }
        }
    }
    var_25 = var_2;
    var_26 = var_5;
    var_27 = var_8;

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_28 &= min(var_2, (((((arr_5 [9]) - var_8)) * (((var_3 ? var_5 : (arr_1 [14])))))));
        var_29 = (((1 && (!1))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    {
                        arr_26 [i_10] [i_7] [i_7] [i_7] = (max((!1), (~1)));
                        arr_27 [i_8] [i_8] |= (~-1);
                        var_30 = 1;
                        var_31 = 6763;
                    }
                }
            }
        }
    }
    #pragma endscop
}
