/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = var_5;
                                arr_11 [i_2] = (((((30 * (arr_4 [i_3 - 1])))) ? ((((arr_4 [i_3 + 1]) < (arr_4 [i_3 - 1])))) : ((min(1, (arr_4 [i_3 + 1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_19 [14] [14] [14] [6] [i_7] [i_7] = ((268304384 << (2147483647 - 2147483616)));
                                arr_20 [i_7] [9] [i_0] = ((((((!(arr_15 [i_0] [i_0] [i_0] [i_0]))))) % (((arr_15 [i_7] [i_1] [i_5] [i_6]) ? (arr_15 [i_7] [i_6] [i_5] [i_0]) : (arr_15 [13] [i_1] [i_5] [i_6])))));
                            }
                        }
                    }
                }
                var_19 = ((((((!var_8) & (min((arr_16 [i_0] [i_1]), 144))))) || (((((var_6 + (arr_1 [i_0]))) * (((min(var_1, 1)))))))));
            }
        }
    }
    #pragma endscop
}
