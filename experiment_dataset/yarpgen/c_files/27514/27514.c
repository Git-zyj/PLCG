/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [6] = (~(min(60791, (arr_2 [i_1]))));
                var_10 = ((((max(((var_5 ? var_1 : 26)), 186))) ? var_0 : (((((arr_4 [i_0] [i_1]) < ((max(var_3, var_6)))))))));
                arr_6 [i_0] [i_0] = ((((min((arr_2 [i_0]), (arr_2 [i_1])))) ? var_6 : (min(((min(var_5, -102))), ((74 ? var_7 : 234193544))))));
                arr_7 [i_0] [i_0] [10] = (((((!var_1) ? ((min(var_6, var_1))) : ((var_7 ? 22 : var_0)))) | (arr_4 [i_0] [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_4] [i_2 - 1] = (max(((!(!39535))), (((((var_1 ? var_3 : 948510681))) && ((max((arr_11 [i_2] [i_3]), var_4)))))));
                    arr_16 [i_2 - 2] [i_2] [i_2] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
