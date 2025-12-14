/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_3 ? var_17 : 7)))) ? var_5 : ((min(1152358554653425664, 0)))));
    var_20 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = ((((((arr_6 [i_0] [i_2] [i_2]) ? 1152358554653425664 : var_7))) ? ((var_3 ? var_12 : (arr_6 [i_0] [i_2] [i_2]))) : ((max(-1, -1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 ^= (max((((~var_10) << (65515 - 65509))), ((((~0) ? var_9 : 32)))));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] = (((arr_0 [i_0] [i_0]) ? var_12 : 0));
                                arr_13 [i_0] [i_0] [9] [i_2] [i_0] = ((0 ? 0 : (0 && 18)));
                                arr_14 [i_2] [i_3 + 2] [i_2] [i_1] [i_1] [7] [i_2] = ((-1 ^ (((~((0 ? 125 : 1)))))));
                                var_23 ^= (((-14 + 0) ? (arr_1 [i_0]) : ((var_8 ? (arr_4 [i_0] [i_3 + 1]) : 255))));
                            }
                        }
                    }
                    var_24 = (((((25 ? (((min(var_8, var_15)))) : (min(18446744073709551615, var_9))))) ? (((arr_2 [1]) + (arr_2 [i_2]))) : var_7));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_2] = var_2;
                                var_25 = var_18;
                                arr_22 [i_0] [1] [i_2] [i_0] = ((~(~262143)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (((((((max(0, 1))) ? (var_2 < var_10) : var_8))) ? (((((var_18 << 0) && (536608768 ^ 0))))) : var_11));
    #pragma endscop
}
