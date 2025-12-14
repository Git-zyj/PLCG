/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((~(((((~(arr_5 [i_0] [i_0] [i_0] [i_0]))) >= (((arr_2 [i_0] [i_1]) ? -14 : 54342)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = max((((arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) : (arr_7 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))), (min(var_18, (arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))));
                                var_19 = ((18446744073709551615 ? 32210 : 2));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_20 = ((0 ? ((max(15, 246))) : -7525234033209536503));
                                var_21 ^= ((max((max(4112168312123368260, (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_2 [i_0] [i_1])))));
                                var_22 += (((arr_8 [i_5] [i_6 - 1] [i_5] [i_5] [i_5]) && (((17688497647978536220 / ((min((arr_9 [8]), (arr_1 [i_5])))))))));
                                var_23 += ((42 | (((var_7 ? ((max(var_10, 245))) : ((max(var_6, var_11))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 ^= ((!((min(-18446744073709551609, var_8)))));
    var_25 = 40;
    #pragma endscop
}
