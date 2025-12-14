/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] = arr_5 [i_0 + 1] [i_0 - 2];
                            var_10 = var_4;

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_11 = ((((58852 ? (arr_4 [i_0 - 3] [i_0 - 1]) : var_7)) / (arr_8 [i_0] [8] [8] [i_0 - 3])));
                                var_12 = ((-(arr_0 [i_0] [i_0])));
                                var_13 = 3187047348;
                                var_14 = (max(((((((arr_2 [i_3] [i_1] [i_0 + 1]) + (arr_9 [i_0] [i_0] [i_0])))) ? (((-(arr_5 [i_2] [i_2])))) : var_7)), var_0));
                            }
                            arr_15 [i_0 - 3] [i_0 - 3] [i_1] [i_0 - 3] [i_0] = ((-(arr_13 [i_0 - 2] [i_0 - 1] [i_0 - 3])));

                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_0] = (!-2103827792);
                                var_15 = ((1107919954 ? ((~(arr_6 [i_0 - 3] [i_0] [i_0]))) : (((arr_13 [i_0 + 1] [i_0] [i_0 + 1]) ? var_8 : (arr_1 [i_0 - 3])))));
                                var_16 = ((!((min(var_7, (arr_18 [i_0 - 1] [i_1] [i_1] [i_1] [i_5] [i_1] [i_1]))))));
                                var_17 = (arr_7 [i_5]);
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_18 = (((((min(var_1, 1235970691) <= (((~(arr_14 [i_6] [i_0] [i_2] [i_0] [i_0])))))))));
                                var_19 = ((2103827797 << (((var_9 + 53) - 29))));
                                arr_23 [1] [i_0] [0] [i_0] [i_0] = (-(min((min((arr_8 [i_0] [i_1] [6] [i_0]), -311404193)), (!-311404179))));
                                var_20 = ((-4573375718391703022 + (((arr_10 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0 - 2] [i_0 - 3]) / var_5))));
                            }
                        }
                    }
                }
                arr_24 [i_0] [i_1] [i_1] = ((~(arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1])));
            }
        }
    }
    var_21 = (((~(!var_5))));
    #pragma endscop
}
