/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = (max(((((arr_6 [i_1] [i_1 - 3] [i_1 + 3] [i_1]) ? (arr_6 [i_1] [i_1 - 1] [i_1 + 1] [14]) : var_9))), var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = var_3;
                                arr_12 [12] [i_1] [0] [12] [i_1] = 0;
                                var_14 = (max(var_14, ((((((~(((64053 && (arr_5 [11] [11] [i_3] [i_4]))))))) ? (((((arr_5 [i_0] [i_0] [13] [i_3]) <= (arr_1 [i_1] [i_1]))) ? ((var_6 ? var_3 : 1517460957425165937)) : (arr_0 [i_2]))) : ((((32767 + var_4) % var_3))))))));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_4] = (!-var_4);
                                arr_14 [i_1] [i_1] = (((arr_4 [i_1] [i_1] [i_3]) - var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
