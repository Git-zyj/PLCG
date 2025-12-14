/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 ^= ((!(((~(min(var_0, (arr_0 [i_1]))))))));
                arr_5 [i_1] &= (min(var_9, (((1 >= ((max((arr_2 [i_0]), 222))))))));
                var_14 = (min(((~(((arr_1 [i_0] [i_1]) ? 43658 : 34)))), ((min(222, 114)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] = ((((min((min(0, var_6)), ((max(0, 2091609779)))))) ? (arr_11 [i_2]) : var_7));
                        arr_18 [i_2] [i_2] = (14 * 229);
                        arr_19 [i_2] [i_3] [i_2] [i_2] = ((min((arr_7 [i_2]), (arr_0 [i_3]))));
                    }
                }
            }
        }
        arr_20 [i_2] [i_2] = ((((((arr_15 [i_2] [10] [i_2] [i_2] [i_2]) ? (((max((arr_11 [i_2]), var_2)))) : (arr_4 [i_2] [i_2] [i_2])))) ? (((((1 ? -100 : 0))) ? var_11 : ((max((arr_10 [i_2]), (-32767 - 1)))))) : (((max(65535, 63542))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_24 [17] = 33292288;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    var_15 = (max(var_15, -var_8));
                    var_16 -= var_11;
                    var_17 = 64;
                    arr_30 [i_6] [i_7] [5] = -1;
                }
            }
        }
        arr_31 [i_6] = ((var_10 >= ((((-26649 <= (arr_22 [i_6])))))));
    }
    for (int i_9 = 3; i_9 < 15;i_9 += 1)
    {
        var_18 = 3871261913;
        var_19 ^= 192;
        arr_35 [14] &= (((((18446744073709551601 * (arr_27 [i_9])))) / (((max(-26649, 65535))))));
        var_20 = (((var_8 ? (arr_32 [i_9]) : ((-100 ? 874404461 : 18446744073709551601)))));
        var_21 = (max(var_21, ((min(0, -26649)))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        arr_38 [i_10] [i_10] = (26799 <= 0);
        arr_39 [i_10] = ((~(arr_37 [i_10] [i_10])));
        var_22 |= ((-(arr_36 [i_10] [i_10])));
        var_23 |= 1;
        var_24 = 194;
    }
    #pragma endscop
}
