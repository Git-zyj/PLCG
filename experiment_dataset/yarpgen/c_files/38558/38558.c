/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((((arr_14 [i_0] [i_3 - 2] [i_2] [i_1] [i_2 + 3]) ? ((var_2 ? var_7 : ((var_2 ? var_4 : 11)))) : ((((var_9 | var_11) ? 22 : 14))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1] [i_1] = var_0;
                                var_13 = var_7;
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [7] = (((((var_8 & (arr_6 [i_0] [i_1] [i_2])))) ? 241 : (arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_2 - 1] [i_1] [i_0] = var_9;
                                arr_24 [i_0] [i_5] [i_2] [i_1] [i_0] |= (max(((min(4, var_2))), ((-((min(79, var_7)))))));
                                arr_25 [i_0] [i_1] [i_6] [i_5] [i_0] &= 1048576;
                                var_14 = 24;
                                var_15 ^= (((!((max((arr_6 [i_6] [i_0] [i_2]), (arr_4 [4] [4] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = min((((min(var_8, var_2)))), ((-((max(22, var_0))))));
    var_17 *= var_9;
    #pragma endscop
}
