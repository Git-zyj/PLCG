/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = 917311943;
                                arr_15 [14] [i_3] [3] [i_1] [i_1] [i_0] = ((!var_2) & (((arr_6 [i_0] [i_3] [i_4]) | var_10)));
                                var_21 += (~1872091287);
                            }
                        }
                    }
                }
                var_22 = 2422876008;
                arr_16 [i_0] = ((~((var_15 * (((135 > (arr_4 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_23 = (~var_4);
                            var_24 = ((((((!(arr_6 [i_0] [10] [i_5]))))) + (max(var_6, var_0))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (644395471 ? 0 : 16262);
    #pragma endscop
}
