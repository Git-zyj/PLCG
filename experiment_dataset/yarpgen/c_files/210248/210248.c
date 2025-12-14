/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 << (var_2 - 12)));
    var_18 = ((((((4829708519238426820 || -123) && (!9223372036854775790)))) != var_16));
    var_19 = var_5;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 3] [i_0] = (((((110 != ((max(1, (arr_2 [0]))))))) > (min((arr_2 [i_0]), (((arr_0 [i_0 + 1]) ? (arr_0 [i_0]) : 81))))));
        var_20 = (9223372036854775802 ? ((61278 | (arr_0 [i_0 - 2]))) : (arr_2 [i_0]));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_21 = (arr_10 [i_1 - 2] [i_1 - 2]);
            var_22 = (((arr_5 [i_1]) ? (max((((arr_4 [i_1]) >> (167 - 155))), (arr_6 [i_1]))) : ((2251798739943424 ? ((25273 ? (arr_9 [i_1] [i_1] [14]) : 9223372036854775784)) : 30))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_23 = (min(111, (arr_4 [i_1])));
            var_24 = (max(var_24, (((!(((-(arr_4 [i_1])))))))));

            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                var_25 = (min(((125 | (arr_10 [i_4 + 1] [i_4 - 2]))), (arr_6 [i_1])));
                arr_15 [i_1] [i_3] = (arr_14 [i_3] [i_3]);
                arr_16 [i_1] [i_3] [i_4 + 1] = (min(((((arr_5 [i_1]) < (((arr_7 [i_1] [i_1]) ? 4259 : 8091436857362823584))))), (min(1, (arr_10 [i_1 - 1] [i_4 + 1])))));
                var_26 = (max(var_26, (arr_6 [i_3])));
                var_27 = -111;
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_28 = (((arr_9 [i_1 + 1] [i_1 + 1] [i_1]) ? 4611686018427387903 : 2251798739943441));
                var_29 = (((arr_12 [i_1] [i_1 + 1]) - ((((arr_7 [i_1] [i_3]) || ((((arr_11 [i_1]) ^ (arr_9 [8] [8] [9])))))))));
                var_30 = (((arr_17 [i_1] [i_1] [i_1]) > ((((arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) / ((min((arr_5 [i_1]), (arr_19 [i_1] [i_3])))))))));
            }
        }
        var_31 = ((((((((min(-11, (arr_19 [i_1] [1]))))) / 7581259568449268580))) / (min(((((arr_19 [i_1] [i_1]) ? (arr_11 [i_1]) : -3130356383012990149))), (arr_17 [i_1] [i_1 + 2] [i_1])))));
        var_32 = ((~((2 ? (arr_11 [i_1]) : (arr_8 [i_1 - 2] [i_1])))));
        var_33 = (max((arr_18 [i_1] [i_1] [i_1]), (((arr_14 [15] [i_1 + 2]) * 86))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_34 = (arr_20 [i_6]);
        var_35 = (arr_1 [i_6]);
        var_36 = (max(2250700302057472, (((14081824492191123422 <= (arr_14 [i_6] [i_6]))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_37 = (((arr_14 [i_7] [i_7]) % (arr_9 [i_7] [i_7] [i_7])));
        var_38 = (min(var_38, (arr_9 [1] [1] [1])));
        var_39 = (arr_9 [i_7] [i_7] [i_7]);
        /* LoopNest 3 */
        for (int i_8 = 4; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    {
                        var_40 = 13346;
                        var_41 = 1473520445;
                        arr_35 [i_9] [i_9] [i_9] [i_9] [7] = (((((arr_23 [i_9]) || (arr_19 [i_8] [i_8]))) ? (arr_30 [i_9 + 2] [i_9 + 1] [i_9] [i_9 + 2]) : (arr_23 [i_9 + 2])));
                        var_42 = ((arr_29 [i_8 - 2] [i_10 - 1]) < ((137438953471 ? (arr_20 [i_7]) : (arr_24 [6]))));
                        var_43 = (arr_24 [i_9 - 2]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
