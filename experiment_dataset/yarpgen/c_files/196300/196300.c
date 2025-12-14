/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_0);
    var_13 = ((((((min(var_9, (-9223372036854775807 - 1)))) ? var_6 : (min(186, var_0))))) && var_5);
    var_14 = (((-var_2 / var_11) >> (((((min(-5397672997783660951, var_3)) & (var_8 + -67))) - 2151809070))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = ((max(var_7, (arr_5 [i_1] [i_1 + 2] [i_2 - 2] [1]))) * (!3028911720203431655));
                    var_16 = (max(var_16, var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (((max(var_6, ((((arr_9 [12] [i_1] [i_3 - 1] [i_3 - 1]) <= var_1))))) >> (var_2 + 57)));
                                var_18 = ((((((arr_11 [11] [11] [1] [i_0] [i_0 - 1]) + 186))) || (arr_2 [i_0 - 1] [i_3 + 1] [i_1 - 3])));
                                var_19 *= max(var_8, var_7);
                                var_20 = ((-var_4 && (var_11 & var_0)));
                                var_21 = (max(var_21, (((((var_6 + (arr_3 [i_3] [i_3 - 1]))) < 186)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
