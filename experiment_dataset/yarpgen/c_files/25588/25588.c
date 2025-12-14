/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_17 -= ((-(max(var_11, var_3))));
                        arr_9 [i_0] [i_0] [i_2] = (arr_5 [i_0] [i_1]);
                    }
                    arr_10 [9] [i_1] [i_2] = ((((min(((min(69, -341061419))), ((var_8 ? (arr_3 [7]) : (arr_0 [i_0])))))) ? ((((((min(var_7, (arr_3 [i_1])))) && ((min(var_0, (arr_0 [i_0])))))))) : var_10));
                    arr_11 [i_1] [i_1] [i_1] |= (min(var_13, (!69)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_18 [i_2 - 2] [i_2 - 3] [i_2 + 1] [i_2] [i_2 - 1] = (arr_7 [i_2 - 2] [i_1] [i_2 - 1]);
                                var_18 *= ((min((~var_14), (((var_16 ? (arr_3 [i_2 + 1]) : var_8))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((var_13 ? var_2 : (!var_13)));
    var_20 = (((min(var_9, var_1)) - (((((var_10 - 47) < 69))))));
    #pragma endscop
}
