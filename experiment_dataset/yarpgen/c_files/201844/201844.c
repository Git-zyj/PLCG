/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = (((((-((8781614271692587180 ? 111 : (arr_2 [22])))))) ? ((max(var_10, 63488))) : (min(-2296007335917513734, -2296007335917513734))));
        arr_3 [i_0] [i_0] = (((35014 + (-127 - 1))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, (((((~0) && ((var_12 < (arr_4 [i_3] [i_1])))))))));
                        var_16 = (min(var_16, (((((((~var_7) ? (!4229067911) : var_8))) ? (((var_13 / var_7) / -673382733)) : (!var_3))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((min((35002 * var_4), ((min(44795, var_12))))));
                        arr_13 [i_0] [i_0] [i_1] [17] [i_0] [i_0] = ((((((min(var_13, var_6))) ? (~var_13) : (arr_5 [i_0 - 1] [i_0]))) == -0));
                        arr_14 [i_0] [i_0] = (max(-var_5, (((arr_7 [i_0] [i_1] [i_2] [i_0 - 1]) | var_6))));
                    }
                }
            }
        }
        arr_15 [i_0] = (((arr_2 [i_0]) ? (((((((arr_2 [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : -1946279461))) ? (549438115 + -1946279461) : -1))) : (min(var_2, var_8))));
    }
    var_17 = (!var_6);
    #pragma endscop
}
