/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_2;
    var_11 = (max(((max(var_6, (min(var_5, 63247))))), (((var_7 - 36) & 63247))));
    var_12 ^= ((((max(((min(var_1, var_6))), 2293))) ? (((((171 ? 219 : var_1))) ? -202 : ((max(171, 31))))) : 227));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [15] [i_1 + 1] [i_0] [i_1 + 1] [9] = (max(((max(109, 19))), 65535));
                                var_13 += ((-((~((((arr_3 [0] [8]) && var_0)))))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [8] = (((~(arr_9 [i_0] [9] [4] [i_0] [i_0]))));
                                arr_15 [14] [i_1] [i_2] [i_3] [0] [i_3] [0] |= ((((((max(var_6, (arr_8 [i_0] [i_1] [i_1] [i_4])))) | (arr_8 [i_0] [i_0] [i_1] [2])))) ? (min(36, (-9223372036854775807 - 1))) : -4306240126044926232);
                            }
                        }
                    }
                    arr_16 [i_0] = ((((-3403357544769043140 % 150) && -1)));
                    var_14 += ((((36 ? ((63231 ? (arr_7 [4] [i_1 - 2] [i_1] [i_2]) : 146)) : 202)) - ((+(max((arr_4 [2] [i_2] [i_1]), 64))))));
                }
            }
        }
    }
    var_15 = (max((1 != 44607), (((!(~65303))))));
    #pragma endscop
}
