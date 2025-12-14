/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [4] = (((((-(((arr_6 [10] [i_1]) ? (arr_7 [i_0] [i_1] [i_1] [0]) : var_12))))) ? (((((var_0 / -399924398576914909) || (arr_5 [i_1] [i_1 + 2] [2] [i_1]))))) : (((~3) ^ (((var_13 + 9223372036854775807) << (3737011894445950445 - 3737011894445950445)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] = (((1010706639658938276 ? (arr_4 [i_0] [i_1 + 2]) : (arr_4 [i_0] [i_1 + 2]))));
                                var_21 += (((((7848201405206440506 ? (arr_0 [i_4 + 4]) : (arr_0 [i_4 + 3])))) ? (arr_0 [i_4 + 3]) : (((arr_0 [i_4 + 4]) / (arr_0 [i_4 + 1])))));
                                var_22 = ((-3618 ? ((((max((arr_11 [i_0] [i_0] [i_0] [i_1]), (arr_4 [i_1] [i_0])))) ? ((65521 ? (arr_1 [i_1]) : 8525462586750815625)) : (arr_8 [i_0] [i_1] [i_1 + 2] [i_4 + 2]))) : (!536870911)));
                            }
                        }
                    }
                    arr_16 [3] [i_1] [i_1] = (arr_14 [i_1] [i_1] [i_1] [i_1 + 3] [i_1] [9]);
                }
            }
        }
    }
    #pragma endscop
}
