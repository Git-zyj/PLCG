/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 += var_3;
                arr_5 [i_0] [i_1] = var_11;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = ((((((var_3 ? 112 : 132)))) ? 1 : ((-19393 ? var_8 : 132))));
                                arr_15 [i_0] [i_0] [i_4] = ((124 ? (max(5, 124)) : 120));
                            }
                        }
                    }
                }
                arr_16 [i_0] = var_0;
            }
        }
    }
    var_15 = (46142 >= 19393);
    #pragma endscop
}
