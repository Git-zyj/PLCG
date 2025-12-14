/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 ^= var_7;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (((min(((min((arr_3 [i_0] [i_0]), var_12))), (arr_0 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_3] [i_4] = (max((arr_12 [i_4 + 2] [i_4] [i_4] [i_4] [i_4] [i_4 + 2] [i_4 + 3]), -4561));
                                var_23 = (max(var_23, ((min((min(var_9, (var_3 || var_6))), (((max((arr_1 [i_0]), 235033538)))))))));
                            }
                        }
                    }
                }
            }
        }
        var_24 = ((1146849750 ? 536870911 : var_0));
    }
    var_25 = (max(var_25, ((min(((var_19 ? ((1146849750 ? var_5 : var_9)) : ((min(var_7, var_6))))), ((min((!536870911), (min(-536870894, var_14))))))))));

    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        arr_17 [2] = ((((min(4294967294, (arr_3 [i_5 - 1] [i_5 + 1])))) ? 11398 : (var_8 < var_15)));
        var_26 = ((min(1852945811, 4294967294)) - (var_2 + var_7));
    }
    #pragma endscop
}
