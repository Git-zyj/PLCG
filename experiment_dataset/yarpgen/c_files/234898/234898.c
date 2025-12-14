/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0 + 1] = ((((((((10792006333566239399 ? (arr_2 [i_0 - 2]) : 1))) ? var_2 : (arr_1 [i_0 - 2])))) ? -2 : ((-(arr_2 [i_0 + 2])))));
        var_14 = (max(var_14, (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = var_3;
        var_16 = ((5 ? -56755 : (min((arr_0 [i_1] [i_1]), 1125899906842623))));
        var_17 &= -var_10;
        arr_7 [i_1] [i_1] = 4294967295;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_11 [i_2] = ((var_6 > ((~(~var_10)))));
        var_18 = (max(var_18, (((~(max((arr_8 [1]), (arr_8 [16]))))))));
    }
    var_19 = ((45519 ? 1 : 5));

    /* vectorizable */
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        var_20 = (max(var_20, var_7));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 24;i_5 += 1)
            {
                {
                    arr_21 [i_5] [i_4] [i_4] [i_3] = (((arr_19 [i_4] [i_4]) ? 56759 : (arr_19 [i_3 + 1] [i_4])));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_25 [i_3 + 1] [i_4] [i_4] = (-6 ? (-127 - 1) : 9223372036854775807);
                        arr_26 [i_4] [i_3] [i_3] [1] [i_6] = var_5;
                    }
                    var_21 = (min(var_21, (arr_18 [i_4 + 1])));
                }
            }
        }
        var_22 *= 18219;
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_23 = (~-114);
        var_24 &= 0;
    }
    var_25 = var_6;

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    var_26 = (((((max(16645262235131073831, 1)))) ? -1 : (((~65535) ? 16645262235131073849 : (((-(arr_31 [9] [i_8]))))))));
                    arr_41 [i_8] [i_8] [i_8] [i_8] = ((-0 | ((16645262235131073831 ? 45519 : var_2))));
                    var_27 = (min(var_7, 17333));
                }
            }
        }
        var_28 = (min(var_28, 20019));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 13;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            var_29 ^= ((arr_23 [8] [i_12] [i_12] [i_12] [i_11 + 2]) && (arr_23 [i_11 + 3] [i_12] [i_11 + 3] [i_12] [i_11 - 1]));
            arr_48 [i_12] &= 21;
            var_30 = -var_2;
        }
        var_31 = (arr_14 [i_11 + 1]);
        arr_49 [i_11] = (var_0 ^ -17334);
        arr_50 [i_11] [i_11 + 4] = -21;
    }
    #pragma endscop
}
