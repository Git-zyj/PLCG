/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 ^= (((((((arr_0 [i_1]) != 4294967277)) ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : ((19 | (arr_2 [i_2]))))) * (max(((var_4 ? var_10 : (arr_7 [i_0] [i_1] [i_1] [i_0]))), (((174 << (18446744073709551615 - 18446744073709551604))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 |= (((1481939008 | 18) > (((arr_10 [i_3] [i_0] [i_0]) ? 0 : (((4294967293 ? (arr_9 [1] [i_2 + 3] [i_1] [i_0]) : (arr_16 [i_1] [i_2 + 3] [i_3]))))))));
                                var_21 = (max((min(((min(var_13, -22686))), 70368710623232)), (((min(var_5, -4000))))));
                                var_22 = (((((((min(-100, var_11))) ? (min((arr_15 [10] [i_1] [10] [i_3] [i_4]), (arr_8 [i_0] [i_0]))) : (arr_7 [i_1] [i_1] [i_1] [i_4])))) ? ((max((15 / var_5), (max(58, 2867185819))))) : (arr_6 [i_2 - 3] [i_1 - 2])));
                                arr_17 [i_4] = (max((min((arr_5 [i_1 + 3]), ((var_16 ? var_14 : var_2)))), (((arr_1 [i_2 + 3] [i_4 + 1]) ? (arr_13 [i_4] [i_4] [i_2 + 2] [i_2 + 2] [i_1 + 2] [i_1] [i_4]) : (arr_1 [i_2 - 2] [i_4 + 1])))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2 + 1] = ((70368710623237 ? 0 : 183));
                }
            }
        }
    }
    var_23 = -1;
    #pragma endscop
}
