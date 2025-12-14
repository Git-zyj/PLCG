/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_8;
    var_19 = min(var_0, ((var_5 ? ((max(var_12, var_7))) : var_12)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (((~0) ? var_8 : (((((arr_0 [i_0 + 1]) != (arr_2 [i_0 - 1])))))));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_21 *= ((var_2 ? (((arr_12 [i_0] [i_3 + 1] [i_2] [i_2] [i_0] [i_2]) ? 1988494759 : 1116772977)) : var_7));
                        var_22 = ((((((1 ? (arr_10 [i_2]) : (arr_3 [i_1]))) >= (arr_8 [i_1] [i_0 - 1] [i_0 + 1]))) ? ((var_6 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1]))) : (8719 <= var_2)));
                        var_23 = (~8717);
                    }
                }
            }
        }
    }
    var_24 -= (!var_13);
    #pragma endscop
}
