/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (min(((max(339205415, 3612299316))), (min((max(140737488354304, var_3)), 268435455))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 |= (((647459160 || var_5) ? ((var_12 ? (((max(var_10, (arr_3 [i_0] [i_2] [1]))))) : (min(1960394804, 268435444)))) : (((min(var_5, var_5)) * (arr_2 [i_1 + 2] [i_1 + 2])))));
                                arr_11 [i_0] [i_0] [i_2] [13] [i_3] [i_3] [i_4] = (min((((!(~var_0)))), (max(46416, (arr_3 [i_2 - 1] [11] [i_1 + 2])))));
                            }
                        }
                    }
                    var_15 *= ((((!(((1 << (var_7 - 738)))))) ? ((((!(arr_10 [i_0] [i_1] [i_1] [14] [i_2] [2] [i_2 + 1]))))) : (max(167129838, (((arr_7 [i_2 + 1] [1] [1] [1]) ? (arr_4 [i_0] [i_0]) : -98))))));
                    var_16 = (max(var_16, 2088960));
                    var_17 = ((((~((max(8561, -56))))) / var_7));
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
