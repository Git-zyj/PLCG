/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 *= (max((576460752301326336 | 0), -5));
                    arr_7 [i_0] [i_0] [i_2] = 9223372036854775807;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = 1;
                                var_14 -= (((((111 ? (-32767 - 1) : 144))) & (max(((var_6 ? 11945 : var_3)), 153))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_15 = -11191;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_16 = (-2147483647 - 1);
                                arr_30 [8] [3] [5] [i_8] [3] &= ((((((var_5 ? var_6 : 10)) + 2147483647)) << (((-1332349011 + 1332349033) - 20))));
                                var_17 += -var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 += (((((((var_10 ? var_6 : 21560)) <= var_2))) > (max(-1332349012, var_8))));
    var_19 = 6693694433422902545;
    #pragma endscop
}
