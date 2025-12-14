/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_16 = (2 < 1);
                    var_17 = (min(var_17, 46));
                }
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_18 = (max(var_18, (max(-1229466592, 241))));
                    var_19 = ((!(((-1229466592 / ((max(14, var_15))))))));
                }
                var_20 = ((var_7 ? (((((23 ? var_9 : var_15))) * (var_12 / 6835388388298963182))) : (min(var_6, (-1229466592 | 3516619321)))));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_21 *= var_5;
                                arr_17 [i_0] [i_6] [i_4] [i_5] [i_6] &= var_8;
                                var_22 = ((((min(var_14, (-2147483647 - 1)))) ? (max(var_12, (min(255, 0)))) : (var_14 == 0)));
                            }
                        }
                    }
                }
                var_23 = ((62 ? 127 : var_10));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            {
                var_24 = (max(((-(max(127, 0)))), (max((~37), var_1))));
                var_25 = (max(var_25, (!171)));
            }
        }
    }
    var_26 ^= ((min(var_12, var_11)));
    #pragma endscop
}
