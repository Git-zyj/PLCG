/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = ((~((((39 > (arr_5 [i_0] [i_0] [12] [i_0])))))));
                                arr_13 [i_0] [i_1] [i_1] [12] [7] = (max((max((min((arr_4 [i_0] [i_0] [i_0] [i_4]), 22)), 10845)), var_14));
                            }
                        }
                    }
                    var_22 = (max(var_22, ((((max(var_3, (max((arr_9 [i_0] [i_1] [i_2] [i_2] [i_0]), (arr_11 [i_2] [i_1] [i_1] [i_1] [12] [i_0] [i_0]))))) + (arr_1 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_23 = max((((!(((-468 ? -466 : 121)))))), (127 * -var_16));
    var_24 = ((var_0 ? (((var_13 ? (var_7 + var_18) : (121 >= 4719589230801737425)))) : (((~-32761) ? ((var_8 ? 8388607 : var_0)) : var_10))));
    #pragma endscop
}
