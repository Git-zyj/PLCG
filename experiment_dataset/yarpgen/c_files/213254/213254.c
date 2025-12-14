/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = var_1;
                                var_17 = (-6650608883320479335 ^ -31903);
                            }
                        }
                    }
                    var_18 &= (((arr_8 [i_2 + 2]) ? -3 : 995153038));
                    var_19 &= (max((((min(var_6, var_2)) * ((138 / (arr_11 [17] [i_0] [i_1] [i_2] [i_2]))))), ((var_6 - ((((arr_4 [i_0] [i_0] [i_2]) > (arr_11 [17] [i_0] [17] [i_2 + 1] [i_2]))))))));
                    arr_13 [i_0] [i_1] [i_1] [i_2 + 3] = (((((((6025396467532323597 ? 14431 : var_1))) && (((arr_10 [i_0] [i_0] [i_1] [i_2] [i_2]) || (arr_0 [i_2]))))) || ((min((max((arr_12 [12] [i_2]), var_0)), (!var_15))))));
                }
            }
        }
        var_20 = (arr_6 [i_0 - 2]);
        arr_14 [13] [i_0] = ((((((var_5 / var_8) ? ((var_7 ? (arr_9 [i_0] [8]) : var_7)) : var_12))) - ((var_3 ? (min((arr_7 [i_0] [i_0] [i_0] [i_0]), var_1)) : (arr_1 [1])))));
        var_21 ^= ((((((~var_5) / ((max(127, 51104)))))) <= ((max(117, -6025396467532323597)))));
        var_22 = (min(((((((var_5 ? (arr_9 [i_0] [i_0]) : var_14))) ? (arr_1 [i_0]) : (((!(arr_9 [3] [3]))))))), ((-127 ^ ((((arr_2 [i_0] [i_0] [i_0]) - (arr_3 [18] [i_0]))))))));
    }
    var_23 = var_10;
    #pragma endscop
}
