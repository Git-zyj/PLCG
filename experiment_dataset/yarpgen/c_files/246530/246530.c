/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = (arr_2 [i_1]);
                    var_11 ^= ((~((max((arr_2 [i_1 + 2]), (arr_2 [i_1 + 3]))))));
                }
            }
        }
    }
    var_12 = ((~((224 ? ((17 ? var_2 : (-9223372036854775807 - 1))) : var_0))));

    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_13 = (((min(16368, ((max(1, 1)))))) ? (arr_11 [i_3]) : (min((arr_10 [18]), (arr_11 [i_3]))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [i_3] [i_4] [i_5] [i_5] [i_6] |= (min((((var_5 >= (arr_12 [i_3] [i_3])))), ((5 ? var_8 : ((var_5 ? -1968990598 : var_8))))));
                        var_14 = ((((((arr_13 [i_3] [i_6]) < (((((arr_17 [i_3] [i_4] [i_4] [1] [i_5] [i_3]) || var_1))))))) == (arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));
                        var_15 = (max(var_15, var_5));
                        var_16 = ((9223372036854775806 ? ((max(var_10, (arr_15 [i_4])))) : var_3));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_17 = ((-var_5 <= ((((arr_24 [i_3] [i_7] [14] [i_9]) / (arr_12 [i_8] [i_3]))))));
                        var_18 -= (((arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_8]) ? (((65344 ? (arr_24 [i_3] [i_7] [i_8] [i_9]) : 108))) : var_7));
                        var_19 = arr_27 [i_3] [i_3] [i_3];
                    }
                    var_20 *= (((((-(arr_26 [i_3] [i_3] [i_8] [i_8] [i_7] [i_7])))) ? (arr_26 [i_3] [i_7] [i_8] [i_8] [i_8] [i_8]) : (max((arr_26 [i_8] [i_8] [i_8] [i_8] [i_3] [i_3]), (arr_26 [i_3] [i_3] [i_8] [i_3] [i_3] [i_3])))));
                }
            }
        }
        arr_28 [i_3] [i_3] = (arr_16 [i_3] [i_3] [9] [i_3] [i_3]);
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_21 = (min(var_21, -9223372036854775806));
        var_22 = ((~(((((var_1 ? var_1 : var_3))) ? (arr_16 [i_10] [22] [i_10] [i_10] [i_10]) : -1))));
    }
    #pragma endscop
}
