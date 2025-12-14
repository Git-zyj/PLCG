/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = var_1;
                                var_17 ^= min(((8191 << ((((max(var_9, -13569))) - 223)))), (max(((var_2 << (((arr_4 [1] [1]) - 56405)))), var_12)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_19 [20] [i_2] [i_0] [i_2] [i_2] [i_2] = var_14;
                                arr_20 [i_1] [i_0] [15] [i_5] [i_6 - 1] = (((!var_8) ? (arr_5 [i_6] [i_2] [i_1 - 1]) : ((min(20261, (arr_5 [19] [i_1 - 1] [i_5 - 3]))))));
                                var_18 = 13569;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
