/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = ((var_3 != (((~(min(126, (arr_2 [i_0]))))))));
                arr_6 [i_0] [i_0] [i_0] = -7775676035984764978;
            }
        }
    }
    var_18 = ((55 ? (min(var_10, ((var_12 >> (3567551523335027844 - 3567551523335027790))))) : ((-((var_7 ? var_4 : var_3))))));
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                arr_15 [i_2] = (22103 * (min((var_15 & -35299448490621713), ((min(var_14, 3622025887))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_20 = (max((var_2 || 6), (((((arr_17 [i_2] [i_2] [i_4] [i_4]) || var_4)) ? (!165) : (min(var_3, var_9))))));
                            var_21 = var_10;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
