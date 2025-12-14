/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0 - 2] = (((!-492771647) ? (arr_5 [i_0 + 1] [11] [i_2]) : 4294967289));
                    var_20 |= (((-(var_17 - 10384795150809635669))));
                    var_21 |= ((((((arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 2]) ? (arr_3 [i_0 - 2] [i_0 + 1] [i_2]) : -1561078023))) ? ((((min(10384795150809635659, (arr_4 [i_0 - 1] [i_1])))) ? ((~(arr_3 [i_2] [i_0] [i_0]))) : ((max((arr_6 [i_2] [i_2] [10] [i_2]), 128))))) : ((min((arr_5 [i_0 - 2] [i_1] [i_2]), (arr_5 [i_0] [i_0] [i_2]))))));
                    arr_9 [i_0 - 2] [i_1] = (((~1353029366532800846) && (arr_4 [i_0 - 2] [i_0 - 2])));
                }
            }
        }
    }
    var_22 = (max(((((var_7 + var_3) ? (var_12 + var_0) : ((536870911 ? 47 : var_8))))), ((-(var_0 / 10384795150809635664)))));
    var_23 = (var_1 == var_4);
    #pragma endscop
}
