/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_0));
    var_20 *= var_15;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_21 = ((((((9223372036854775806 >= (arr_0 [i_0]))))) ? (max(5988378322538826417, (arr_1 [i_0 - 1]))) : 5988378322538826402));
        var_22 *= (((((-(((arr_0 [i_0]) >> (arr_0 [i_0 + 1])))))) ? ((((arr_1 [i_0 - 1]) ? 63488 : 1))) : (max(12458365751170725217, -var_12))));
        var_23 = ((((((min(12458365751170725214, var_14))) ? (max((arr_0 [i_0]), 2662033398)) : ((((arr_1 [i_0]) | 1015105402))))) >= 12458365751170725214));
        var_24 = (((((var_9 / (arr_0 [i_0])))) ? 5988378322538826426 : (39202 >= 0)));
    }
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_25 = max(((+((min((arr_10 [8] [8] [i_5] [i_5] [5]), -32149))))), 2147483640);
                                arr_16 [i_1] = ((!(((12458365751170725214 ? (arr_5 [i_3 + 1] [i_2 + 1] [i_1 + 1]) : 32767)))));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [i_1] [i_1] = ((32769 ? -75 : (32768 / 4105)));
                }
            }
        }
    }
    var_26 = var_14;
    #pragma endscop
}
