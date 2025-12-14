/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(var_5, ((2147483647 ? 2147483647 : 6967844906729369449)))) << (var_4 + 3922865622245554356)));
    var_21 = -57;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = (min(var_22, ((min(((166 ? (arr_2 [i_0 - 1] [i_1 - 1]) : 5830561675654362190)), (2147483621 / -2147483647))))));
                var_23 &= 7;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_24 = ((208 >> (((arr_3 [i_2 + 1] [i_1 + 2]) - 7250628655050852407))));
                        var_25 = -var_5;
                        arr_11 [i_0] [i_0] = (((28558 + var_9) ? (arr_2 [i_2 + 1] [i_2 + 1]) : (2147483647 & var_11)));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_26 = (((arr_7 [i_0] [i_0 + 1] [i_4]) % (arr_7 [i_0] [i_0 + 1] [i_5])));
                            arr_20 [i_0] [i_0] = (!var_9);
                            var_27 &= var_13;
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] [i_0] = (((var_5 >> (19446 - 19418))));
                            var_28 = var_0;
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_1 [i_0] [i_0]) || var_10);
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, (((-(arr_17 [i_2 + 1] [i_4 - 1]))))));
                            arr_27 [i_0] [i_0] [i_7] [i_4] [i_7] [i_0] [i_0] = (((1 | var_7) <= 144));
                            arr_28 [i_0] [i_0] [i_7] = (arr_3 [i_0] [i_0]);
                            arr_29 [i_0] [i_0] [i_2] [i_4] [i_7] = 515081014;
                        }

                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            var_30 &= (arr_17 [i_1] [i_1]);
                            arr_32 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] [i_1] = ((1 - (arr_25 [i_8 - 1] [i_8 - 3] [i_8] [i_8 - 3] [i_8 + 2] [i_8])));
                            var_31 = (~1434437564);
                        }
                        var_32 *= ((203 ? (arr_9 [i_1] [i_1] [i_1] [i_1 - 1]) : (arr_9 [i_1] [i_1] [i_1] [i_1 - 1])));
                    }
                    arr_33 [i_0] = 1;
                }
                arr_34 [i_0] = (var_5 ? ((62137 ? 1 : (max(7663, var_3)))) : 992);
            }
        }
    }
    #pragma endscop
}
