/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = ((var_1 ? ((min(860268319, ((((arr_0 [i_1]) == (arr_1 [i_2]))))))) : (max((-9223372036854775807 - 1), var_11))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (max(var_16, var_5));
                        var_17 = (((((520093696 << (var_7 - 81)))) ? 5155441536614131497 : var_2));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_18 = ((((max((arr_14 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5]), (arr_15 [i_5 + 1] [i_5 - 1] [i_5 + 1])))) && (((var_7 ^ (var_12 | var_8))))));
                    var_19 = (max((max(var_7, var_14)), var_1));
                }
            }
        }
    }
    var_20 |= var_11;
    var_21 = (min(var_12, ((var_10 ? var_2 : (((!(-2147483647 - 1))))))));
    var_22 = var_13;
    #pragma endscop
}
