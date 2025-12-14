/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_1 + ((-107 ? var_14 : var_13))))) ? (((((max(1850734987, 106))) ? -273208980315695531 : (var_17 - var_14)))) : (min(6585011525479148665, var_4))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_3] = (max(249, 33554431));
                            var_19 = (min((((min(var_16, var_10)) / ((((arr_1 [i_0]) ? -12791 : var_12))))), var_13));
                            var_20 = var_8;
                            arr_13 [i_3] = (((102 & var_4) << (((((-11698 ? (arr_2 [i_0]) : (arr_4 [i_2])))) ? (((var_16 || (arr_6 [i_0] [i_1] [i_2])))) : (arr_3 [i_0] [i_0] [i_0])))));
                            arr_14 [i_0] [i_0] = (min((((arr_8 [i_0] [i_0] [i_2] [10] [i_2] [i_3]) ? var_15 : (min(var_12, 17732923532771328)))), (~12805)));
                        }
                    }
                }
                var_21 = ((-((~((2786842232 + (arr_3 [i_0] [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
