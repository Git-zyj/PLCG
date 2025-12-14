/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1 * var_7) ? ((min(1, 67))) : var_5);
    var_11 = 1;
    var_12 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((((var_4 ^ (max((arr_1 [i_0] [i_0]), 9222948146614399601))))) ? (((18 ? 1 : 1))) : ((-(var_6 >= var_9))))))));
                arr_4 [i_0] [i_0] = var_2;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 8;i_4 += 1)
                            {
                                var_14 = (min(var_14, (arr_8 [i_4 - 3] [i_3 + 2] [i_2 - 1] [i_3])));
                                arr_12 [5] [5] [i_2] [5] [i_2] [i_2] [5] = ((1 != ((var_0 ? (arr_0 [i_2 + 1]) : (arr_0 [i_2 + 1])))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_15 = (min(var_15, ((((1 || 1) ? (arr_14 [i_0] [i_1] [i_5] [i_3]) : 18446744073709551609)))));
                                var_16 = var_9;
                                var_17 = 249;
                            }
                            var_18 = (max(var_18, ((max(var_7, var_3)))));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((7119410665045569174 ? 0 : (1 * 3295480809)));
    #pragma endscop
}
