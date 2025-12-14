/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (((((((var_4 ? var_2 : 0))) ? (((1 >> (arr_3 [i_0])))) : (arr_9 [i_0] [19]))) << (((arr_7 [i_2] [i_1]) | (((!(arr_1 [1]))))))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((((((((arr_2 [i_0]) < (arr_2 [i_0]))) ? (arr_5 [i_2] [i_2]) : -var_11))) ? var_0 : ((((var_10 >> (625448025 - 625447996))) + var_8))));
                    var_13 = (((arr_2 [i_0]) ^ (arr_9 [0] [i_1])));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_15 [i_0] [i_2] = ((!((max(var_2, var_6)))));
                        var_14 = ((arr_12 [i_3]) ? ((((((var_5 ? var_10 : var_12)) >= var_10)))) : ((-(min(var_2, 76)))));
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_15 = (arr_9 [i_1] [17]);
                        var_16 -= var_0;
                        arr_18 [i_0] [i_0] [1] [i_2] [i_4 + 1] = ((-((~((((arr_5 [i_1] [22]) != var_9)))))));
                        var_17 = (var_3 / var_2);
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_18 = (((~(arr_5 [i_5] [i_1]))));

                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            var_19 |= (max((max((((arr_9 [i_6] [i_6]) / (arr_6 [i_6]))), (94 / var_5))), (min(13119037930011921182, (arr_19 [i_1] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1])))));
                            var_20 &= (((((1 ? (((var_5 % (arr_19 [i_5] [i_5] [i_5] [7] [9] [i_5])))) : var_12))) ? ((min(((var_10 ? 143 : (arr_8 [i_1] [i_1] [i_1]))), (arr_7 [i_2] [0])))) : (arr_9 [i_0] [i_6])));
                            var_21 = (((((var_5 ? (arr_20 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6 - 1]) : var_8)) ^ (arr_5 [i_6] [i_6]))));
                            var_22 = ((((((max(-324711047, (arr_14 [1] [i_5] [i_2] [i_0] [i_0]))) >> (((arr_17 [4] [i_5] [i_2] [i_0]) - 11164505583105469821))))) ? ((((min(143, var_10))) ? ((-40 ? (arr_9 [i_2] [i_5]) : (arr_3 [i_5]))) : (((max(var_4, 7)))))) : (((((arr_9 [i_0] [i_0]) ^ (arr_22 [4] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) % (arr_2 [i_6 - 1])))));
                        }
                    }
                }
            }
        }
        var_23 = var_12;
    }
    var_24 = var_9;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                arr_30 [i_7] [i_8] = (max(var_4, ((((((arr_3 [i_7]) % 21))) ? var_3 : (arr_4 [i_7 - 2] [i_7 + 1])))));

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_33 [i_9] [4] = (((((min(var_5, (arr_28 [i_7 - 2] [i_7 - 1] [i_7 - 2]))))) >= (arr_23 [i_9])));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_25 ^= ((((max(((var_3 ? var_9 : var_2)), (((var_6 >> (((arr_9 [i_9] [1]) - 15083128959546667750)))))))) ? (((123 ? (arr_28 [i_7] [i_8] [i_9]) : (var_2 >= 7)))) : (((max((arr_32 [i_8] [i_11]), var_2)) ^ var_5))));
                                var_26 = 2053524165;
                                var_27 = (max((min((((arr_19 [i_11] [i_10 - 1] [i_9] [i_8] [i_7] [i_7]) ? var_8 : (arr_25 [i_9]))), (var_9 / var_11))), (((arr_25 [i_9]) % var_4))));
                            }
                        }
                    }
                    var_28 = (arr_21 [i_8] [i_8] [13] [i_9] [13]);
                    arr_41 [i_7] [i_8] [i_7] [i_8] = (max((!var_1), (min((arr_32 [6] [i_7]), (arr_32 [i_7] [i_7 + 2])))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_29 = (((arr_40 [i_7 - 2] [i_7 - 1]) >= (arr_40 [i_7 + 2] [i_7 - 2])));
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_30 ^= ((51 >= ((198 ^ (arr_49 [i_7] [i_7] [13] [i_7] [13] [i_7])))));
                                var_31 += (((((arr_2 [i_7]) ? var_1 : var_9)) >> ((((var_10 >> (var_4 - 7913))) - 274))));
                                var_32 *= (arr_1 [i_14]);
                            }
                        }
                    }
                    var_33 = (((arr_27 [i_7 + 1]) * (arr_27 [i_7 + 1])));
                }
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    var_34 = 1;
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 17;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                var_35 = (max(var_35, ((((((((var_4 >> (var_5 - 95))) + (arr_24 [i_8] [14])))) ? ((var_9 ? (arr_4 [i_8] [i_17]) : 3116928423)) : ((((arr_37 [i_8] [9]) ? (min((arr_49 [i_7] [i_7] [i_8] [i_15] [1] [i_17]), (arr_50 [i_7] [i_8] [5] [1] [i_17]))) : ((var_1 ? (arr_34 [i_15] [i_15] [i_7] [i_15] [i_16 - 2] [i_17]) : var_10))))))))));
                                var_36 ^= ((((max(var_2, var_6)) << (((((arr_20 [i_17] [i_17] [i_16] [i_15] [1] [i_16]) ^ var_6)) - 64)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
