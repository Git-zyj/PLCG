/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = var_15;

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            var_20 = ((-(arr_7 [i_0] [i_0] [i_4] [i_1 - 1] [i_3 + 1])));
                            arr_11 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] = ((((arr_1 [i_0]) / (arr_4 [i_3] [i_2] [i_1]))));
                            var_21 += 2088670807;
                        }
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            arr_15 [i_5] [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = ((((206 && (arr_12 [i_0] [i_1 - 2] [i_5 + 1] [i_5] [i_5])))));
                            var_22 = ((1950171156 & (var_2 != var_9)));
                            var_23 = (arr_13 [i_0] [i_1] [i_0] [i_0] [i_3] [i_5]);
                            var_24 = ((((1950171163 != (arr_4 [i_3 - 2] [i_1 - 2] [i_2])))) ^ var_17);
                            var_25 = (arr_12 [i_3] [i_3] [i_3 - 2] [i_3] [i_3]);
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            var_26 = (arr_14 [i_1 + 1] [i_1 + 1] [i_3 - 1] [i_6 - 2] [i_0]);
                            arr_18 [i_0] [i_2] [i_2] [i_2] [i_1] [i_0] [i_0] = (arr_5 [i_1 - 2]);
                        }
                        arr_19 [i_0] [i_0] [i_0] = var_7;
                        arr_20 [i_0] [i_0] [i_0] = (arr_7 [i_2] [i_2] [i_2] [i_2] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_27 = ((((((((var_13 < (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) & (arr_23 [i_7] [i_0] [i_0]))) < 126));
                                var_28 += (!1073741823);
                                arr_26 [i_0] [i_1] [i_0] [i_7] [i_8] = (var_17 / (arr_4 [i_1 - 1] [i_1] [i_0]));
                                arr_27 [i_0] [i_0] [i_0] = (var_3 <= var_11);
                            }
                        }
                    }
                    var_29 ^= (3832026837 & var_2);
                }
            }
        }
    }
    #pragma endscop
}
