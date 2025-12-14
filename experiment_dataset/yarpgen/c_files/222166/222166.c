/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 *= var_1;
                    arr_8 [i_0] = ((((1 && (arr_2 [i_2])))));
                    var_11 *= (((~var_2) || var_4));
                    arr_9 [i_2] [i_0] [i_0] = 1;
                    var_12 = 26372;
                }
            }
        }
        var_13 -= ((((var_7 && ((max(1, 67108863)))))));
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            var_14 *= (((((!(arr_14 [i_3 + 1] [i_4 - 1])))) % ((min((arr_14 [i_3 + 1] [i_4 + 2]), 69)))));
            var_15 = (min(((((max(var_7, var_1))) ? (arr_1 [i_3] [i_4]) : ((((!(arr_10 [i_3] [i_4]))))))), (((!(arr_4 [i_4] [4] [6]))))));
            var_16 = (((((28672 ? (~var_1) : 1))) ? (max((((arr_0 [6]) ^ var_7)), 1755203108)) : ((((arr_2 [i_3 + 1]) ? var_1 : (arr_2 [i_3 + 1]))))));
            var_17 |= (var_2 > (((-70 ? (arr_5 [i_4 + 1] [i_3]) : (arr_5 [i_3] [i_4 + 2])))));
        }
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            var_18 = (max(var_18, (arr_11 [i_3])));
            var_19 = (min(var_19, (((var_7 ? (arr_4 [i_3] [4] [0]) : -var_3)))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_24 [i_3] [i_6] = var_7;
            var_20 = ((((var_5 ? var_9 : 112))) ? -4966748237760390572 : (!523264));
        }
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_32 [7] [i_8] [i_8] [i_8] = (~(arr_4 [i_3] [i_8] [i_8]));
                    arr_33 [i_3] [i_3] [i_7] [6] &= -94;
                    var_21 ^= (((var_9 >= -67108847) >= (arr_22 [4])));
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
    {
        var_22 = ((22519 ? var_6 : ((2504080969 / (min((arr_1 [i_9] [i_9 - 1]), 16382))))));

        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_23 ^= (arr_1 [i_10] [6]);
            var_24 += var_7;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_25 = ((255 ? 2593362261 : 1));
            arr_41 [i_11] [i_11] = (arr_18 [i_9] [i_9] [i_9 - 1]);
        }

        for (int i_12 = 4; i_12 < 9;i_12 += 1)
        {
            arr_44 [i_9] = (((!252) ? (arr_14 [i_9 - 1] [i_12 + 1]) : -6));
            var_26 = (arr_29 [8] [i_12] [i_12 - 2] [8]);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    {
                        var_27 = ((((((var_8 ? var_4 : (arr_5 [i_14] [i_9]))) - ((var_6 ? 252 : (arr_48 [i_14]))))) | (arr_25 [i_9] [i_14])));
                        var_28 *= (arr_5 [i_12] [i_12]);
                        arr_51 [i_9] [i_12] [i_13] [i_14] [8] [i_14] = (arr_37 [i_13] [i_12]);
                    }
                }
            }
        }
        var_29 = 13;
        var_30 = (((171 ? ((min((arr_45 [2]), var_0))) : (arr_20 [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
    }
    var_31 = (max(var_31, var_6));
    var_32 = var_2;
    #pragma endscop
}
