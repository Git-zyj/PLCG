/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((var_2 ? var_13 : (var_6 & var_2)));
    var_15 = (max(var_15, 9223372036854775799));
    var_16 = var_12;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 = ((((arr_3 [i_0]) / (arr_2 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (-127 - 1);
                    var_19 = (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (arr_8 [i_3] [i_0] [i_0] [i_0]);
                                var_21 *= (((arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1]) || (arr_9 [i_4 - 4] [4] [4] [i_4] [i_4 - 1])));
                                var_22 = ((!(arr_5 [i_0] [i_0 - 1])));
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = (((((12419926381396613945 ? 12419926381396613945 : 6026817692312937670))) ? (6026817692312937662 > -3796047413083409425) : 1518195736));
    }
    #pragma endscop
}
