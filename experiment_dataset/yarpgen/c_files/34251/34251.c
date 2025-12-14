/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = 12698815366836078144;
                var_18 = (((arr_0 [i_1]) >= 1));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_2] = 3306806413;
                            var_19 += (arr_0 [i_4]);
                            var_20 = (arr_6 [i_2] [i_2]);
                            var_21 = var_3;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_2] = var_16;
                            var_22 = ((-(arr_6 [i_2] [3])));
                            arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = var_6;
                        }
                        var_23 = ((var_0 ? ((~(~var_14))) : (arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_2])));
                        var_24 = (arr_5 [11] [i_2] [8]);
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_25 *= (arr_8 [i_0] [i_2] [i_2] [i_0]);
                        var_26 *= ((~(~3306806413)));
                    }
                    for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_27 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_28 = ((!((((arr_12 [i_2] [i_7 + 1] [i_7 + 1] [i_7 + 4] [i_7]) ? (min(3306806413, -8824233794663796279)) : 8789699754098213553)))));
                        var_29 = ((!((max(-7852291039400470920, var_5)))));
                        var_30 = (~var_6);
                    }
                    arr_27 [i_2] [i_1] [i_1] = 546766604;
                    var_31 &= -var_9;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_36 [i_0] [i_1] [i_8] [i_9] [i_8] = 1;
                                var_32 = ((!(arr_34 [i_10 - 1] [i_10 - 1] [i_10 - 1] [2] [i_10])));
                            }
                        }
                    }
                    var_33 = (min(var_33, 8789699754098213533));
                    var_34 = (-(arr_8 [1] [i_0] [i_0] [i_1]));
                }
            }
        }
    }
    var_35 = var_13;
    #pragma endscop
}
