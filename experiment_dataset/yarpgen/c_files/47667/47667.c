/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = ((-19348 ? -19 : (arr_1 [i_0])));
        var_21 = (((arr_1 [i_0 - 1]) ? (((arr_1 [i_0 - 1]) ? var_7 : 1101043242)) : ((((!(arr_0 [i_0 - 1])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_22 = (max(var_22, ((((arr_4 [i_2]) || (((var_16 ? var_13 : (arr_1 [i_4])))))))));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_23 = ((var_10 * (arr_9 [8] [i_3 + 2] [i_5])));
                            var_24 = (arr_13 [3] [3] [i_2] [i_3] [5] [i_4] [5]);
                        }
                        var_25 = 246;
                        var_26 = (((((var_12 ? -4994 : 1))) ? ((-13729 ? (arr_4 [i_1]) : var_14)) : var_18));
                    }
                }
            }
        }
        var_27 &= var_16;
        var_28 &= 5;
        var_29 = ((-var_13 == ((3366331467 ? -26 : 65535))));
    }
    var_30 = (!var_2);
    var_31 ^= var_12;
    #pragma endscop
}
