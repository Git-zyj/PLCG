/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 = (min(-2010860183, (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0 + 2] [i_0]) : var_7))));
        var_21 = (min((min((((49152 ^ (arr_1 [i_0] [6])))), (((arr_1 [i_0] [i_0]) - var_16)))), (arr_0 [9] [i_0])));
        var_22 += (arr_0 [4] [i_0]);
        arr_2 [7] = (min((arr_0 [i_0] [i_0 - 1]), (((!(arr_0 [i_0 + 1] [i_0 + 2]))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_23 -= (arr_0 [2] [i_1]);
            var_24 = (max(((max((max(var_4, (arr_3 [i_0]))), ((min(var_17, 1)))))), (min(var_13, var_18))));
        }
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                {
                    var_25 |= (((arr_12 [i_4]) ? (arr_9 [i_2] [i_2] [i_2] [i_2 - 1]) : (min(67108863, 67108856))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_26 += (arr_18 [8] [i_3] [i_4] [1] [i_6]);
                                var_27 = (((min(((min(120, (arr_11 [1] [1] [i_2])))), ((138 ? 0 : (arr_13 [1] [1] [1]))))) - ((((((arr_4 [11] [i_5]) + var_8)) ^ var_4)))));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (~var_9);
        var_29 &= ((var_4 + (arr_11 [i_2] [i_2 + 2] [i_2])));
    }
    var_30 &= (var_4 <= (((min(var_16, var_6)) >> ((((4294967295 ? 67108869 : var_12)) - 67108820)))));
    var_31 = (max((min(251, ((-100 ? 92 : -67108864)))), 8190));
    var_32 = ((!(((-12288 ? var_3 : var_9)))));
    #pragma endscop
}
