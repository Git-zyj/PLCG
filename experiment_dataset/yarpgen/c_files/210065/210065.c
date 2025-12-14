/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_11));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_14 |= (arr_0 [i_0] [i_0 - 4]);
        var_15 ^= (((min((arr_0 [i_0] [i_0]), 43659))));
        var_16 = (max((min(7445372197845230835, (arr_1 [i_0 - 1])), (arr_1 [i_0 - 1]))));
        var_17 |= ((-46 <= (min(-117, 11001371875864320791))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 |= ((-(arr_3 [i_1] [i_1])));
        var_19 = (!(arr_3 [i_1] [i_1]));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_6 [i_1] [1] = 255;
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_20 &= 262786593145511632;
                            var_21 *= (((arr_5 [i_1] [i_3]) ^ 15));
                            var_22 -= var_12;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
