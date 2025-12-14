/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_18 ? var_15 : var_17)) < var_14))) | (((var_11 < var_3) * var_15))));
    var_21 = max(var_19, ((var_6 & (~var_10))));
    var_22 = var_19;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = var_1;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    {
                        var_23 -= ((((((arr_13 [i_3 - 4] [i_2] [12] [i_3 - 1] [i_2]) ? (arr_13 [i_3 - 4] [i_2] [i_3] [i_3] [i_3]) : (arr_13 [i_3 - 4] [i_2] [i_3 - 4] [i_3] [i_3])))) ? (557290899 && 1111488338) : (var_7 && var_19)));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_24 = ((12323 - ((var_4 << (var_13 - 15403)))));
                            arr_16 [3] [i_3] [i_2] [i_2] [i_4] [i_0] = ((((3230340036 ? var_19 : (arr_8 [i_0] [i_0]))) >> (var_11 - 28762)));
                            var_25 = ((var_0 | (arr_14 [i_2 + 4] [i_2] [i_2 + 2] [i_2] [5] [i_0] [i_2])));
                            var_26 = (max(var_26, (((1064627260 ? var_16 : 53238)))));
                        }
                        var_27 = (max(var_27, (((((arr_0 [i_2]) ? var_4 : (arr_0 [i_2])))))));
                        var_28 = (((((var_5 ? var_7 : var_5))) << (var_11 - 28780)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_29 ^= ((0 << (var_19 - 33564)));
        arr_19 [i_5] = var_11;
    }
    for (int i_6 = 4; i_6 < 23;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_30 = var_15;
            arr_25 [i_6 - 3] [i_7] = ((((var_16 ? 264767668 : var_13))) ? ((var_3 << (((arr_18 [i_7]) - 1949504624)))) : (((var_6 ? var_15 : 29))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_30 [i_8] [4] [i_6] = (var_16 | var_11);
            var_31 ^= (((arr_18 [i_6 + 1]) | var_14));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_32 = var_10;
                        var_33 -= var_2;
                    }
                }
            }
            arr_38 [i_8] [i_8] = (((!var_0) << (((arr_28 [i_8] [i_8] [i_6 - 1]) ^ (arr_28 [i_6] [i_8] [i_8])))));
        }
        arr_39 [6] |= 48705;
    }
    #pragma endscop
}
