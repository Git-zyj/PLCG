/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (max((~1), (((arr_6 [i_0 + 4] [i_0 - 2]) ? (((((arr_1 [i_0]) && 2125575857609466292)))) : (max(var_1, 1526568356))))));
                    arr_9 [12] [i_0] = (arr_6 [i_1 - 1] [i_1 - 1]);
                    var_20 *= (max(((max((arr_8 [i_1 - 1]), (arr_8 [i_1 - 1])))), (max((arr_4 [i_0 + 3] [i_2 - 1]), (max(-1192457966, 255))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_2] [i_2] [i_2 + 1] [i_2] [i_2] = (((((!((((arr_0 [i_1 - 1] [i_0]) ? 885562002 : var_14)))))) + (arr_11 [i_0] [i_1 - 1] [i_2 - 2] [i_3])));
                                var_21 *= ((((!(arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 2]))) ? ((~(arr_0 [i_2 + 1] [i_2 + 1]))) : (max(-31208, ((min((arr_5 [i_2] [i_2]), 0)))))));
                                var_22 -= 1403657507;
                                var_23 *= ((((((arr_5 [i_1 - 1] [i_0 - 1]) ? 0 : (arr_12 [i_3] [i_3] [i_2 + 2] [i_2] [i_1 - 1] [i_0 - 1])))) ? (((~(arr_5 [i_1 - 1] [i_0 + 3])))) : ((-(arr_2 [i_2 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((var_5 ? ((max(var_12, var_3))) : (~var_5)));
    var_25 = var_17;
    #pragma endscop
}
