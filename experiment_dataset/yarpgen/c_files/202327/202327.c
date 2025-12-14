/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (!var_14);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, var_4));
                                var_20 = (((((arr_7 [i_2 - 2] [i_1 + 3] [i_1] [i_3 + 1]) ? var_16 : (arr_7 [i_2 + 1] [i_1 + 3] [i_1] [i_3]))) < ((var_4 ? (arr_7 [i_2 + 1] [i_1 + 3] [i_1] [i_3]) : var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (var_0 != var_10);
    var_22 = (!var_12);
    var_23 = ((-(((min(var_13, var_10))))));
    var_24 = ((~(max(25780, (((var_14 ? var_2 : var_6)))))));
    #pragma endscop
}
