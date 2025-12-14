/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((var_6 ? ((max(-9941, var_13))) : var_0));
    var_21 *= (((min(var_6, var_5))) + (min((var_3 && 36), -28245)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_8 [5] [i_1] [i_1] [i_0] = var_2;
                            arr_9 [i_0] [i_1] [i_1] [i_3] = ((((((arr_4 [i_2 - 2] [i_0 + 2]) >> (((arr_4 [i_2 - 4] [i_0 - 1]) - 7679381710289214519))))) ? (((arr_0 [i_2 - 1]) | 1)) : ((-(arr_0 [i_2 - 2])))));
                            var_22 = (min((((9541762740049410399 ? 9962 : ((min((arr_1 [i_0] [i_1]), 1)))))), ((var_4 ? ((var_6 ? var_19 : (arr_3 [i_2 - 2] [i_2]))) : ((min(var_4, -1177664331)))))));
                            var_23 = var_11;
                            var_24 = (max(var_24, (((arr_0 [7]) ? ((((!(arr_5 [i_0 - 2] [i_1] [10] [i_0 + 3]))))) : (arr_0 [i_0])))));
                        }
                    }
                }
                var_25 += (max((((max(631236472, (arr_5 [i_0] [i_0] [i_0] [i_0]))))), (((arr_7 [i_0] [i_0] [i_0 - 3] [i_0] [i_0]) % (arr_1 [i_0 + 1] [i_0 + 3])))));
                arr_10 [i_0] = (min(((((arr_4 [i_0] [i_0 + 1]) ? var_11 : -var_0))), (min((arr_3 [i_0 - 3] [i_0 - 1]), 94753313106508332))));
            }
        }
    }
    var_26 = (((((var_3 ? var_15 : ((var_10 ? var_8 : -9952))))) ? (-20 | var_6) : ((var_10 ? var_11 : (min(var_13, var_3))))));
    #pragma endscop
}
