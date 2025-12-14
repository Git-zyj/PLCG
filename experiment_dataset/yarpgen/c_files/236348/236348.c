/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = ((var_9 ? (max(((8691202370844511436 ? var_2 : var_7)), ((var_11 ? var_7 : var_7)))) : (max(-var_4, ((var_3 ? var_11 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((((min((arr_3 [i_0] [i_0 + 2] [i_0 + 1]), (arr_1 [i_0] [i_0 + 2])))) % ((max(1, 1)))));
                var_16 = (min(var_16, (((-9673 ? (((var_8 ? var_6 : (arr_3 [i_0 + 3] [i_0] [i_1])))) : (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 2]) : 0)))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [5] = (((-32767 - 1) == 1));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] = ((((var_5 != (arr_12 [i_0 + 3]))) ? (min(17, 7293523188061304532)) : var_8));
                                arr_15 [i_0] [12] [i_4] = ((17 ^ ((-17 ? -17 : 19))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_20 [8] [8] [i_5] [i_5] [i_5] = (min((((max(17508294727151644112, 7)) * 1558613565)), (((var_7 - (arr_17 [i_0 + 1] [i_1] [i_5] [i_5]))))));
                            arr_21 [i_0] [i_0] [i_5] [i_5] = ((-17 ? -16905 : -11));
                            arr_22 [i_0] [i_1] [i_0] [i_6] = ((~var_0) != 16);
                        }
                    }
                }
                var_17 ^= (((arr_19 [i_0]) ? ((-(arr_9 [i_0 + 2] [i_0 + 1]))) : (arr_8 [i_0 + 1] [i_0 + 1] [12] [i_1])));
            }
        }
    }
    var_18 |= var_1;
    #pragma endscop
}
