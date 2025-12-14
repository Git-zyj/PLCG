/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((1 & ((min(var_5, var_14)))))) % (((((1 ? var_14 : var_0))) ? (1 + var_14) : (max(var_2, 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (min(var_20, 1));
                var_21 = ((((((((var_13 ? 1 : var_11))) % (max(var_0, var_14))))) ? (((((255 ? var_14 : 244))) + (13 + 9223372036854775807))) : (((var_14 - var_10) ? ((8387079474321887331 ? 244 : 0)) : 10059664599387664285))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] = (min((243 / var_5), var_0));
                                arr_12 [i_4] [i_3] [i_2] [i_1 + 2] [i_1] [i_0] [i_0] = var_11;
                                var_22 = (min(var_22, ((((((-9 + 255) + 10059664599387664310)) << var_12)))));
                                arr_13 [i_0] [i_1 + 2] [i_2] [i_3] [i_4] [i_4] [i_3] = 176350540366659006;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
