/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 = (max((arr_11 [i_0 - 2]), 6076433594850114763));
                                arr_12 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2 - 1] [i_3] [i_3] [i_4] = (((var_18 ? 26136 : -1235994560)));
                                arr_13 [i_0] [i_1] [i_2 - 1] [i_3 - 1] = 1560381247;
                            }
                        }
                    }
                    var_22 = ((((min(((var_1 | (arr_8 [i_0]))), ((max((arr_0 [i_1]), (arr_6 [i_1] [i_0]))))))) ? (min(((1560381247 ? (arr_9 [i_0] [i_0] [i_1] [i_0] [i_2]) : -72)), 2734586043)) : ((((((~(arr_8 [i_2 + 1]))) <= (~120)))))));
                    arr_14 [i_2] = (arr_1 [i_0]);
                }
            }
        }
    }
    var_23 = (min((((!((min(var_0, var_9)))))), ((3588967926 ? ((4862695846170232097 ? var_18 : 1401372769)) : ((max(var_0, 2734586049)))))));
    var_24 = var_13;
    #pragma endscop
}
