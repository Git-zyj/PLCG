/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max(-1, 4543299837204857028)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_20 = ((((-(arr_2 [i_1 - 2] [i_1 + 1])))) ? (((((arr_2 [i_1 - 2] [i_1 - 1]) >= (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))) : (max((arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 1]), var_10)));
            arr_4 [i_0] = ((((((arr_1 [i_1 - 3]) ? (arr_3 [i_1 - 2] [i_1] [i_1]) : (arr_1 [i_1 - 3])))) ? ((var_15 ? (min((arr_1 [i_1]), var_16)) : (max(-9223372036854775806, (arr_3 [i_0] [i_0] [4]))))) : (min(((var_15 ? (arr_2 [i_0] [i_0]) : 12090951375856699323)), (arr_1 [i_1])))));
            arr_5 [i_0] = (arr_1 [i_1 + 1]);
        }
        arr_6 [10] [i_0] |= (max((220923572 <= 45), ((((max((arr_3 [i_0] [i_0] [i_0]), var_10))) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))));
        var_21 = (max(var_21, 13903444236504694588));
        arr_7 [i_0] [i_0] = ((0 && (((-((29160 ? 195 : 0)))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_22 -= 49867;
        arr_11 [i_2] = ((((((max((arr_10 [i_2]), (arr_3 [i_2] [i_2] [1])))) ? (arr_8 [i_2]) : (((arr_8 [9]) ? (arr_8 [i_2]) : var_16)))) * ((((((-1 ? 41 : 49)) <= (arr_2 [8] [8])))))));
        var_23 = (max(var_23, (((((max((arr_2 [i_2] [i_2]), (arr_8 [i_2])))) ? (((arr_2 [i_2] [i_2]) ? (arr_8 [i_2]) : (arr_2 [i_2] [i_2]))) : (((arr_8 [i_2]) ? (arr_2 [i_2] [i_2]) : (arr_8 [i_2]))))))));
        arr_12 [3] [3] = (((((arr_8 [i_2]) + 8827)) | var_3));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 = (arr_14 [i_3]);
        var_25 = ((((arr_14 [18]) ? ((var_5 ? var_6 : 1)) : (arr_13 [i_3] [i_3]))));
        var_26 = ((((max(-var_14, var_12))) || var_12));
        arr_15 [i_3] [i_3] = 15;
        var_27 = (max(((((arr_14 [i_3]) || var_17))), ((-(arr_14 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_28 = ((((((arr_20 [1] [6] [i_4]) ? (((arr_1 [i_4]) | (arr_20 [10] [5] [i_4]))) : (1 | 13533821193531234826)))) ? 906036826688367637 : ((((!(arr_19 [i_5] [i_4])))))));
            var_29 = (min(var_29, var_4));
            var_30 *= ((min((min(var_12, var_16)), (arr_13 [8] [i_5]))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_26 [i_4] = (arr_19 [i_7] [i_7]);
                var_31 &= (((arr_21 [i_4]) != (arr_21 [i_6])));
                arr_27 [i_4] [i_7] = var_3;
            }
            var_32 = (min(var_32, ((((arr_13 [22] [i_6]) ^ (var_16 | var_1))))));
            arr_28 [i_4] [i_6] [i_6] = var_8;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_33 = (arr_20 [i_4] [i_8] [5]);
            arr_32 [i_8] = min((17 * 163603893), ((((arr_21 [i_4]) && (arr_31 [i_4])))));
        }
        var_34 = 4953276034300590221;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {
                {
                    var_35 = var_10;
                    var_36 = (((var_7 / 36376) ? ((min((arr_17 [1] [i_10]), ((((arr_13 [i_10] [i_9]) * 147)))))) : ((((arr_36 [12] [1] [1]) - var_17)))));
                }
            }
        }
        arr_38 [5] = (((arr_18 [i_4] [i_4] [i_4]) ? (159 >= 126) : (max(8805142025672903791, 1188820142))));
    }
    #pragma endscop
}
