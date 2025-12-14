/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-9001299 + 2147483647) << (27877 - 27877)))) ? var_9 : var_6);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_1] [i_1] [i_2] = (((((((((arr_8 [i_3]) | (arr_7 [i_0] [i_1] [i_1])))) & (((arr_10 [1] [0] [1] [0] [i_3]) - (arr_7 [i_1] [i_2] [i_1])))))) ? (((arr_0 [i_1 + 1] [i_2 + 3]) & (arr_7 [5] [5] [i_1]))) : (arr_3 [i_1 + 3] [i_2] [i_1])));
                            var_18 ^= var_14;
                            var_19 = ((((var_9 ? (1887061983 | var_9) : (arr_0 [i_2] [1])))) ? ((((((arr_4 [1] [i_1 + 2] [i_1]) ? var_5 : 17137838758178872816))) ? ((max((arr_3 [i_0] [1] [i_1]), 200341393))) : ((var_8 ? (arr_6 [i_1] [i_1]) : var_7)))) : (((-(((arr_7 [i_0] [i_1 + 1] [i_1]) ^ -1))))));
                            var_20 ^= ((((((!(arr_5 [1]))))) ? (((((min(var_6, (arr_10 [i_0] [5] [i_0] [i_0] [i_0])))) ? (arr_6 [16] [2]) : (arr_7 [i_0 - 1] [i_0 - 1] [6])))) : ((((((arr_3 [10] [i_1] [4]) & var_10))) ? (arr_0 [i_0] [11]) : (!16479079538045224813)))));
                        }
                    }
                }
                var_21 *= ((((1308905315530678786 ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 2]))) | (((arr_2 [i_0 + 1]) ? (arr_4 [1] [i_0 - 2] [2]) : 1))));
            }
        }
    }
    #pragma endscop
}
