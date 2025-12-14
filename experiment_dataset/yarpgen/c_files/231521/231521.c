/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 ^= ((((((arr_4 [i_1] [i_1 + 2]) ? var_11 : (arr_5 [14] [i_0] [i_2] [14])))) ? (((!(arr_6 [i_0] [i_0] [i_1 + 1] [i_2])))) : (arr_5 [i_0] [i_0] [i_0] [i_1 + 1])));
                    var_14 |= (((arr_6 [15] [i_1 - 2] [i_1 - 2] [i_1 + 2]) ? ((3757212379484780310 ? 16352 : 12723)) : (arr_6 [i_1 + 2] [i_1] [i_1 - 2] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (((arr_6 [i_1 + 1] [i_3 + 2] [i_3 + 2] [i_4 + 2]) ? (((var_11 ? (arr_11 [i_4] [9] [i_3 + 2] [4] [i_4 + 2]) : var_8))) : (((arr_8 [7] [i_1] [i_1] [i_1] [i_3 + 1] [i_4 + 1]) ? var_5 : (arr_9 [i_3] [i_3 + 2] [i_1] [6] [9] [i_3 + 2] [i_3])))));
                                var_16 = (max(var_16, (arr_6 [i_0] [i_1] [i_2] [i_4])));
                            }
                        }
                    }
                    var_17 = (((arr_8 [i_0] [1] [i_1] [1] [i_1 + 2] [i_1 - 1]) ? 50 : (arr_8 [i_0] [0] [i_1] [i_0] [i_1 - 1] [i_2])));
                }
            }
        }
        var_18 = 14689531694224771308;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {
                    var_19 *= (((arr_3 [i_6 - 1] [i_0] [i_5 + 2]) && var_5));
                    arr_19 [i_6 + 1] [i_5] [i_0] [i_0] = (arr_18 [i_0] [i_5]);
                    var_20 = ((-6297 ? (((var_1 ? 8 : var_10))) : (((arr_14 [i_6] [4] [15]) ? 0 : 109))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_21 = ((var_3 ? (arr_13 [i_7]) : ((((arr_18 [i_7] [3]) ? 4294967295 : (arr_14 [i_7] [i_7] [i_7]))))));
        var_22 = (((((31 + (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (arr_15 [i_7] [i_7] [i_7] [i_7]) : ((var_8 ? 3757212379484780291 : (arr_11 [i_7] [i_7] [i_7] [15] [i_7])))));
    }
    var_23 = var_11;
    var_24 = ((!((((((1 ? var_0 : var_4))) ? ((97 ? var_9 : var_10)) : ((14689531694224771305 ? var_8 : 21183)))))));
    #pragma endscop
}
