/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (((((arr_2 [i_2]) <= (((90 ? (arr_1 [i_4] [i_2]) : var_8))))) ? ((((((arr_1 [12] [12]) ? (arr_12 [i_4] [i_2] [i_3] [i_2] [i_1] [i_0] [i_0]) : var_7)) <= (!var_1)))) : var_13));
                                var_19 = var_15;
                                var_20 = (((((((var_14 ? 532676608 : (arr_2 [i_0]))) % (arr_2 [i_0])))) ? var_10 : -32764));
                            }
                        }
                    }
                    var_21 = var_5;
                }
            }
        }
    }
    var_22 = var_10;
    var_23 = (var_5 ^ var_2);
    var_24 = (var_1 % var_8);
    var_25 = var_6;
    #pragma endscop
}
