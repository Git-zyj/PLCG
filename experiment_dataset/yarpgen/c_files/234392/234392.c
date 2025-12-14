/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((-((max(165, var_16)))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_18 = (arr_1 [i_0 + 1] [i_0 - 1]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    {
                        var_19 = -123;
                        var_20 = (((arr_0 [i_2] [i_1]) ? (arr_6 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3 - 3]) : (((arr_9 [i_3] [i_1] [i_1] [i_0]) ? (((var_8 ? var_3 : (arr_5 [i_3 + 2] [i_1])))) : (arr_0 [i_0] [i_0])))));
                        var_21 = (((arr_5 [i_0 + 2] [i_0 + 2]) ? ((((arr_5 [18] [i_0 - 1]) > (arr_5 [i_3] [i_0 + 1])))) : ((min((arr_5 [i_2] [i_0 - 1]), (arr_5 [i_3] [i_0 + 2]))))));
                    }
                }
            }
            var_22 = (min(var_13, (((arr_2 [i_0 + 2] [i_0 + 2] [i_0 - 1]) | 3390230817))));
        }
    }
    var_23 += ((-((~(var_6 / var_10)))));
    var_24 = (min((var_9 > var_3), 24874));
    var_25 = ((~((var_14 ? var_7 : var_10))));
    #pragma endscop
}
