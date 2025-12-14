/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(var_10, var_9)) >> (((((-2147483647 - 1) - -2147483623)) + 40))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((1 ? (arr_0 [i_0]) : -var_1));
                arr_5 [i_0] = ((((min(124, var_8))) ? ((-(arr_3 [i_0] [i_1] [i_1]))) : var_0));
                arr_6 [i_0] = -var_10;
                arr_7 [i_0] [i_1] = (min(var_13, var_5));
            }
        }
    }
    var_19 = var_10;

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (13 ? (arr_11 [8]) : (arr_10 [i_2] [i_2]));
        arr_13 [i_2] [i_2] = 65525;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_17 [i_3] [12] |= ((~(arr_14 [i_3] [i_3])));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        var_20 ^= ((!((((((-107 ? var_3 : (arr_21 [i_4] [i_4] [2] [i_6 - 1])))) ? ((min(-100, 123))) : 250)))));
                        var_21 = (max(var_21, ((min(3404454182, ((((arr_18 [i_6 + 3]) + 0))))))));
                    }
                }
            }
        }
        arr_27 [i_3] = var_15;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_37 [i_3] [i_7] [i_3] [i_8 - 1] [i_9] = 1867386718;
                        arr_38 [4] [i_7] [i_8] [i_9] [i_8] [i_3] = (~var_5);
                        arr_39 [i_9] [i_3] = ((!(~var_7)));
                        arr_40 [i_3] [i_8] = (arr_22 [i_8] [i_8 - 2] [i_8] [i_8 + 1]);
                        arr_41 [i_3] [i_3] [i_3] [i_3] = (((((-(arr_28 [i_3])))) != ((((-(arr_34 [i_3])))))));
                    }
                }
            }
        }
        arr_42 [i_3] = (((arr_32 [i_3] [i_3] [i_3] [i_3]) ? 118 : (((arr_32 [i_3] [i_3] [i_3] [i_3]) ? (arr_32 [1] [i_3] [4] [i_3]) : (arr_32 [i_3] [i_3] [i_3] [i_3])))));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 19;i_10 += 1)
    {
        var_22 += (arr_43 [i_10] [i_10]);

        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            arr_48 [18] [i_10] = ((var_12 ? (~6) : (var_15 * var_15)));
            var_23 ^= (((arr_46 [14]) ? ((var_5 ? -1305335186 : var_2)) : var_7));
            arr_49 [i_10] [i_10] = (~-1305335202);
        }
    }
    #pragma endscop
}
