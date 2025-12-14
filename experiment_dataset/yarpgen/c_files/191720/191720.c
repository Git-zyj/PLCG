/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [3] [11] [1] [i_2] = (max((((var_5 ^ (arr_3 [11] [i_0])))), (!var_7)));
                    var_18 = ((((((arr_3 [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_1 + 1] [i_1 - 1]) : (arr_3 [i_1 + 1] [i_1 + 1])))) ? ((max((arr_3 [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1 + 1])))) : (arr_3 [i_1 + 1] [i_1 + 1])));
                }
            }
        }
    }
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_23 [i_7 + 1] [i_3] [i_5] [i_3] [i_3] = (((+(((arr_9 [i_4 - 1] [i_7]) ? (arr_10 [i_3]) : var_16)))) | ((((arr_8 [i_5]) < (var_16 || var_17)))));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [1] = (i_3 % 2 == zero) ? ((max(var_7, (((max(var_7, var_5)) >> (((min((arr_10 [i_6 + 1]), (arr_13 [i_3] [i_3] [i_3] [i_7]))) - 14945292493510411195))))))) : ((max(var_7, (((max(var_7, var_5)) >> (((((min((arr_10 [i_6 + 1]), (arr_13 [i_3] [i_3] [i_3] [i_7]))) - 14945292493510411195)) - 3892467146551640748)))))));
                                var_20 = var_10;
                                arr_25 [i_3] [i_4] [i_4] [i_4] [i_3] [8] [8] = ((((((((arr_16 [i_3] [i_4] [i_5] [i_3]) ? (arr_15 [i_3] [i_6]) : var_12))) ? (arr_17 [8] [i_6] [i_6 - 2] [i_6 + 1] [i_3] [i_6]) : (min(var_10, var_12)))) <= (arr_14 [i_4] [i_6])));
                            }
                        }
                    }
                }
                var_21 -= (!(min((((arr_14 [i_3] [2]) < var_13)), (!var_15))));
            }
        }
    }
    var_22 |= var_11;
    #pragma endscop
}
