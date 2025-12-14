/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_10 = ((((min(var_9, 54274))) ? (((var_5 != ((11261 ? 2109012428 : 0))))) : (~var_3)));
        var_11 = ((0 ? ((((((var_7 ^ (arr_1 [i_0] [i_0])))) ? var_4 : 11262))) : (((var_8 ? (arr_1 [i_0] [i_0]) : var_8)))));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (((min(255, 1))) ? (0 >= -1052884213) : ((((!var_1) || (arr_0 [i_0])))));
            var_12 = (((65535 ? 3466596551 : (arr_3 [i_0 + 2] [i_1 - 1]))));
            var_13 = ((255 >= (18446744073709551615 % -897230246)));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        var_14 = max((arr_0 [i_0]), (((!(((0 ? 882596398 : 2331644554)))))));
                        var_15 = (((((var_0 / (!0)))) ? ((max((var_3 / var_8), var_1))) : (arr_0 [i_0])));
                    }
                }
            }
            var_16 |= var_3;
            var_17 = (((var_0 < 2595723687) - (max((var_8 * var_1), (arr_11 [i_0 - 3] [i_0] [i_0] [i_0])))));
            var_18 = (min(var_18, (((-var_0 ? (max((arr_12 [i_2 - 1] [i_0 + 1] [10]), ((var_5 ? (arr_0 [14]) : (arr_12 [i_2 + 1] [i_0] [i_0 + 1]))))) : (~30))))));
        }
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            arr_18 [i_0] [i_0] [i_5] = ((((((arr_0 [i_0]) ^ (arr_0 [i_0])))) ? ((~(arr_0 [i_0]))) : (((arr_0 [i_0]) | (arr_0 [i_0])))));
            var_19 = (max(var_19, ((max(((var_8 ? -12379 : 7686699988266834648)), (arr_13 [i_5 + 2] [i_5 + 3] [i_0 - 2] [i_0 + 2]))))));
            var_20 = (max(var_20, 1));
        }
        var_21 = -186798860;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_21 [i_6] &= (arr_14 [i_6] [i_6] [i_6] [i_6]);
        var_22 += ((((var_8 ? var_1 : var_2)) / 22201));
        var_23 &= (((((var_6 ? (arr_1 [i_6] [i_6]) : (arr_3 [i_6] [i_6])))) >= ((var_1 ? (arr_0 [i_6]) : 32767))));
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            arr_27 [i_7 - 1] [i_7 - 1] = (2595723687 & 4114923216);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_24 = (max(var_24, (arr_36 [i_7] [i_7] [i_7] [i_7 - 1])));
                            arr_37 [i_7] [i_7] [i_7] [i_7] [i_7] = ((((((((0 ? 41164 : 6994625768505718257))) ? (max(3170817661, (arr_32 [i_11] [i_11] [i_11]))) : (((arr_31 [i_11] [i_11] [i_9] [i_9] [i_11]) ? 54274 : 4259695485))))) ? (((((var_5 + 2147483647) >> (var_1 - 2185910424))))) : (((!(!var_4))))));
                            var_25 = (max((((((var_8 ? var_9 : var_8))) | var_4)), 1754179320));
                        }
                    }
                }
            }
        }

        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            arr_40 [i_7] [i_12] = var_0;
            arr_41 [i_12] [i_7] = (min(1333765607, ((((((arr_30 [i_7] [i_12] [i_7 - 1] [i_7] [i_12 + 1] [i_7 - 1]) ? var_8 : (arr_31 [i_7] [i_7] [i_7] [i_12] [4])))) / var_6))));
            var_26 = -1754179321;
        }
    }
    var_27 = (max(1754179321, -6947524314153456235));
    #pragma endscop
}
