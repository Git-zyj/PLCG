/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(((max(var_9, var_7)) << (var_4 != var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = arr_7 [i_0] [i_0] [i_0] [i_0];
                    var_11 += (arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1]);

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        var_12 += var_2;
                        var_13 = (max((((arr_6 [i_0] [i_1] [i_2]) * 0)), (((arr_6 [7] [i_1 + 1] [i_0]) ? (arr_12 [i_3] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_1 - 1] [i_2])))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_14 = (min(var_14, (((!(((-((61 ^ (arr_1 [i_4])))))))))));
                        arr_15 [i_4] [i_0] [i_0] [i_0] = ((-((var_7 + ((143 << (181 - 160)))))));
                    }

                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [13] [i_0] [i_0] [i_2] [i_5] [i_5] = ((min(1318786977, 61)));
                        var_15 = (((arr_3 [i_0] [i_1 - 1] [i_5 - 2]) - (min((arr_16 [i_0] [i_1 - 1] [i_5 + 1] [i_5 - 3] [i_1 - 1] [i_5 - 1]), var_0))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_16 = (min(var_16, ((min((min((195 * 197), var_5)), (1569774285 != 104))))));
                        var_17 |= ((arr_14 [7]) % (arr_0 [18]));
                        var_18 *= (((arr_3 [i_0] [i_1] [i_6]) && (((var_4 >> (((arr_6 [i_0] [i_1] [i_1]) - 90)))))));
                        var_19 |= 59;
                        arr_22 [i_0] [i_0] [i_0] [i_6] = (arr_4 [9] [i_1] [i_2]);
                    }
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_20 += (((~(52 || 196))) <= (((-var_6 > (max(-1569774296, (arr_25 [i_0] [i_8] [i_2] [i_7 + 1] [i_7 + 1])))))));
                            arr_29 [i_0] [i_2] [i_2] [i_2] [i_1 + 1] [i_1] [i_0] = (arr_18 [i_7] [3] [i_2]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_21 = (arr_3 [10] [11] [i_7 - 1]);
                            var_22 = (arr_18 [i_2] [i_2] [8]);
                            var_23 ^= (!59);
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_24 = (max(var_9, ((var_9 ^ (arr_31 [i_0] [i_1] [i_2] [i_2] [i_10])))));
                            arr_34 [i_0] [i_2] = ((~(max((!var_1), 197))));
                            arr_35 [i_0] [i_0] [i_2] [i_7] [i_0] = (max((((((var_4 << (((arr_7 [i_0] [i_2] [i_7] [i_10]) - 730014983))))) || (arr_26 [i_7 - 2] [i_10] [1] [i_7 - 1] [i_10] [i_1 - 2]))), ((59 <= (arr_16 [1] [i_0] [i_0] [i_2] [i_2] [i_2])))));
                            arr_36 [i_0] [i_0] [i_0] [0] [i_0] = ((((((59 == (arr_17 [i_0] [7])))) ^ (min((arr_2 [i_1]), var_8)))));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_7 - 1] [i_1 - 1] = (arr_28 [i_1 + 1] [i_2] [4]);
                            var_25 = ((((min(var_6, 1))) ^ (((arr_23 [i_1] [i_1]) - var_7))));
                            var_26 = (max(((min((arr_8 [i_1 - 2] [i_1 - 2] [i_7]), (arr_8 [i_0] [3] [17])))), ((var_7 >> (var_9 - 834764114)))));
                        }
                        var_27 = ((+(max((var_6 - 65535), (((arr_32 [i_0] [i_0] [i_1] [i_2] [i_7 - 1]) - var_5))))));
                        var_28 -= ((((((arr_6 [i_0] [12] [i_2]) && (arr_26 [i_0] [i_0] [15] [8] [i_0] [1]))) && (arr_16 [i_1 - 2] [i_1] [i_1 - 1] [i_7 + 1] [0] [i_7 + 1]))));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_43 [5] [i_0] [i_2] = ((arr_11 [i_0] [i_1] [i_1] [i_0]) || ((((95 * 37) - ((((arr_4 [i_0] [i_0] [i_0]) || 268402688)))))));
                        var_29 += ((+(((((arr_25 [i_0] [i_2] [i_2] [i_12] [i_2]) || var_5))))));
                        arr_44 [i_0] [i_12] [10] [i_12] &= ((((var_6 ? (arr_27 [i_1 + 1] [i_1]) : 185)) << (((arr_14 [i_0]) & (max(12232, var_5))))));
                    }
                }
                var_30 = (min(var_30, 246));
                var_31 = (max(var_31, (((((max((1 % 50914), ((-(arr_11 [i_0] [1] [i_0] [i_0])))))) ? ((((arr_33 [10] [i_1 - 1]) || ((min(var_8, var_3)))))) : (min((((arr_37 [i_0] [6] [i_1 - 1] [3]) ? (arr_2 [i_0]) : (arr_32 [i_0] [i_0] [i_0] [8] [1]))), (!var_0))))))));
            }
        }
    }
    #pragma endscop
}
