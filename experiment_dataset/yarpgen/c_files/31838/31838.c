/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [1] = (min(335108365, ((((((arr_4 [i_0]) ^ (arr_3 [i_0] [i_0] [i_0]))) < ((~(arr_0 [3]))))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_20 += var_1;
                    arr_8 [i_2] [1] [14] = var_1;
                    arr_9 [i_0] [i_0] = (((arr_3 [i_1 + 1] [17] [1]) * ((((arr_3 [i_1 + 1] [i_1] [20]) <= 12)))));
                }
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    var_21 = 1;
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_22 = min((min(var_2, var_12)), (arr_17 [i_0] [i_1] [4] [i_1] [i_4] [13]));
                                arr_19 [i_0] [1] [16] [i_1] [i_5] [i_1] = (((-13843 && var_18) || ((!(-913793803 || var_8)))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [i_0] = (((arr_11 [i_1 + 1]) ? (1666614772227360770 != var_7) : (((var_6 < (arr_16 [17] [18] [i_1]))))));

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_23 = ((~(var_13 > 1666614772227360779)));

                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_24 = ((+((((146 <= var_9) > (arr_6 [i_3]))))));
                            arr_26 [i_1] [1] [i_6] [i_6] [i_7 + 2] [0] [i_6 - 1] = (arr_4 [i_7 - 1]);
                            arr_27 [i_7] [i_6 - 1] [i_3 - 1] [i_1] [i_0] = (((arr_11 [22]) || var_2));
                        }
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            var_25 *= (arr_31 [i_8] [i_6 - 1] [i_3 - 3] [i_0] [i_0]);
                            var_26 *= (((((var_1 - (arr_2 [1] [20])))) && (arr_24 [i_0] [3] [3] [22] [22])));
                            var_27 = (((((59 * (arr_3 [i_0] [9] [i_0]))))) ? (((min((((arr_22 [i_0] [i_1] [7]) <= (arr_0 [i_1]))), (arr_17 [i_0] [i_1] [i_1] [i_3] [i_6] [i_8]))))) : (((arr_28 [i_0] [i_1 - 1] [i_3] [22] [i_8]) ? ((1 ? (arr_25 [i_0] [i_0]) : (arr_0 [i_0]))) : (arr_3 [i_6 - 1] [i_8] [i_8 + 2]))));
                            arr_32 [13] [3] [i_8] = ((((((arr_7 [i_1 - 1] [i_3 - 2] [i_6 - 1]) && var_17))) != ((((arr_7 [i_0] [i_1] [i_3 - 2]) > (arr_30 [i_0] [15] [i_0] [22] [i_0]))))));
                        }
                        var_28 &= (arr_7 [i_1 + 1] [i_3 + 2] [i_6 - 1]);
                        arr_33 [18] [1] [i_1 - 1] = var_5;

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_29 -= (((!((min((arr_36 [13] [18] [i_3] [4] [i_9] [i_9]), (arr_11 [18])))))) ? var_3 : (((-var_5 <= (arr_31 [i_0] [i_1 - 1] [2] [i_6] [i_9])))));
                            var_30 = (max(var_30, (((((((-6 + 2147483647) << (((((arr_13 [i_6 - 1]) + 5893209875108291756)) - 1))))) | (min((arr_13 [i_6 - 1]), (arr_13 [i_6 - 1]))))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_40 [i_0] [i_1] [i_3 + 1] [i_6] [i_10] [i_1] [i_3] = (~var_19);
                            var_31 = (max(var_31, var_18));
                            var_32 = (127 * 15492);
                            var_33 = -4772;
                            var_34 = ((38 ? (arr_28 [i_1 - 1] [i_1 + 1] [i_3] [i_3 + 2] [i_6 - 1]) : (arr_28 [i_1 + 1] [i_1] [i_1] [i_3 - 1] [i_6 - 1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_35 = (max(var_35, ((((arr_28 [i_0] [i_1] [i_3] [i_3 + 3] [21]) ? ((((arr_6 [i_3]) || (arr_30 [1] [1] [1] [i_3] [5])))) : (((arr_3 [i_0] [i_1] [i_11]) | (arr_4 [i_0]))))))));
                        var_36 = (arr_41 [i_11] [i_3] [i_1] [i_1] [i_0]);
                    }
                }
                arr_44 [i_1] [i_0] = (((min((arr_35 [i_0] [i_1]), ((var_13 ? (arr_6 [i_1]) : (arr_35 [i_0] [i_1]))))) / ((min((arr_12 [i_0]), ((((arr_14 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) && var_16))))))));
            }
        }
    }
    var_37 = var_11;
    #pragma endscop
}
