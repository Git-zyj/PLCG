/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!1592658767);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((~((((((arr_1 [6]) ^ var_17))) ? (max(-1592658768, var_3)) : (arr_1 [0])))))));
                arr_6 [i_0 - 3] [i_0 - 3] [i_0] = (arr_5 [i_0 + 1] [i_0]);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_20 *= (min((((var_9 & var_15) ? (~var_1) : 658527905)), (((((((arr_5 [i_0] [i_2]) ? 960329189999740688 : (arr_3 [i_1])))) ? ((max(1, (arr_7 [i_2])))) : (~var_9))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = ((var_10 * (((arr_12 [i_0 - 2] [i_1 + 1] [i_0 - 2] [i_3] [i_3 + 2] [i_3 - 1] [i_4]) & var_7))));
                                var_22 *= ((~((((((arr_0 [8]) ? (arr_13 [i_0] [i_0] [5] [5] [5]) : (arr_10 [i_0 - 1] [i_0 - 1] [i_3] [i_4])))) ? ((((arr_10 [i_2] [i_3] [i_2] [i_0 - 3]) << var_17))) : (((arr_9 [i_0] [i_1] [i_2] [i_4]) ? 0 : var_2))))));
                                arr_14 [i_0] [i_2] [i_2] [i_0] [i_4] [i_4] [i_0] = (2203879597333871620 >= 16242864476375679996);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_23 = 2203879597333871625;
                            var_24 = ((!((((var_5 ? (arr_8 [i_0] [i_1 + 2] [i_5 + 1] [i_1 + 2]) : var_17))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
