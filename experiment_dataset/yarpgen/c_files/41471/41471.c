/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 *= (((((arr_0 [i_0]) ? ((((arr_1 [i_0]) >> (11206531002882574561 - 11206531002882574547)))) : (arr_4 [i_0] [i_0] [i_0]))) != ((((var_6 | (arr_0 [i_1]))) - ((min((arr_1 [i_0]), 944449600)))))));
                var_14 = ((~((~(arr_4 [i_0] [i_0] [6])))));
            }
        }
    }
    var_15 = ((-((4294967291 ? 4 : 1566696314))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_17 [i_3] [i_3] [i_3] [i_3] [i_4] = (((-26 + 2147483647) >> (((!(arr_8 [i_2 + 1] [i_3]))))));
                                var_16 = (max(var_16, (((123 ? -1433283999 : 3)))));
                                var_17 += ((-(max((min((arr_15 [i_2] [i_3] [i_4] [i_5] [i_6]), (arr_2 [i_4] [i_3] [i_4]))), var_5))));
                                arr_18 [i_2] [i_2] [i_2] [i_3] [i_6] = (max((min((~17127824548139221188), 236506973)), (arr_4 [i_2 - 1] [i_3] [i_3])));
                            }
                        }
                    }
                    var_18 = ((-(((arr_2 [i_2 + 1] [i_3] [i_4]) - (arr_2 [i_2 + 1] [i_4] [i_4])))));
                    var_19 = (max(((-(max(var_9, var_12)))), (((arr_13 [i_2 - 1] [i_2 - 1]) / (arr_13 [i_2 - 1] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
