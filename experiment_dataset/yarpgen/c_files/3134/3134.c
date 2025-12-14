/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((max((((1383805053590595851 ? 38 : var_4))), (~2186505025))))));
    var_20 = ((((((max(99, 121))) && (((-8690 ? var_1 : var_4)))))) & (min((((var_7 + 2147483647) << (var_3 - 6338912653865859730))), (0 ^ var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = ((-8690 && 32) ? (arr_5 [i_1] [i_1]) : 83);
                    var_22 = (min(var_22, (arr_8 [i_0] [i_0] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_23 += ((20 ? ((((max(8690, 11279231430382508842))) ? (arr_9 [i_2 + 1] [i_2] [i_2 + 3] [i_2] [i_3 - 1] [i_3 + 2]) : -3397422692056412429)) : (((max((arr_10 [i_2 + 2] [i_2] [i_3 - 2] [i_3] [i_3] [i_3 - 1]), (arr_10 [i_2 + 2] [i_2] [i_3 - 2] [i_3] [i_0] [i_3 - 1])))))));
                                var_24 -= (min(3397422692056412428, (((arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_3 - 3] [i_3] [i_3 - 2]) ? (arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_3 - 3] [i_0] [i_3 - 2]) : (arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_3 - 3] [i_3] [i_3 - 2])))));
                                var_25 = ((-(((arr_10 [i_2] [i_1] [i_2] [i_2 + 3] [i_1] [i_4]) >> (arr_9 [i_0] [i_1] [i_2] [i_2 + 3] [i_3 - 3] [i_3])))));
                                var_26 = (arr_13 [i_2] [i_2 - 4] [i_2] [i_2] [i_1] [i_1]);
                                var_27 = ((((-8667 ? (arr_9 [i_3] [i_3] [i_3 - 3] [i_3] [i_3 - 4] [i_3]) : (arr_9 [i_1] [i_3 + 1] [i_3] [i_3] [i_3 + 2] [i_3]))) < (arr_5 [i_1] [i_2 - 2])));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((((-3397422692056412429 ? 143 : 44)) / -46734763));
                }
            }
        }
    }
    var_28 = (((((((3397422692056412411 >= 17399668581409946960) == (178 | -1))))) + 4576811551164118867));
    #pragma endscop
}
