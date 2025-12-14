/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -1;
    var_14 = (min(var_14, var_8));
    var_15 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (min(var_16, (((var_7 | (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = (((((arr_0 [i_0]) >> (13022 - 13016))) >= (139611588448485376 > 3)));
        var_17 = var_10;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_4 + 3] = var_11;
                                var_18 = ((1 ? (arr_9 [i_1] [i_0] [22] [i_1 + 2] [i_1 + 2] [i_1 - 1]) : (arr_9 [i_1] [i_0] [i_0] [21] [i_1 + 3] [i_1 + 2])));
                            }
                        }
                    }
                    var_19 *= 0;

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        var_20 *= var_9;
                        arr_15 [i_0] [i_2] [i_1] [i_0] = (arr_11 [i_0] [i_0] [22] [22] [i_5 + 3]);
                    }
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        arr_19 [i_0] [22] [i_0] [i_2] [i_6] = ((4294967295 ? (var_4 + var_0) : var_6));
                        var_21 = (268434944 + 0);
                        var_22 = var_0;

                        for (int i_7 = 4; i_7 < 22;i_7 += 1)
                        {
                            var_23 ^= (((var_2 & 83) || var_9));
                            var_24 *= ((var_4 ? 13017 : 52541));
                            var_25 = (((arr_7 [i_0] [i_1 - 1] [i_2] [i_2]) | (arr_7 [i_0] [i_1 + 3] [i_2] [i_6])));
                            var_26 ^= var_5;
                        }
                    }
                }
            }
        }
    }
    var_27 = (min((((((var_1 ? var_9 : var_10)) <= 1))), ((((max(var_7, 524288))) ? (max(var_7, 101100561)) : var_6))));
    #pragma endscop
}
