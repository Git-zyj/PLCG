/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (max((arr_6 [i_2]), ((((arr_6 [i_0]) && (arr_6 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = ((((((var_8 ? var_9 : 59389)) ? (((var_1 ? (arr_4 [i_1]) : var_5))) : (arr_11 [i_0] [i_2] [i_3 - 2])))));
                                var_17 = (6138 && 61);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
