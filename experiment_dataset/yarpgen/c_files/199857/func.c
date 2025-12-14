/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199857
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
    var_16 = ((/* implicit */unsigned short) 4847959060708030039ULL);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            var_17 = min((max((((var_4) & (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (9223372036854775807LL)))))), (((/* implicit */unsigned long long int) var_9)));
            var_18 ^= ((/* implicit */int) var_13);
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                var_19 += ((/* implicit */unsigned long long int) (+(9223372036854775807LL)));
                var_20 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 4294836224LL)) ? (arr_3 [(short)0] [(short)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [4LL] [i_0])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((arr_5 [4ULL]) >> (((arr_5 [6]) - (4455434244007644180ULL))))))));
                    var_22 = ((/* implicit */unsigned long long int) var_13);
                    var_23 = ((/* implicit */unsigned int) 9475967560660842534ULL);
                }
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    var_24 = ((/* implicit */long long int) arr_2 [i_0]);
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), ((-(var_11)))))) && (((/* implicit */_Bool) ((unsigned short) max((arr_3 [6] [i_0]), (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
                    var_26 = (((-(arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(0ULL)))))))));
                }
                var_27 = ((/* implicit */int) ((max((min((4847959060708030039ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))) <= (min((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_2 [i_0 + 1])))));
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_0 + 1] [14ULL] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_11 [i_0] [i_0 + 1] [i_0 + 1] [(signed char)8] [i_0 + 1] [i_1]))))) ? (((/* implicit */int) ((13598785013001521577ULL) >= (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_1] [0]))))) : (min((arr_11 [1U] [i_0 + 1] [i_1] [i_2 + 1] [i_2 + 1] [i_2]), (arr_11 [i_0] [i_0 + 1] [i_1 + 1] [i_1] [i_1 - 1] [i_2])))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0]))) || (((/* implicit */_Bool) min((-1), (((/* implicit */int) (signed char)-35)))))));
                var_30 = ((/* implicit */int) min((12984874618717200345ULL), (var_4)));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0 + 1]) << (((arr_2 [i_0 + 1]) - (5180640983236628204ULL)))))) ? (max((var_12), (((/* implicit */unsigned long long int) (_Bool)1)))) : (min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))));
            }
            var_32 &= ((/* implicit */signed char) min((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (arr_9 [i_0] [12ULL] [i_0 + 1] [i_0 + 1] [i_0] [i_1 + 1]) : (var_3))) != (((/* implicit */unsigned int) 112900196)))))));
            var_33 = ((/* implicit */short) arr_8 [i_0] [2ULL] [i_1]);
        }
        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            var_34 ^= (-(4847959060708030043ULL));
            var_35 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 13598785013001521577ULL))))) >= (min((-8), (((/* implicit */int) (unsigned char)19))))))), ((~(arr_2 [i_0 + 1])))));
            var_36 = (-(((/* implicit */int) ((arr_13 [i_0] [i_6 + 1] [i_6] [11]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_6 - 1])))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_7 = 3; i_7 < 15; i_7 += 3) 
        {
            var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)12))))) && (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_7 - 3] [i_7 - 2]))));
            /* LoopSeq 4 */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                var_38 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_0] [8LL] [i_8]))));
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4847959060708030066ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_10 [i_0] [6ULL] [i_0 + 1] [i_8]))));
                /* LoopSeq 1 */
                for (long long int i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((arr_26 [i_10] [0ULL] [0ULL] [i_7 - 1] [i_0]) / (arr_26 [4U] [i_9] [i_8] [i_7 - 3] [i_0 + 1]))))));
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5255118819424271700LL)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (signed char)114))));
                        var_42 = ((/* implicit */_Bool) arr_10 [13ULL] [3ULL] [i_8] [i_0]);
                        var_43 = ((/* implicit */unsigned char) var_4);
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_0] [i_7] [2U] [i_0 + 1] [i_10])) ? (arr_27 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_0 + 1] [i_10]) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_45 = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_0 + 1] [i_7 - 2] [i_8]))));
                        var_46 = (((+(8563926U))) <= (1668411450U));
                    }
                    for (short i_12 = 3; i_12 < 15; i_12 += 1) 
                    {
                        var_47 = ((_Bool) arr_10 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]);
                        var_48 = ((((/* implicit */_Bool) arr_31 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))));
                    }
                    var_49 ^= ((/* implicit */signed char) arr_5 [2]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 3) 
                    {
                        var_50 = ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_13 - 1])) ? (((/* implicit */int) arr_10 [i_13 + 1] [i_9] [i_8] [i_0 + 1])) : ((~(1006632960))));
                        var_51 = arr_29 [i_13] [i_7] [(signed char)4] [i_7] [i_0];
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 2; i_14 < 15; i_14 += 3) 
                    {
                        var_52 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_32 [i_0] [i_14 + 1] [i_9 - 1] [i_9]) : (((/* implicit */unsigned long long int) var_11))));
                        var_53 = ((/* implicit */int) ((((8563926U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [10U] [(_Bool)1] [i_0] [(unsigned char)7] [i_0] [(_Bool)1] [(unsigned char)7]))))) != (arr_8 [i_0] [i_0] [i_9])));
                    }
                }
                var_54 = ((/* implicit */short) (+(arr_2 [i_0 + 1])));
                var_55 = arr_13 [i_0] [i_0 + 1] [i_7 - 1] [i_8];
            }
            for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_17 = 0; i_17 < 16; i_17 += 1) /* same iter space */
                    {
                        var_56 = ((/* implicit */short) ((int) var_2));
                        var_57 = arr_46 [i_0 + 1] [i_0 + 1] [i_0];
                        var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) (-(var_2))))));
                        var_59 = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0 + 1] [1ULL] [i_0] [i_0 + 1])) ? (arr_39 [i_0] [i_0] [1] [i_0 + 1] [i_0] [i_0 + 1]) : (arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])));
                        var_60 = ((unsigned long long int) arr_31 [i_0 + 1] [i_7] [i_7 + 1] [i_0 + 1] [i_0 + 1]);
                    }
                    for (long long int i_18 = 0; i_18 < 16; i_18 += 1) /* same iter space */
                    {
                        var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_62 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [i_0 + 1] [i_18] [(unsigned short)3] [i_18] [i_18]))));
                        var_63 = ((/* implicit */unsigned long long int) arr_19 [i_7 - 2] [i_15] [i_18]);
                    }
                    for (unsigned short i_19 = 2; i_19 < 13; i_19 += 3) 
                    {
                        var_64 = (+(var_4));
                        var_65 ^= ((/* implicit */signed char) arr_37 [i_19 + 2] [i_16] [4ULL] [12LL] [4ULL] [i_0] [i_0 + 1]);
                    }
                    var_66 = ((/* implicit */long long int) var_4);
                    var_67 = ((/* implicit */int) 5753273352235652571ULL);
                }
                var_68 ^= -7786857028201213224LL;
            }
            for (unsigned int i_20 = 0; i_20 < 16; i_20 += 3) /* same iter space */
            {
                var_69 = ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (var_15) : (((/* implicit */unsigned long long int) 8563926U)));
                var_70 = ((/* implicit */unsigned int) var_13);
            }
            for (unsigned long long int i_21 = 4; i_21 < 12; i_21 += 1) 
            {
                var_71 ^= ((/* implicit */unsigned char) ((2442686782035767340ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                var_72 = ((/* implicit */unsigned short) ((var_15) != (((/* implicit */unsigned long long int) arr_27 [i_21] [i_21 - 1] [i_21 - 4] [i_21 - 3] [i_21 - 2]))));
            }
            var_73 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65526)) & (((/* implicit */int) arr_19 [i_0] [i_0 + 1] [i_0 + 1]))));
        }
        for (unsigned short i_22 = 1; i_22 < 14; i_22 += 3) 
        {
            var_74 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_9)), (arr_35 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_22 + 2] [i_22 + 2])))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_22] [i_0 + 1])) : (arr_5 [i_0])))));
            var_75 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) arr_25 [2LL] [i_0 + 1] [i_0 + 1]))))) : (((((/* implicit */unsigned int) arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) & (arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])))));
        }
        var_76 &= ((max((((/* implicit */unsigned long long int) 5255118819424271700LL)), (((((/* implicit */unsigned long long int) -4302168441900894542LL)) | (13598785013001521554ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((/* implicit */int) ((((/* implicit */_Bool) 16004057291673784269ULL)) && (((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0 + 1] [(short)12] [i_0] [14U])))))))));
    }
    /* vectorizable */
    for (unsigned short i_23 = 1; i_23 < 10; i_23 += 3) 
    {
        var_77 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_39 [i_23] [i_23] [i_23] [i_23] [i_23 + 3] [i_23]))));
        var_78 ^= ((/* implicit */int) ((((/* implicit */int) arr_60 [12ULL] [i_23 + 2])) >= (((/* implicit */int) arr_61 [6ULL]))));
    }
    /* vectorizable */
    for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 3) 
    {
        var_79 += arr_67 [i_24] [8LL];
        var_80 |= ((/* implicit */unsigned short) arr_67 [i_24] [10U]);
        var_81 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514))) - (-1260473610393735251LL)))));
    }
    var_82 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (var_12)))));
    var_83 = ((/* implicit */unsigned long long int) var_9);
}
