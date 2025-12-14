/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49701
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_3 [i_0] [i_0 - 4])) - (9026))))) / ((-(((/* implicit */int) var_14)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) : (var_12))), (((/* implicit */unsigned long long int) var_16))));
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_9 [22ULL] = ((/* implicit */signed char) min((min((max((arr_8 [i_1]), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) -5804572565524379430LL)))), (((unsigned long long int) min((((/* implicit */unsigned long long int) (signed char)97)), (var_13))))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_7 [9ULL] [i_2]))));
            arr_10 [9] [9] [(short)22] = ((/* implicit */short) max((((/* implicit */int) ((var_13) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), (((((/* implicit */int) arr_7 [i_1] [i_1])) * (((/* implicit */int) arr_7 [i_1] [i_2]))))));
            var_21 |= var_17;
            arr_11 [i_2] [i_1] [i_1] = ((/* implicit */int) var_4);
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-64)))))));
            var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [(unsigned char)0])) : (((/* implicit */int) var_16)))) != (((int) arr_6 [i_1] [i_3]))));
            var_24 = ((/* implicit */short) (~(((/* implicit */int) arr_13 [i_1]))));
            arr_15 [i_3] = ((((/* implicit */_Bool) arr_14 [i_1] [i_3] [i_1])) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) arr_14 [i_1] [i_3] [i_3])));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_6 = 1; i_6 < 24; i_6 += 2) 
                {
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_10))));
                    var_26 &= ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (var_9)))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_27 = ((/* implicit */int) var_10);
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (~(((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(signed char)3]))))))))));
                        var_29 *= ((/* implicit */unsigned char) ((short) arr_24 [i_6 + 1] [i_5 + 2] [i_5 + 3] [(signed char)19] [i_5 + 2]));
                    }
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_27 [i_6] = ((/* implicit */int) var_0);
                        var_30 |= ((/* implicit */signed char) var_15);
                    }
                    for (unsigned char i_9 = 3; i_9 < 23; i_9 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_26 [i_5] [i_5 + 2] [i_6 + 1] [i_9 - 3] [i_9 + 2] [i_9]))));
                        arr_30 [i_1] [i_4] [i_6] [(signed char)1] [(signed char)1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [18])))))));
                    }
                    arr_31 [i_1] [i_6] [i_5] [16ULL] = ((/* implicit */unsigned long long int) var_9);
                }
                for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 3) 
                {
                    arr_35 [i_1] [i_1] [i_1] [i_5] [(signed char)4] [i_10 - 1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_13 [i_1]))))) ? (((/* implicit */unsigned long long int) (-(var_9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1] [i_5] [5ULL]))) + (18446744073709551615ULL)))));
                    var_32 ^= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_3))))));
                    arr_36 [12LL] [i_5 + 2] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
                }
                arr_37 [i_1] [i_4] [i_5 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)23)) * (((/* implicit */int) (unsigned char)229)))) < ((-(((/* implicit */int) (unsigned char)250))))));
            }
            for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    arr_44 [i_1] [i_4] [i_4] [2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_12])) / (((arr_23 [i_1] [i_4] [i_4] [i_4] [i_12]) / (((/* implicit */int) (unsigned char)229))))));
                    arr_45 [i_12] [7ULL] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_12] [2LL] [(short)22] [i_12])) ? (((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_11] [i_12] [i_4])) ? (arr_18 [8ULL] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) var_9))));
                    arr_46 [i_12] = ((/* implicit */int) -5804572565524379424LL);
                    arr_47 [i_12] [i_12] [i_11] [(short)12] [i_1] |= ((/* implicit */long long int) arr_33 [i_1] [(unsigned char)18] [i_1] [i_12]);
                }
                for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    var_33 = ((/* implicit */short) ((((/* implicit */int) arr_40 [i_1] [i_4] [i_11] [i_13])) / (((/* implicit */int) arr_40 [i_1] [10] [i_11] [i_13]))));
                    var_34 = 5804572565524379424LL;
                }
                for (int i_14 = 3; i_14 < 23; i_14 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) var_1);
                    arr_52 [i_1] [i_11] [i_14] |= var_16;
                }
                arr_53 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_33 [i_11] [(short)7] [i_4] [15ULL]);
                arr_54 [i_11] = ((/* implicit */signed char) var_16);
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_1])) - (47))))))));
            }
            for (short i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    arr_61 [i_1] [i_4] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_26 [i_1] [i_4] [i_1] [i_16] [i_1] [i_4]))));
                    arr_62 [i_4] = var_11;
                    var_37 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_43 [21ULL] [i_1] [i_4] [i_4] [23ULL] [i_16])) ? (((/* implicit */int) (unsigned char)194)) : (arr_56 [i_1] [i_4] [i_15] [i_16])))));
                }
                for (short i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    arr_65 [i_15] = ((/* implicit */signed char) arr_8 [i_1]);
                    var_38 &= ((/* implicit */short) (signed char)23);
                }
                for (short i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    arr_68 [(short)24] [i_15] [i_4] [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-17))));
                    arr_69 [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_1] [1] [1] [i_18])) ? (arr_39 [i_18] [i_15] [i_4] [i_1]) : (arr_39 [i_4] [i_4] [15LL] [i_4])));
                    var_39 = ((/* implicit */signed char) ((var_8) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) arr_16 [i_1])))))));
                }
                for (short i_19 = 2; i_19 < 22; i_19 += 4) 
                {
                    arr_72 [(unsigned char)1] [i_4] = ((/* implicit */unsigned char) (((-2147483647 - 1)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((((/* implicit */_Bool) (short)-24284)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_19 + 1] [i_19 + 3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_19 - 2] [i_1]))) % (var_13)))))));
                }
                arr_73 [i_1] [i_1] [i_4] [i_15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                var_41 = ((signed char) (short)14259);
                arr_74 [(short)17] [(short)1] [i_15] = ((/* implicit */unsigned char) arr_57 [(signed char)20] [i_4]);
                arr_75 [i_1] [i_1] [i_4] [i_15] = ((/* implicit */int) arr_29 [i_15] [8] [i_1]);
            }
            arr_76 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_50 [i_1] [i_4] [(unsigned char)20] [(short)4]))));
            arr_77 [i_4] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_34 [i_4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_64 [i_1] [i_1] [i_4] [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        }
        for (signed char i_20 = 1; i_20 < 24; i_20 += 4) 
        {
            var_42 = ((/* implicit */unsigned long long int) min(((short)-28497), (((/* implicit */short) (!(((/* implicit */_Bool) var_4)))))));
            /* LoopSeq 2 */
            for (unsigned char i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    arr_86 [i_1] = ((/* implicit */unsigned long long int) var_6);
                    /* LoopSeq 1 */
                    for (unsigned char i_23 = 0; i_23 < 25; i_23 += 1) 
                    {
                        arr_90 [i_1] [i_20] [i_21] [i_22] [i_21] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)6)) <= (arr_50 [i_1] [i_20 - 1] [i_21] [i_23])));
                        arr_91 [i_22] [i_22] [i_22] [i_22] [(unsigned char)9] [(unsigned char)13] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_88 [i_1] [i_20] [i_21] [i_22] [i_22] [i_23])) / (844444043))))));
                        arr_92 [i_1] [i_1] [i_1] [i_1] = (-(((/* implicit */int) var_2)));
                    }
                    arr_93 [10ULL] [(unsigned char)18] [i_21] [i_21] [10ULL] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_40 [i_22] [i_21] [i_20] [i_1])) : (((/* implicit */int) (signed char)63))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) -321758737)) ? (((/* implicit */int) arr_88 [i_1] [i_1] [13] [i_20] [i_21] [i_22])) : (((/* implicit */int) var_2))))));
                }
                arr_94 [20LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((8388607ULL), (((/* implicit */unsigned long long int) arr_49 [i_1] [i_20] [i_21]))))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))));
            }
            for (int i_24 = 0; i_24 < 25; i_24 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_25 = 0; i_25 < 25; i_25 += 2) 
                {
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_98 [i_24] [i_20] [i_20 - 1]), (arr_98 [(signed char)23] [i_20] [i_20 - 1])))) ? (((/* implicit */int) arr_100 [i_1] [i_24] [i_20 - 1] [i_25])) : (((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (short)24473)) : (((/* implicit */int) arr_100 [i_1] [i_20 + 1] [i_20 + 1] [i_25])))))))));
                    arr_101 [i_1] [i_24] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_20 + 1] [i_24]))));
                }
                arr_102 [i_1] [i_24] = ((/* implicit */short) (!(((/* implicit */_Bool) 15594685239479841942ULL))));
            }
            var_44 = ((/* implicit */long long int) (+((((-(((/* implicit */int) (short)-17898)))) / (((/* implicit */int) min((((/* implicit */short) var_11)), (var_6))))))));
            arr_103 [i_1] = ((/* implicit */short) ((signed char) var_4));
            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (signed char)23))));
        }
    }
    var_46 = ((/* implicit */int) var_14);
    var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) 1764180391))));
    var_48 = ((/* implicit */signed char) (-(var_0)));
}
