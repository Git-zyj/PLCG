/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (+-11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 = ((!((((!var_6) ? var_5 : (min(var_8, var_4)))))));
                                var_12 = (min(var_12, (((((-((11 ? (arr_7 [i_0] [i_4] [i_0] [i_3]) : 2154950649))))) ? var_4 : var_5))));
                                var_13 = (arr_12 [i_0] [i_3] [i_2] [i_3]);
                            }
                        }
                    }
                    var_14 = ((var_8 ? (((arr_3 [i_1 - 2] [i_1 + 2] [i_2]) ? var_4 : var_3)) : (min(var_4, var_3))));
                    var_15 = 2140016633;
                    var_16 = var_9;
                }
            }
        }
    }
    var_17 = ((var_6 ? ((var_4 | ((max(2140016633, 252))))) : (((((((-32767 - 1) ? var_3 : var_5))) ? (~var_0) : var_8)))));
    #pragma endscop
}
