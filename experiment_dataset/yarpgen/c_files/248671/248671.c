/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((arr_2 [i_0]) > (((((var_2 ? var_8 : 24749))) ? var_7 : ((((arr_2 [10]) < (arr_0 [i_0] [i_0]))))))));
                var_10 += (((-(arr_2 [i_0]))));
            }
        }
    }
    var_11 = (((((var_4 < (177 == var_7)))) | var_4));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_12 *= (min((((var_0 ? var_3 : (arr_7 [i_2] [i_2])))), (arr_8 [i_2] [i_2])));
        var_13 = (max((arr_7 [i_2] [i_2]), (((var_3 && (arr_7 [i_2] [10]))))));
        arr_9 [i_2] &= (max((((arr_8 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2]))), (((20775 << (var_2 - 44))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_14 = (min(2118364537, 9223372036854775807));

        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            arr_15 [i_3] = (((((39 + (arr_14 [i_4 - 3] [i_4 + 1])))) ? (var_0 + var_0) : (((var_7 - -3630087456968924693) + 184))));
            var_15 |= (arr_8 [i_3] [5]);
            var_16 &= (min(var_5, (arr_13 [i_4])));
            var_17 = ((((~(arr_8 [i_4 - 1] [i_4 - 3]))) < ((54596 % (arr_8 [i_4 - 2] [i_4 - 2])))));
            var_18 = (arr_14 [i_3] [i_3]);
        }
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_19 += ((((max(((1901440803254361676 ? var_7 : var_7)), (((arr_22 [i_3] [i_3] [i_6] [i_3] [i_5] [i_3]) / var_4))))) ? (arr_16 [i_6] [i_5 - 1]) : (((var_4 || 6) * (arr_12 [3])))));
                        arr_24 [i_6] [i_6] = (max((((arr_20 [i_5 - 1] [i_5 + 1] [i_5 + 1]) ? (arr_20 [i_5 + 1] [i_5 + 1] [i_5 - 1]) : (arr_20 [i_5 - 2] [i_5 + 1] [i_5 - 1]))), (((29419 || ((max(0, var_0))))))));
                        var_20 = (max(var_20, (((var_6 >= (((25 & (arr_23 [i_3] [i_3] [8] [i_7])))))))));
                        arr_25 [i_6] = ((-(234 / 83)));
                    }
                }
            }
            var_21 = (max(var_21, ((-(var_0 - var_4)))));
            var_22 ^= (max((((((21958 << (9897 - 9885)))) ? (((arr_11 [i_3] [i_3]) | 1411160489)) : (arr_22 [i_5] [i_5] [i_5] [12] [i_5] [12]))), ((((((arr_11 [i_3] [i_5 - 2]) ? (arr_16 [9] [i_5]) : var_8)) > (arr_7 [i_5 + 1] [i_5 + 1]))))));
            var_23 = ((((max(((max(var_8, 21))), 42593))) >= (((arr_14 [i_3] [i_5 - 2]) & (arr_14 [i_3] [i_5 + 1])))));
        }
        var_24 += 83;

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_25 = (arr_18 [i_8] [i_3]);
            arr_30 [i_3] [i_8] = ((((arr_29 [2] [i_8] [i_8]) ? (arr_7 [i_3] [i_8]) : 0)));
            var_26 = ((((((arr_26 [i_3] [i_3]) <= ((var_8 ? 18446744073709551615 : 0))))) << (((((max(var_8, (arr_11 [6] [i_3]))))) - 46875))));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_27 -= (((max(((-(arr_20 [12] [i_9] [i_9]))), ((((arr_27 [9]) & 1))))) + var_7));
            arr_33 [7] = (arr_14 [i_3] [i_9]);
        }
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_28 = ((((min(0, (arr_20 [13] [i_10] [i_10])))) ? ((max(((var_7 ? var_1 : -1430714360)), var_7))) : ((var_5 ? 1048320 : ((((arr_23 [12] [14] [i_10] [i_10]) | 39682)))))));
        var_29 = ((var_5 == ((var_1 ? (((arr_32 [i_10]) ? var_8 : var_7)) : ((var_5 ? var_8 : var_4))))));
    }
    #pragma endscop
}
