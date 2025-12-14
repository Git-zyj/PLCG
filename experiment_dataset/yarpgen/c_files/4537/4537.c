/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = (arr_5 [i_1] [i_1]);

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_16 |= (((1 ? -9223372036854775779 : 8191)));
                        var_17 = (max(((-14 ? -32013 : -9223372036854775797)), -33554431));
                        var_18 &= (min((arr_0 [i_1 - 1] [i_3 - 1]), var_4));
                    }
                    var_19 = (max(var_19, (((var_12 || (arr_8 [i_0] [i_1] [2] [i_2] [i_1]))))));
                }
            }
        }
    }
    var_20 ^= (var_6 & ((-149674082 ? (var_12 <= var_9) : var_10)));
    var_21 = ((var_5 >> ((((var_14 - (var_9 - var_15))) - 3688745334))));
    var_22 += (!var_6);
    #pragma endscop
}
