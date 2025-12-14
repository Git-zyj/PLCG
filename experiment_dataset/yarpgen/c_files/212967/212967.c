/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~((32768 ? 32768 : 0))))) ? (min((((var_9 + 9223372036854775807) >> var_16)), var_8)) : (((max((var_18 < 32770), var_16))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((((1917624415 - (~var_8)))) ? (~32768) : (((arr_3 [i_0] [i_1]) ? (arr_3 [i_1] [i_0]) : -157582975))));
                var_21 = (arr_1 [i_0]);
                arr_4 [i_0] [i_0] [i_0] = ((!(((((min(var_1, (arr_2 [i_0])))) / (((arr_3 [i_0] [i_0]) * 288230376151711740)))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = (((min((((arr_3 [i_0] [i_1]) ? 7713627917205723408 : -10974)), var_2)) | (((var_1 ? var_18 : -157582955)))));
                                arr_11 [i_2] = (((max((((var_2 ? var_0 : (arr_6 [i_2])))), (min(-8661569239523639095, var_7)))) ^ ((min((((149 ? 149 : -157582972))), (min(var_6, var_12)))))));
                                var_23 = (157582971 ? ((((!((min(107, var_7))))))) : ((((6571419413620625095 ? 49152 : 34359738367)) + 84)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
