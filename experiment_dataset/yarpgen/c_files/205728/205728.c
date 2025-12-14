/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] &= max((min(-2147483646, 148)), 108);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, (((max(((max(152, 110)), ((128 ? 148 : 115)))))))));
                        var_16 -= (((((153 >= 108) - (!19352))) * ((max(255, 148)))));
                    }
                }
            }
            var_17 |= 4294967295;
            var_18 |= (((((arr_7 [i_1] [i_1 + 3] [i_1] [i_1]) + ((-4712 - (arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_1]))))) * ((-(arr_3 [i_1] [8] [i_1])))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_15 [i_0] [12] = 239;
            var_19 *= 104;
        }
        var_20 = (((arr_3 [i_0] [i_0] [i_0]) + (arr_3 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_21 = ((0 / (arr_17 [i_5])));
            var_22 *= (((~-2147483634) < (arr_17 [i_6])));
            var_23 -= (arr_17 [i_6]);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_24 [i_5] [i_5] = 4294967295;
            var_24 ^= (148 * 65532);
        }
        arr_25 [i_5] [i_5] = ((arr_19 [i_5] [i_5]) >> (((arr_23 [i_5]) - 47024)));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_25 = ((((min(141, (max(var_6, 147))))) ? (((14396 / (arr_28 [i_8])))) : (min((126 - 162), ((15 ? 128 : 15))))));
        var_26 = (~152);
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_27 += (arr_19 [12] [i_9]);
        arr_32 [i_9] = ((0 && (!var_7)));
        var_28 = (((arr_28 [i_9]) || (arr_28 [i_9])));
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_29 = ((arr_27 [i_10]) >= 147);

        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            var_30 &= ((-837941795 ? 162 : 0));
            arr_37 [i_10] [i_10] [i_10] |= (~127);
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {
            var_31 = (min(var_31, (((-1 ? 108 : -18)))));
            arr_42 [1] [1] = ((var_4 | (arr_41 [i_12] [i_10] [i_10])));
            var_32 = ((0 ? -1216832361 : 18));
        }
        var_33 = (((arr_27 [14]) == var_8));
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                {
                    var_34 = (max(var_34, (((~(arr_44 [i_13 + 2] [i_13 - 1]))))));
                    arr_49 [i_14] [i_13] [i_10] = (28 > 4294967295);
                    var_35 = (arr_38 [i_10]);
                }
            }
        }
    }
    var_36 = ((((var_6 ? 108 : ((var_1 ? var_11 : 4161536))))) ? var_13 : var_3);
    var_37 = (max(var_37, ((max(16776192, -369)))));
    #pragma endscop
}
