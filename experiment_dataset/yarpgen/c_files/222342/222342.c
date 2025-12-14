/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((!9223372036854775790) ? (min(var_5, 1773364250310098711)) : var_3)) >= var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((~((((((2048 ? -21 : -1)) + 2147483647)) >> (((-127 - 1) + 128))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = arr_8 [i_0] [i_1] [i_2] [i_4];
                                arr_14 [i_0] [i_0] [9] [i_0] [i_4] = ((((((arr_11 [14] [i_0] [i_2] [i_3 - 3] [i_4]) ? (arr_4 [i_0]) : var_13))) ? (max((((-6601933736429749489 ? -7639 : var_2))), (arr_0 [i_0]))) : (max(((~(arr_10 [2] [13] [0] [12] [1]))), (((17005094909645672772 ? (arr_8 [i_0] [i_3] [i_2] [i_0]) : 65535)))))));
                                arr_15 [i_0] [0] [12] [i_0] [3] = (((0 ? var_0 : (arr_10 [i_0] [i_1] [5] [i_3 - 3] [1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] = (max(((min(var_2, ((((arr_18 [i_0] [i_0] [i_0] [14] [13]) != (arr_17 [i_0] [i_0] [i_0] [i_6] [i_0]))))))), (min((((9223372036854775807 != (arr_8 [i_6] [16] [i_2] [6])))), (arr_2 [i_6] [i_1])))));
                                arr_21 [6] [i_0] [i_5] [i_6] = ((((((50190 > (arr_6 [i_0]))))) ? (((!(arr_12 [i_0] [9] [6] [i_2] [i_1] [i_0] [i_0])))) : -113));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (min(((((max(var_8, var_1))) ? (max(var_14, var_8)) : (1 ^ 65405))), var_5));
    #pragma endscop
}
