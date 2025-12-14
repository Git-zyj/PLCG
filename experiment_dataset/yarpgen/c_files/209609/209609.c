/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_14, var_10));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 - 1] = ((((max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 - 1])))) && 113));
        arr_3 [i_0] [i_0] |= (min((((max(-6926, -107)))), (arr_0 [i_0] [i_0])));
        var_21 = ((((min(9223372036854775807, 32756))) ? (((6825326146540812363 | 18446744073709551615) ? ((max(55, 55))) : (((arr_0 [i_0] [3]) ? (arr_0 [i_0] [i_0]) : var_11)))) : ((~((max((arr_0 [i_0] [i_0]), var_4)))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_22 = (max((min(-6825326146540812363, var_0)), ((max(177, 1)))));
        var_23 = ((71 ? 255 : -32767));
        var_24 ^= (max((((arr_4 [i_1 - 2] [i_1 - 2]) || (arr_4 [i_1 + 3] [i_1 - 1]))), ((-3497860842285437999 != (arr_4 [i_1 - 1] [i_1 - 2])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_25 = (max(var_25, (arr_7 [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_26 = ((-((1065353216 ? 32742 : 2941))));
                    arr_17 [i_2] [i_2] [i_2] = ((-(arr_11 [i_2] [i_3 + 1] [i_2])));
                }
            }
        }
        var_27 = ((-(arr_15 [i_2])));
        arr_18 [i_2] = ((-57 ? -9874 : -79));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_28 = 17552;
        var_29 -= (((((-1945833190 ? 1 : 79))) ? (arr_19 [i_5]) : (79 != -71)));
        var_30 ^= ((-(min(((2950 ? var_2 : (arr_22 [15] [i_5]))), (((-(arr_19 [i_5]))))))));
        var_31 += (((-32767 - 1) ^ ((max(61537, 63)))));
    }
    var_32 = ((~(108 ^ 21)));
    var_33 = (min(238, var_18));
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                {
                    var_34 = (((var_11 & 79) & -79));

                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        var_35 = ((11753811055422429790 ? 127 : 1));
                        arr_35 [i_9] [i_8] [i_7 + 2] [i_6] [i_6] = var_7;
                        var_36 = -219677817869558686;
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_37 = max(-107, (arr_34 [i_6] [i_6] [i_6] [i_6]));
                        var_38 = (min(var_38, ((((((55 ? 1 : 7709553337601431882))) ? (arr_30 [i_6 + 1] [i_7 + 1] [i_10]) : ((-var_13 ? (arr_37 [i_6] [i_6 - 2] [i_6] [i_6 - 2]) : var_5)))))));
                        var_39 = ((-(arr_30 [i_6] [i_7] [i_8])));
                        arr_38 [i_7] [15] = var_15;
                        arr_39 [i_10] [i_7] [i_6] = ((((min((arr_34 [i_6 - 1] [i_6] [i_7 - 1] [i_6 - 1]), (((-1324 ? -1 : var_9)))))) ? var_3 : ((max(127, var_0)))));
                    }
                    var_40 += var_7;
                }
            }
        }
    }
    #pragma endscop
}
