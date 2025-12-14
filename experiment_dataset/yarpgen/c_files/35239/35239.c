/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_13, 9186501149975233579) - var_6))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] = (((min(var_8, (max((-9223372036854775807 - 1), var_2))))) ? (max((496801391 < var_7), (var_11 | var_0))) : (max((max(-24, 3717293639147323431)), var_18)));
                        arr_12 [i_3] [i_1] [i_0] = (min((((var_11 > (var_7 ^ var_17)))), var_2));
                    }
                }
            }
        }
        arr_13 [11] = (((((min(((51270 ? 31 : var_9)), -3254)) + 2147483647)) << ((((18 ? 246 : 2442092200326875137)) - 246))));
    }
    var_21 ^= (max(var_14, -2442092200326875161));
    var_22 = min(var_10, ((var_4 + (max(var_12, 12152452460673059073)))));
    #pragma endscop
}
