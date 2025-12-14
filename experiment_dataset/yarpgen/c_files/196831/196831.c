/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 &= var_13;
                    arr_11 [i_2] [i_1] = ((!(var_12 || 64)));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_15 |= (var_1 - var_1);
                            var_16 += ((((1 ? 224 : -32748)) + 1));
                            arr_20 [i_2] [i_3] [i_2] [12] [i_2] = 8286766640438201959;
                        }
                        arr_21 [i_2] = 55090;
                        var_17 = 0;
                        var_18 = 1187460967;
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_19 ^= (-(((87 - 2137054148) + (max(var_9, 1)))));
                        var_20 += (9462 <= 119761268);
                    }
                    var_21 = ((~(3107506316 ^ var_5)));
                    var_22 *= var_9;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            {
                var_23 = 1187460980;
                var_24 = (max(var_24, ((((min(249, 87))) * (56149 / var_4)))));
                arr_29 [13] [i_7] = 4192256;
            }
        }
    }
    #pragma endscop
}
