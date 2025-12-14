/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 4398046511072));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_19 *= ((((var_2 == (arr_0 [11]))) ? ((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : var_16))) : ((var_6 ? (arr_1 [i_0]) : ((4398046511066 ? (arr_1 [16]) : 87))))));
        var_20 |= 15;
        var_21 |= (((~((var_14 ? var_10 : (arr_2 [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_22 *= var_6;
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] |= ((3296945460 ^ (!85)));
                        var_23 += (0 - -50);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        var_24 *= -4398046511066;
        var_25 = (max(var_25, 7541));
        arr_19 [i_5] |= (arr_0 [i_5]);
    }
    for (int i_6 = 2; i_6 < 23;i_6 += 1)
    {
        var_26 *= (!-431);
        var_27 *= (min(var_0, 0));
        var_28 |= ((-((min(2, 1)))));
        var_29 = var_16;
        var_30 *= 431;
    }
    #pragma endscop
}
