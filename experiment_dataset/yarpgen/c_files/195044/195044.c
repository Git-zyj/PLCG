/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_11 = ((-1 + (arr_8 [i_0 - 1] [i_0 - 1] [i_2] [i_3 - 1] [i_3 - 1] [i_1 + 2])));
                        var_12 = (var_3 && (arr_9 [i_0] [i_1 - 2] [i_2] [i_3 - 1]));
                        var_13 = 15150;
                    }
                    var_14 += var_8;
                    var_15 ^= ((~((min((arr_1 [i_2 + 2] [i_2]), (arr_8 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 2]))))));
                    arr_10 [i_2] [0] = -1;
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    var_16 -= ((8923 ? 3796018663 : var_3));
                    var_17 = (((arr_1 [i_4 + 1] [i_0 - 1]) ? ((1 ? (arr_2 [i_0] [i_0]) : var_0)) : (arr_12 [i_0] [i_0] [i_0 - 1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_18 &= ((var_10 - (arr_9 [i_0] [i_1 + 1] [i_4] [i_6 + 1])));
                                var_19 ^= (arr_17 [i_1]);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_20 = -22;
                    arr_21 [i_0] [i_1 + 1] [i_7] = (((((((arr_2 [i_0] [i_1 - 1]) + var_3)) >= var_7)) ? (min(-16382, (arr_2 [i_0 - 1] [i_0 - 1]))) : ((((min(var_3, (arr_6 [i_0] [3])))) / var_0))));
                }
                var_21 = (min(var_21, (((-((((arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 2]) && (arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 2])))))))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_22 -= 128;
                            arr_26 [i_9] [i_1] [i_1] [i_1] [i_1 - 2] = ((arr_3 [i_8 + 1] [i_0 - 1]) ? ((((arr_3 [i_8 + 1] [i_0 - 1]) ? 32767 : 859431690))) : (max((arr_3 [i_8 + 1] [i_0 - 1]), (arr_3 [i_8 + 1] [i_0 - 1]))));
                            arr_27 [i_9] [i_9] [1] [7] = (((((((42037 >> (-15139 + 15163))) - ((min(-1, -2309)))))) ? ((var_9 * (arr_11 [i_8 + 1] [i_9] [6]))) : (arr_7 [i_9])));
                            var_23 &= (max((min(var_5, -1)), 1));
                            var_24 = (((((~((478441370 ? (arr_5 [i_8]) : var_10))))) && ((max((((arr_12 [i_0] [i_1] [i_8] [i_1]) | 1381382217)), (min(-29541, (arr_25 [i_0] [i_1] [i_8] [i_9]))))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_10 ? ((max((!1), var_7))) : var_7));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 4; i_11 < 22;i_11 += 1)
        {
            {
                var_26 = (((~-15140) ? (max(-16362, (arr_31 [i_10 + 1]))) : (((arr_29 [i_11 + 1] [i_11 + 1]) / (arr_33 [i_11])))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_27 = (arr_36 [i_13 + 1] [i_11] [i_11] [i_13]);
                            var_28 = ((-(7434 + -1163955484)));
                            var_29 = 3884;
                            var_30 &= ((max(((min((arr_34 [i_10 + 1] [i_11] [i_11]), (arr_37 [i_10])))), 16370)) != ((min(var_10, (arr_30 [i_11 + 2])))));
                        }
                    }
                }
                arr_43 [i_11] = 23119;
                arr_44 [i_11] = ((((((min((arr_31 [i_10 - 1]), (arr_37 [i_11]))) ? (~1) : (arr_31 [i_10])))) ? (((~(arr_35 [i_10 + 1] [i_11 + 2] [i_11])))) : (((((200 ? 255 : var_10))) / var_6))));
            }
        }
    }
    #pragma endscop
}
