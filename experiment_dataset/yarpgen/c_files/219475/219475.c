/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min(var_0, var_15)))));
    var_21 = var_2;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 -= 2147483647;
                    var_23 = (min(var_23, var_8));
                }
            }
        }
        var_24 = ((min(113, (min(-2147483647, var_18)))));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_25 = 1;
        arr_12 [i_3] |= var_12;
        arr_13 [11] [1] |= (max(((~(arr_0 [i_3 + 1]))), ((min(var_10, 112)))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_25 [i_4] [i_4] [i_6] [i_6] [i_7] = ((max((arr_17 [i_3 - 1] [i_4]), var_0)));
                                arr_26 [i_3] [i_4 - 2] [i_4 - 2] [i_6] [i_4] = (min(var_19, (((arr_19 [i_4 + 1] [i_6 - 1] [i_4]) / (arr_8 [i_4 - 3] [i_6 + 1])))));
                                var_26 ^= (max(((-(max(var_8, var_16)))), ((min(1, var_13)))));
                            }
                        }
                    }
                    var_27 -= var_18;
                    var_28 = ((10329168038349840143 % (((var_9 - (var_0 && 328746377))))));
                    arr_27 [i_4] [i_4] [i_3] [i_3] = (((((arr_7 [i_4 - 3] [i_4 - 3] [i_3 + 2]) ? (arr_7 [i_4 - 2] [i_4 - 2] [i_3 + 1]) : 328746390)) > (arr_7 [i_4 - 2] [i_4 + 1] [i_3 - 1])));
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        arr_30 [i_8 - 1] [i_8] = var_5;
        var_29 = (min(var_29, (((((41 * ((175 ? var_18 : var_19))))) || var_8))));
        arr_31 [i_8 - 1] [i_8 - 1] = (min(((-(arr_16 [6]))), var_12));
        arr_32 [i_8] = ((!((min(((min(var_14, var_5))), -328746377)))));
    }
    var_30 -= var_17;
    #pragma endscop
}
