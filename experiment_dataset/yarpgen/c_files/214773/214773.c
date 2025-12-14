/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_0] [i_3] [1] = var_0;
                        arr_11 [i_1] [i_3] [i_3] = var_1;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_15 [i_3] [i_3] [i_2] [i_3] [i_3] [i_0] = var_10;
                            arr_16 [i_0] [7] [i_1] [i_2] [i_2] [i_3] [i_4] = (69 && 218);
                            var_16 += (-10260 | var_3);
                            var_17 += 37;
                        }
                        arr_17 [i_0] [i_3] [i_3] = ((~(!18220946842160737387)));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_18 = (arr_12 [i_5] [i_0] [4] [4] [i_2] [i_2]);

                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_5] = -4;
                            var_19 = (max(var_19, -243));
                            var_20 = arr_3 [i_2] [i_5] [i_5];
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_5] [i_0] [i_1] [i_2] [i_5] [i_7] = (arr_4 [i_0] [i_2] [i_7]);
                            var_21 &= (((arr_1 [i_0]) || (!var_3)));
                            var_22 = (max(var_22, (((((((arr_3 [i_0] [i_1] [i_7]) ? (arr_5 [i_2] [i_5] [i_7]) : var_5))) ? (((16649668159650697749 > (arr_4 [6] [i_2] [8])))) : ((((arr_2 [i_5]) < 247))))))));
                        }

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_23 -= (((arr_8 [i_8] [i_5]) ? (arr_3 [2] [i_5] [1]) : (((!(arr_18 [i_1] [i_8] [i_8] [i_5]))))));
                            arr_29 [i_5] = (((1 ? -10964 : 1)));
                            arr_30 [i_0] [i_1] [i_2] [i_5] [i_8] = (!72);
                            var_24 = 154;
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_25 ^= (var_14 == 183);
                            var_26 += var_5;
                            var_27 ^= (((var_0 ^ (arr_4 [i_0] [3] [i_9]))));
                            arr_34 [i_0] [i_5] [i_2] [2] [i_9] = (((!244) > (arr_33 [i_9] [i_0] [i_1] [i_5])));
                            arr_35 [i_9] [i_2] [i_1] [i_2] [i_2] [i_1] |= 93;
                        }
                    }
                    var_28 = (max(var_28, (arr_8 [i_0] [i_0])));
                    var_29 *= 13;
                    arr_36 [i_0] [i_1] [i_1] = (arr_20 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0]);
                }
            }
        }
        var_30 = (min(var_30, (((((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [1] [14]) : 2571449492))))));
        arr_37 [1] = (~var_1);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            var_31 &= (arr_39 [i_10]);
            arr_42 [14] [6] [i_11] |= var_15;
            arr_43 [1] [i_11] [i_10] &= (~1);
            arr_44 [i_10] = (((arr_40 [i_10] [i_10]) ? (((!(arr_40 [i_10] [i_10])))) : 64));
        }
        arr_45 [i_10] = (~469762048);
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {
            {
                var_32 = ((((-(((200 != (arr_49 [i_12] [i_12])))))) / ((8646911284551352320 ? 184 : 56))));
                var_33 = ((~((28 / (arr_46 [i_12] [i_13])))));
                var_34 |= (((((~(arr_47 [i_12])))) ? ((-(!-115))) : ((-(arr_48 [i_12] [i_13] [i_12])))));
                var_35 = (min((arr_47 [i_13]), 192));
                var_36 += (~var_3);
            }
        }
    }
    #pragma endscop
}
