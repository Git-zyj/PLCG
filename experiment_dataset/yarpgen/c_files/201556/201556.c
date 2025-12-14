/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((((((!(!2356040142))))) < var_9));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_0] = ((var_1 / var_15) / (((-(arr_6 [i_0] [i_0] [i_2 + 2] [i_0])))));
                    arr_9 [i_1] [i_0] [i_2 - 3] [i_0] = (var_10 << 1);
                }
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_20 = (min(var_20, var_1));
                            var_21 = (max(var_21, ((((((((arr_4 [i_1] [i_3 - 1] [i_1]) / 3471422233)))) << (((max(var_7, (arr_1 [i_1]))) - 42249)))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((max(var_11, (max(var_6, var_6)))));
    #pragma endscop
}
