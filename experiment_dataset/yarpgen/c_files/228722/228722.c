/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 >> (-var_4 + 29020)));
    var_13 = ((((((var_8 + var_10) + ((var_3 ? var_10 : var_8))))) ? var_10 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1] [i_1] [i_0] = (arr_11 [i_0] [i_0] [i_2]);
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] = (max((min((arr_11 [i_3] [i_2] [i_0]), (arr_11 [i_2] [i_1] [i_0]))), (arr_8 [i_0] [i_1] [i_2])));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] = var_9;
                        }
                    }
                }
                arr_16 [i_0] [i_1] = (((~254) ? (((arr_11 [i_0] [i_1] [i_1]) ? ((((arr_12 [i_0] [i_0]) ? var_10 : 32747))) : (((arr_0 [i_1]) | (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (arr_1 [i_1])));
            }
        }
    }
    #pragma endscop
}
