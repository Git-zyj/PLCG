/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208890
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */short) var_10))))) || (((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_2 [i_0])))))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) 15959855178556308393ULL)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (signed char)40)))))));
        var_13 = ((/* implicit */signed char) var_10);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_14 = ((/* implicit */unsigned short) var_9);
                    var_15 = ((((/* implicit */_Bool) arr_8 [i_1] [i_2 + 1] [i_2 - 3])) ? (((/* implicit */int) var_4)) : (arr_8 [i_1] [i_1] [i_2 - 1]));
                    var_16 = (signed char)-121;
                }
                for (short i_5 = 2; i_5 < 15; i_5 += 2) 
                {
                    arr_17 [i_1] [i_2 - 2] [12ULL] [i_5 + 1] [i_2 - 2] [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [(signed char)10] [(signed char)10] [i_3] [i_2 + 1] [(signed char)3] [14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_2 - 2] [i_5] [5ULL] [i_5 - 2])) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)-58))));
                        var_17 = ((/* implicit */int) var_3);
                        arr_21 [i_1] [i_1] [(signed char)10] [i_1] [(unsigned char)10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 - 4])) ? (arr_14 [i_2 - 4] [i_2 - 4] [i_5 - 2] [4]) : (arr_14 [i_2 - 2] [(signed char)4] [i_5 - 1] [i_6])));
                    }
                    for (signed char i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(_Bool)1] [i_2] [i_5 - 1] [i_5 - 1])) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (signed char)-54))))) : (((((/* implicit */int) (signed char)-40)) * (((/* implicit */int) (signed char)-35))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_2 - 3] [i_2 - 3] [i_3] [i_7 + 1])))))));
                        var_20 = ((/* implicit */_Bool) arr_8 [i_2] [(short)9] [(short)9]);
                    }
                    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 2])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_5 - 1] [i_1])) : (((/* implicit */int) arr_12 [i_5 + 1]))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_2 - 2] [i_5 - 2] [i_2 - 2] [i_2 - 2])))))));
                }
                arr_26 [i_1] [(_Bool)0] [(signed char)9] = ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) var_8))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_7 [(short)7]))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_30 [i_8] [i_8] [i_2 - 4] [i_1] = ((/* implicit */short) (((-(0U))) % (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (-1144211831))))));
                arr_31 [i_1] [i_2 - 1] [i_1] [(unsigned char)4] = ((/* implicit */short) arr_28 [i_1] [10U] [i_1] [(short)5]);
            }
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)48)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) >= (9223372036854775807LL)));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_25 = var_8;
                        var_26 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
                        var_27 += ((/* implicit */_Bool) ((unsigned char) var_0));
                        var_28 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)140)))) <= (((/* implicit */int) arr_23 [i_2 - 1] [i_2 - 1] [0U] [i_2 + 1] [i_2 - 2]))));
                        arr_40 [i_9] [2U] [i_1] = ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1] [(_Bool)1] [i_1])) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-9223372036854775807LL - 1LL)));
                    }
                    var_29 *= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-35)) > (((/* implicit */int) (signed char)121)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_30 = ((/* implicit */signed char) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                        var_31 *= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (signed char)124))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (~(-1LL))))));
                    }
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        var_33 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_41 [(short)10] [(short)10] [i_2 - 4] [(unsigned char)10] [(unsigned char)10] [(short)10])) : (((/* implicit */int) (_Bool)1))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (var_2) : (var_2)));
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 2) 
                    {
                        var_35 = ((/* implicit */short) (signed char)84);
                        var_36 &= ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) var_4)))));
                        arr_50 [4ULL] [i_10] [i_10] [(short)11] [7LL] [(_Bool)1] [(signed char)7] = ((/* implicit */short) ((arr_14 [1ULL] [i_2 - 1] [9U] [9U]) > (arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(short)0])));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) arr_48 [i_1] [(short)4]))));
                    }
                    for (short i_15 = 1; i_15 < 15; i_15 += 3) 
                    {
                        arr_53 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_44 [i_1] [i_2] [1ULL] [i_10]);
                        var_38 = ((/* implicit */unsigned char) ((((arr_14 [i_1] [i_2 - 1] [i_9] [i_15]) <= (((/* implicit */unsigned int) var_2)))) ? (((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_1)))))));
                        arr_54 [7ULL] [(_Bool)0] [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_15] [(_Bool)1] [i_15 + 1] [i_15 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */int) var_7)) : (var_2)))));
                    }
                }
                var_39 = ((/* implicit */long long int) ((arr_22 [i_2 - 3] [i_2 - 4] [10LL]) ? (((/* implicit */int) arr_22 [i_2 - 2] [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) arr_22 [i_2 - 2] [i_2 - 2] [i_9]))));
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 - 2])))))));
            }
            for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_57 [(short)13]))) / (var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_1] [i_16] [i_16] [i_16] [i_2 - 4] [i_2 - 3]))))))));
                var_42 = arr_18 [i_16] [i_16] [(unsigned char)13] [(signed char)8] [i_16] [(signed char)8];
                var_43 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)66)))));
            }
            for (short i_17 = 0; i_17 < 16; i_17 += 1) 
            {
                var_44 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_10)))));
                var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_2 + 1] [i_2 + 1] [i_2 - 3] [i_2 - 4])) ? (((((/* implicit */_Bool) arr_45 [(unsigned short)3] [(unsigned short)3] [i_17] [7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_1] [(signed char)12] [(signed char)12] [4])))) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_2 + 1] [i_17]))));
                var_46 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)92)) ? (4262691116188474465ULL) : (((/* implicit */unsigned long long int) (((-2147483647 - 1)) - ((-2147483647 - 1)))))));
                /* LoopSeq 1 */
                for (unsigned short i_18 = 1; i_18 < 14; i_18 += 4) 
                {
                    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_2] [i_2 - 4] [i_2] [i_2] [i_2 + 1])) ? (arr_39 [i_2 - 1] [i_2 - 2] [i_2 - 3] [(unsigned short)6] [i_2 - 2]) : (arr_39 [i_2 - 4] [i_2 - 2] [i_2 - 4] [i_2] [i_2 - 1])));
                    arr_62 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((18446744073709551611ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                }
            }
        }
        /* LoopSeq 4 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            arr_65 [(signed char)14] = ((/* implicit */unsigned long long int) ((unsigned char) 2237250453U));
            arr_66 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
            var_48 = (~(((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2LL))));
            /* LoopSeq 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_69 [i_1] [i_19] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(unsigned char)3] [3LL] [(short)1] [i_19])) ? (((/* implicit */int) arr_11 [i_1] [(unsigned char)8] [i_20] [(unsigned char)8])) : (((/* implicit */int) (short)-32767))));
                var_49 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [(signed char)3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)100))))));
                var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_1] [13U] [1]))) <= (8849964038341445912LL))))));
            }
            for (int i_21 = 1; i_21 < 15; i_21 += 2) /* same iter space */
            {
                arr_72 [i_19] [i_19] [i_19] [i_21] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_70 [i_21] [i_19] [i_21])) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) arr_11 [i_19] [i_19] [i_21 + 1] [i_21 + 1])) : (((/* implicit */int) var_9))));
                arr_73 [10U] [i_19] [i_21] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)0)))))));
                var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [14U] [i_21 + 1] [(signed char)2] [i_21 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [13LL])) : (var_2)))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_0)))));
                var_52 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (arr_6 [i_1])));
                var_53 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) > (7824970818510176179LL)));
            }
            for (int i_22 = 1; i_22 < 15; i_22 += 2) /* same iter space */
            {
                arr_77 [i_1] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [(unsigned short)2] [5U] [(_Bool)1] [5U] [(unsigned short)2] [i_22 - 1])) ? (((var_2) ^ (((/* implicit */int) (_Bool)0)))) : (arr_8 [i_22 + 1] [i_22 - 1] [i_22 - 1])));
                var_54 *= ((/* implicit */short) ((-124263129) <= (((/* implicit */int) arr_3 [i_22 - 1]))));
                arr_78 [i_22] [(_Bool)1] [(_Bool)1] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_22 - 1])) ? (((/* implicit */int) arr_59 [(_Bool)1] [i_22 - 1] [i_22])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_22 + 1]))));
            }
            var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_19])) ? (((/* implicit */int) arr_2 [i_19])) : (((/* implicit */int) arr_13 [(signed char)9] [(unsigned char)0] [i_1] [i_1]))));
        }
        for (unsigned int i_23 = 0; i_23 < 16; i_23 += 3) 
        {
            arr_81 [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (11375626580238279369ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-24)) || (arr_59 [(signed char)10] [(signed char)10] [(signed char)11])))) : (((((/* implicit */int) arr_2 [i_1])) % (var_2)))));
            var_56 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)33941))));
        }
        for (short i_24 = 0; i_24 < 16; i_24 += 3) 
        {
            var_57 *= ((/* implicit */_Bool) ((arr_63 [i_1] [(short)11] [(signed char)6]) ? (((/* implicit */int) arr_37 [i_1] [i_24])) : (((/* implicit */int) arr_63 [i_1] [(_Bool)0] [i_24]))));
            var_58 = ((/* implicit */short) ((((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1)))) * (var_2)));
            arr_84 [1U] [12ULL] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_1] [i_1] [i_1])) + (((/* implicit */int) (signed char)54))));
        }
        for (unsigned int i_25 = 4; i_25 < 14; i_25 += 1) 
        {
            arr_87 [2LL] [2LL] = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1)));
            var_59 *= ((/* implicit */signed char) ((arr_74 [(unsigned char)0] [1ULL]) - (((/* implicit */int) var_4))));
        }
        arr_88 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_1]))) != (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) - (80298245U)))));
        /* LoopSeq 2 */
        for (short i_26 = 0; i_26 < 16; i_26 += 2) 
        {
            arr_92 [i_26] [i_1] &= ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (short)-12673)) / (((/* implicit */int) var_5)))));
            var_60 = ((/* implicit */short) ((((/* implicit */int) arr_49 [i_26] [i_26] [i_1] [i_1] [(_Bool)1] [i_1])) | (arr_8 [i_26] [i_26] [(short)13])));
        }
        for (unsigned short i_27 = 0; i_27 < 16; i_27 += 4) 
        {
            var_61 = ((/* implicit */short) ((arr_10 [i_1]) | (arr_10 [(short)12])));
            arr_96 [0ULL] [8U] [(unsigned short)10] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)124))));
        }
    }
    var_62 = ((/* implicit */long long int) min((var_62), (((/* implicit */long long int) var_2))));
    var_63 += ((/* implicit */_Bool) var_0);
    var_64 = ((/* implicit */signed char) (_Bool)1);
    var_65 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) (_Bool)1)))));
}
