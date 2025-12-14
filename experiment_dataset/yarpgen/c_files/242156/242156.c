/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((((~((max(var_3, var_0)))))) | (min((~var_1), var_14))));
    var_18 |= ((~((-(0 - 43654)))));
    var_19 += (max((134086656 | 1), ((var_4 ? ((1 ? 0 : 9848865467121472293)) : (((-121 ? 0 : 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = (max((((arr_6 [i_0 - 1]) - (arr_6 [i_0 - 1]))), 1));
                    arr_9 [i_0] [i_1] [i_1 - 1] [i_1] = ((((arr_2 [i_1 - 1] [i_1 - 1]) - (arr_5 [i_0] [i_1] [i_2]))));
                    var_20 = ((-(((~40) ? (arr_6 [i_0]) : (((var_12 && (arr_1 [i_1 - 1]))))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_21 = (max(var_21, (arr_5 [i_3] [i_3] [i_3])));
                        var_22 = (~var_8);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_23 &= (((!var_6) ? ((var_6 ? 1 : 156)) : 600));
                        var_24 = -1;
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_25 *= (((((!(arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_1 + 1] [i_5] [10])))) >> (var_7 - 2339119032)));
                        arr_19 [i_1] = (1 + 1);
                        var_26 *= ((arr_4 [i_5]) * 1156484735);
                        arr_20 [i_5] [i_1] [i_2] [i_1] [i_0] = 0;
                    }
                }
            }
        }
    }
    var_27 = var_0;
    #pragma endscop
}
