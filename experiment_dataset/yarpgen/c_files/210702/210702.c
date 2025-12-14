/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 *= (((arr_0 [i_0]) >= (((var_0 + var_10) + var_4))));
                arr_6 [i_0] = ((((!(var_11 & var_1))) ? (((!(arr_1 [i_1])))) : ((((var_7 != (arr_0 [i_0]))) ? ((max((arr_2 [i_0]), (arr_2 [i_1])))) : (arr_4 [i_0] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [2] [i_1] [i_3] [i_3] [i_1] = (arr_9 [i_0] [i_0] [16]);
                            var_17 = (arr_0 [i_0]);
                            var_18 *= max((((arr_8 [i_0]) ? (arr_10 [i_0] [i_0] [i_2] [i_3]) : var_13)), (var_2 && var_14));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
