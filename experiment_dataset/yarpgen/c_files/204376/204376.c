/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_6;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= 4331966587612699704;
        arr_4 [i_0] = ((~((64 ? (((-32767 - 1) ? 65535 : 65527)) : (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_13 = ((((((arr_1 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) != (min((arr_5 [i_0]), (max(65519, (arr_0 [i_0])))))));
            arr_7 [i_0] = (arr_1 [i_1]);
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_14 = ((~(((!(arr_2 [i_2 + 2] [i_2 + 1]))))));
            arr_10 [i_0] = var_6;
            var_15 ^= ((((-(arr_6 [i_0] [i_0] [i_0]))) + (((min(11441, 22563))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_16 *= (((((((var_11 ? (arr_9 [i_0] [i_3]) : var_7)) <= ((((arr_5 [i_4]) ? (arr_19 [i_4] [i_3] [i_4]) : (arr_12 [i_3]))))))) - (((((min(var_5, (arr_17 [i_3])))) <= (((!(arr_1 [i_0])))))))));
                        arr_20 [i_0] [i_3] [i_0] [i_0] [i_0] = ((!((((min(75, var_2))) < (arr_13 [i_0] [i_3])))));
                        arr_21 [i_5] [i_4] [i_5] [i_3] [i_0] &= ((!((max(((((arr_2 [i_0] [i_3]) ? var_1 : (arr_18 [i_0] [i_5] [1] [i_4] [i_0] [i_0])))), (min(2799634624, 0)))))));
                    }
                }
            }
            var_17 -= 54095;
            arr_22 [i_0] [i_0] [i_0] |= (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]) < 1596318153));
            var_18 = ((((!var_7) ? ((~(arr_12 [i_3]))) : (var_11 < var_2))) >> (((max((arr_11 [i_0]), ((-26062 ? var_9 : 18390053917277523085)))) - 8826358237852002160)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] |= (arr_26 [i_7 - 2] [i_7 + 1] [i_7] [i_7]);

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            var_19 = 40370;
                            var_20 = ((!(((~(arr_23 [i_0] [i_3] [i_0]))))));
                            var_21 *= arr_8 [i_0] [i_0] [i_0];
                            arr_31 [i_3] [i_3] [i_3] [i_7] [i_8] [i_8] = (8388607 >= 54094);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_22 = ((!(arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));
                            var_23 = var_4;
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_24 &= arr_29 [i_0] [i_3] [i_6] [i_7] [i_10] [i_0] [i_10];
                            var_25 = (max(var_25, (((((((max((arr_30 [i_0] [i_3] [i_6]), var_8))) ? ((max((arr_14 [i_7] [i_0]), var_4))) : var_6)) + var_0)))));
                            arr_37 [i_3] [i_3] [i_6] [i_7] [i_10] [i_10] [i_3] = (min((arr_29 [17] [i_3] [i_3] [i_7] [i_7 - 3] [i_6] [i_3]), (arr_33 [i_10] [i_3] [i_0] [14] [i_7 + 1] [i_7] [i_0])));
                        }
                        var_26 = ((~((((221293606 <= var_11) || ((max(var_2, var_4))))))));
                    }
                }
            }
        }
        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            var_27 = (max(var_27, (((((min((arr_9 [i_0] [i_11 - 1]), (arr_12 [i_11 + 1])))) ^ (((max(75, 25165)))))))));
            arr_40 [i_11 - 1] [i_0] [i_0] = ((-3634 ? 1038922943 : 8388616));
            arr_41 [i_0] [i_11] = (arr_17 [i_11 - 1]);
            arr_42 [i_0] [i_11] |= ((~((var_7 / (arr_23 [i_0] [i_11 - 1] [i_11])))));
        }
        arr_43 [i_0] [i_0] = (((arr_8 [i_0] [i_0] [i_0]) + (((arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [5] [i_0]) % (arr_8 [i_0] [i_0] [i_0])))));
        var_28 = (min(var_28, ((((((~(arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [8])))) ? ((~(arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((~(arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        arr_47 [i_12] = 57;
        arr_48 [i_12] = (arr_46 [i_12]);
        arr_49 [i_12] = var_8;
    }
    var_29 = (min(-18, 25179));
    var_30 ^= (-9223372036854775807 - 1);
    var_31 = var_7;
    #pragma endscop
}
