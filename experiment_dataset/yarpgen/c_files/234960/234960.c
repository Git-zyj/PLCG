/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (max((((-46 <= -46) << (((arr_2 [i_0] [i_0] [i_1]) - 1723500764)))), (arr_0 [i_0])));
                arr_4 [i_0] = (max(((max((max((arr_1 [i_1]), 48)), (arr_1 [i_0])))), (min(var_7, (max(var_6, -115))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 = (((((arr_5 [i_2 + 1] [i_2] [i_2 + 1]) ? ((((arr_0 [i_4]) % (arr_5 [i_2] [i_2] [i_2])))) : (max(var_7, var_0)))) ^ (-1 != 65510)));
                                var_14 = (min(56, (max(((max(var_8, (arr_1 [i_0])))), (((arr_1 [i_3]) ? (arr_11 [i_0] [i_1] [i_1] [i_0] [i_4]) : (arr_6 [i_0] [i_1] [i_2] [i_0])))))));
                                arr_13 [i_4] = (((((~var_8) + 2147483647)) >> (var_0 - 2118771798)));
                                var_15 = ((((1 ? var_2 : (arr_12 [i_0] [i_1] [i_2 - 2] [i_3 + 1] [6] [6] [i_4 - 1]))) != (arr_11 [i_2 - 3] [i_2 - 3] [i_2 + 2] [i_3 + 1] [i_4 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = max(var_10, var_1);
    var_17 = (((((((var_3 % var_2) <= var_0)))) % ((var_11 | ((var_8 ? 10 : 48))))));
    #pragma endscop
}
