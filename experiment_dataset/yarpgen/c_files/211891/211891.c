/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_6 | var_1) * (!var_16)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 -= ((!((max(((max((arr_2 [i_0 + 1]), (arr_0 [i_0] [i_1])))), (0 - var_12))))));
                    arr_6 [i_0] [i_1 - 1] [i_2] = (max((min(1, 1)), var_6));
                    arr_7 [i_0] = ((min((arr_2 [i_0 + 1]), (max(var_2, (arr_3 [i_0 + 1] [i_0 + 1]))))) < (arr_1 [i_2]));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (((arr_3 [i_0] [13]) ? (arr_3 [3] [i_0]) : (arr_4 [i_0] [i_0] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] = 8575113368094581439;
                                arr_15 [i_0] [i_3] [i_2] [i_2 - 3] [i_1] [i_0] [i_0] = (((((min(var_14, 1))) | var_13)));
                                var_20 = (max(var_20, ((-((-((max((arr_2 [i_4]), (arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0 + 1] = 1;
                                var_21 -= (((min((arr_11 [i_0 + 1] [i_0 + 1]), (arr_11 [i_0 + 1] [i_1 - 1])))) && ((!(((9223372036854775807 << (((-5027603014697922420 + 5027603014697922482) - 62))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_22 = (max(var_22, (((((~(min(1, (arr_9 [i_5] [11]))))) < ((((min(var_17, (arr_2 [i_5]))) <= 0))))))));
                var_23 = ((~var_11) - (!-4666058790976395811));
                var_24 = (((!(arr_17 [i_5]))) ? (max((arr_4 [i_5] [i_6] [i_6]), (((arr_12 [i_5]) ? var_11 : 10356)))) : (min((((-(arr_2 [i_6])))), ((1 ? -3071312424966365422 : (-9223372036854775807 - 1))))));
            }
        }
    }
    #pragma endscop
}
