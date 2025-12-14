/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 3570266657916227603;
                var_21 = (!2980116341125600079);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 13;i_4 += 1)
                            {
                                var_22 = ((arr_4 [i_0]) ? (arr_1 [i_0 + 2] [i_0 + 2]) : 1529059067362129729);
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = ((!(arr_2 [i_2 + 1])));
                                var_23 = 1529059067362129739;
                                var_24 = (arr_8 [i_0] [i_4] [i_4] [i_4]);
                            }
                            arr_14 [i_0] [i_1] [i_3] = max((((!(arr_3 [i_0] [i_0])))), (~var_15));
                            var_25 = max(-13, ((-(arr_12 [i_0] [3]))));

                            for (int i_5 = 3; i_5 < 11;i_5 += 1)
                            {
                                arr_17 [i_0] [i_2 + 2] [i_0 - 2] [i_0] = var_17;
                                arr_18 [i_0] [i_0] [i_2] [i_0] [14] [i_3] [i_0] |= arr_9 [i_3];
                                arr_19 [i_0] [i_0] [i_1] [i_2 - 1] = (-(((arr_12 [i_0] [i_0 + 2]) - var_0)));
                                var_26 = 1529059067362129729;
                            }
                            var_27 = -1529059067362129705;
                        }
                    }
                }
                arr_20 [i_0] = (max(-var_19, ((((arr_8 [i_1] [i_1] [i_0 - 2] [i_0]) / (arr_8 [i_0] [3] [i_0 + 2] [i_0 + 2]))))));
            }
        }
    }
    var_28 = (max(var_28, ((~((var_1 ? var_10 : ((-4107474110507741957 ? var_2 : var_9))))))));
    #pragma endscop
}
