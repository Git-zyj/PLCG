/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_16 = (~65125);
        arr_3 [i_0] = -9197061954623214811;
        var_17 = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = (((((48 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) - (arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((-((var_11 + (arr_7 [i_1 + 1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_18 *= (max(2397680796, (((arr_7 [i_1 + 1]) * 11036548829785282612))));
                    var_19 = (arr_7 [i_3]);
                    var_20 = ((~((-87 ? (arr_6 [i_1]) : var_10))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_21 ^= ((-(arr_10 [i_4] [i_2])));
                                arr_22 [i_1] [0] [i_3] [i_1] [i_1] [i_5] = var_9;
                                var_22 = (min(var_22, (max(-123, var_7))));
                            }
                        }
                    }
                    var_23 = (102 ? 17778 : 7318299375146501819);
                }
            }
        }
    }
    var_24 = var_6;
    #pragma endscop
}
