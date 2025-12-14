/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_14);
    var_21 = -2121747759;
    var_22 = ((min(-2121747760, 43331)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_23 = (max(var_23, (!3027669677)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_24 *= (max(((((((3027669686 ? 0 : 31467))) < (max(4908407804553255342, var_19))))), ((43331 ? -2121747760 : -4908407804553255321))));
                                arr_12 [i_3] [i_3] [i_2] [i_1] [i_0] = (min(-2121747773, ((((var_11 >> (var_14 - 7342)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
