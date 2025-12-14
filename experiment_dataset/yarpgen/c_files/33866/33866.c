/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, var_16));
        arr_2 [i_0] [i_0] = 32533;
        var_19 = arr_1 [i_0];
        var_20 *= 8328;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, (arr_5 [i_2] [i_3])));
                        var_22 = ((165 ? (arr_7 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3]) : (arr_3 [i_0] [i_1] [i_2])));
                    }
                }
            }
        }
    }
    var_23 = (((~42380) ? var_13 : (((!((((-113 + 2147483647) >> var_17))))))));
    var_24 = ((-((var_0 + (-101 & var_11)))));
    var_25 &= var_16;
    #pragma endscop
}
