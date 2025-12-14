/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 -= ((+((9223372036854775807 ? (((arr_3 [13] [i_1]) | (arr_4 [i_1] [24] [i_0]))) : (min(7481951509742436675, -1878308075))))));

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] = ((min((arr_7 [i_2 - 1] [i_2] [i_2 - 1] [i_2]), var_13)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2 + 1] [i_3] [i_1] = (max((min((arr_0 [i_2 + 1]), (arr_6 [i_2 - 1] [i_2 - 1] [i_2]))), -7225));
                                var_16 = (arr_15 [i_0] [i_0] [i_0] [i_0] [4]);
                                arr_17 [i_0] [i_1] = var_10;
                                arr_18 [8] [8] [i_2] [i_3] [i_4 - 1] [i_3] [i_2] = (((-16645 <= var_6) ? (((arr_4 [i_4 + 1] [i_3 + 2] [i_2 - 1]) ? -31146 : ((((!(arr_9 [i_0]))))))) : ((((arr_3 [i_0] [i_1]) | (min((arr_8 [i_1] [i_4]), (arr_3 [i_4] [i_1]))))))));
                                var_17 = (max(var_17, ((((arr_2 [i_2 + 1] [i_3 + 1]) ? var_4 : (((((985817820858344529 ? -7481951509742436675 : -7208))) ? var_14 : (((arr_13 [i_0] [i_0] [i_2] [i_0] [i_4]) ? var_0 : var_6)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 7481951509742436676;
    #pragma endscop
}
