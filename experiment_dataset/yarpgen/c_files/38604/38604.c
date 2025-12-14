/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = ((790503818327641250 ? (arr_2 [i_0]) : (((min(63208, var_6)) + 2147483647))));
                            var_21 = (min(var_2, (((arr_4 [i_1 + 1]) & (max(-26686, 4273320885884775673))))));
                            var_22 += (((((((min(var_6, (arr_0 [i_1])))) ? -var_17 : 35850))) || (~26686)));
                            var_23 = (((arr_0 [i_1 + 1]) ^ ((~(arr_1 [i_2 + 1])))));
                        }
                    }
                }
                var_24 = ((((((arr_3 [i_1 + 2] [i_1]) ? (arr_3 [i_1 + 2] [i_0]) : (arr_3 [i_1 + 2] [i_1 + 1])))) ? (35829 && var_7) : (((min((arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_0]), var_14))))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_25 = 65522;
                            var_26 |= ((~(arr_15 [i_1 + 2] [i_1 + 1] [i_4 + 1] [i_5])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_27 = ((((((arr_7 [i_0] [i_1 - 1] [i_6 + 2] [i_6 + 2]) - var_17))) ? ((min((arr_7 [i_0] [i_0] [i_6 - 3] [4]), (arr_7 [i_0] [i_1] [i_6 + 2] [i_7])))) : var_0));
                            var_28 = (((arr_23 [i_6 - 1] [i_6 - 3] [i_6 + 1] [i_6 + 2]) ? (arr_7 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 3]) : (arr_7 [i_6 - 3] [i_6 - 4] [i_6 + 1] [i_6 - 4])));
                        }
                    }
                }
                var_29 = (max(-6733975830249629388, (((((4 ? -26682 : (arr_20 [i_0] [i_0] [2])))) ? (max(-278932447235118223, (arr_9 [i_1 + 2] [i_0]))) : (arr_15 [i_0] [i_0] [i_1] [i_0])))));
            }
        }
    }
    var_30 = (((((var_1 ? var_15 : ((var_3 ? var_8 : 2147483647))))) ? (((var_1 ? (!var_12) : var_14))) : var_6));
    #pragma endscop
}
