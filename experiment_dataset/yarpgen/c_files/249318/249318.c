/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = ((((arr_3 [i_0] [i_1]) | -324039202)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = (arr_6 [i_1]);
                            var_19 = ((-324039202 ? -324039225 : 324039202));
                            var_20 = (((((((324039197 ? -513370170 : -513370172))) ? var_4 : var_1))) ? 513370170 : 513370171);
                            var_21 = (((-(arr_3 [i_0] [i_1]))));
                        }
                    }
                }
                var_22 = (max(var_22, (((((((arr_8 [i_0] [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : var_8))) ? -513370170 : (arr_1 [i_0] [i_1]))))));
            }
        }
    }
    var_23 = var_14;
    #pragma endscop
}
