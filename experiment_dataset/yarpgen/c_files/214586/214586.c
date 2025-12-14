/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [5] [9] &= (((((~(arr_6 [15] [i_1 + 2] [1] [i_1])))) ? ((~(arr_6 [i_1] [i_1 - 1] [15] [12]))) : ((max((arr_6 [i_0] [i_1 + 1] [i_2] [7]), (arr_6 [14] [i_1 - 1] [1] [i_2]))))));
                    arr_8 [15] [i_1] [i_2] [2] = (max((((-(arr_2 [i_1])))), (((arr_0 [i_1 + 3]) >> 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 ^= ((65261 != (((!((!(arr_4 [2] [13]))))))));
                                var_18 &= ((((max((((-(arr_9 [i_2] [8])))), (max((arr_12 [9] [16] [7] [4] [i_4] [10]), (arr_5 [4] [i_1])))))) ? (arr_4 [i_1 + 1] [i_2 + 3]) : ((-1 ? 1011437528 : 52))));
                                arr_13 [1] [3] [i_2] [i_1] [i_0] [10] = (arr_11 [10] [i_1] [i_2 - 1] [i_4]);
                                arr_14 [13] [13] [9] [9] = 107;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 += ((~(((var_4 ? 17643 : var_7)))));
    #pragma endscop
}
