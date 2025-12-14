/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 *= (arr_2 [i_0] [i_1]);
                arr_4 [i_0] [i_1] &= (var_10 ? 6714406837217904120 : (min(232040701262528488, 18214703372447023143)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (((!18214703372447023131) ? var_14 : ((((!18214703372447023117) & var_9)))));
                                var_19 += (min((min((7917339383745742275 <= 8602399853073406516), ((var_13 ? 18214703372447023144 : 232040701262528479)))), (min(var_1, (1 ^ var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((((!((min(var_11, 2))))))) ^ 18214703372447023102));
    var_21 = var_5;
    var_22 = (max(var_22, (((((max(10529404689963809341, 13205012059357884806))) ? ((var_15 ? var_5 : var_1)) : (!var_15))))));
    #pragma endscop
}
