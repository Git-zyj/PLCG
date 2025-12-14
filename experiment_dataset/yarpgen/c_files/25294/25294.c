/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-127 - 1) ? (max(var_11, var_2)) : var_3);
    var_17 = 10075067035637257537;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 *= min(var_10, ((((arr_5 [i_0] [i_0] [i_0]) || -73))));
                                arr_15 [0] [3] [i_0] = 3334362836648598309;
                                arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] = (min((arr_9 [18] [i_1] [i_1] [13] [i_1] [i_1]), (((((((arr_0 [i_3] [i_2]) + 2147483647)) << (127 - 127))) << (124 - 124)))));
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] = var_4;
                    var_19 ^= (arr_14 [i_0] [i_1] [15] [i_1] [i_2]);
                    var_20 = 8371677038072294083;
                    var_21 ^= ((-(711472168924135186 >= 7926781485315659496)));
                }
            }
        }
    }
    #pragma endscop
}
