/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (max(var_18, (-var_13 ^ var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (arr_4 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 |= (((arr_14 [i_0] [i_0] [19] [i_0] [i_4]) >> (((max(307889310618030366, (((18138854763091521250 ? var_10 : var_7))))) - 18446744073709551599))));
                                arr_15 [i_0] [9] [i_0] [9] [i_2] = (min((arr_14 [i_4] [i_3] [17] [i_1 - 1] [i_0]), var_3));
                                var_21 = ((((((arr_9 [16] [16] [i_2] [i_2] [6] [16]) ? (arr_12 [i_3] [13] [i_2] [i_1] [i_1 - 1] [i_1 - 1] [i_0]) : var_2))) ? 307889310618030366 : ((((arr_6 [i_2] [1] [3] [i_1 - 1]) / 307889310618030369)))));
                                arr_16 [i_2] [i_2] [0] [i_2] [i_2] [i_2] [i_2] = (arr_4 [1] [i_0]);
                                var_22 = (!307889310618030366);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_23 *= (((18138854763091521255 / 307889310618030366) ? (max(((307889310618030360 ? 307889310618030366 : 18138854763091521250)), (arr_7 [i_1 - 2]))) : (arr_21 [3] [i_5] [i_5] [10] [i_0] [i_0])));
                            var_24 += var_5;
                            var_25 += ((!(((18138854763091521229 ? 18138854763091521249 : 18138854763091521247)))));
                            var_26 = (max(18138854763091521249, 307889310618030366));
                            var_27 = arr_21 [i_6] [i_6] [i_5] [i_1] [i_1] [12];
                        }
                    }
                }
                arr_22 [i_1] &= (max(((max(var_1, (arr_12 [i_0] [1] [i_0] [i_1 - 3] [i_1] [i_1 - 1] [i_1 + 3])))), (max(var_5, 18138854763091521258))));
            }
        }
    }
    var_28 |= ((((max(18138854763091521229, var_11)))));
    #pragma endscop
}
