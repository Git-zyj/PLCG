/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249955
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) min((((long long int) var_0)), (((/* implicit */long long int) (short)26153)))))));
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        var_12 &= ((/* implicit */unsigned short) min(((short)-26176), (((/* implicit */short) (signed char)-21))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_1)) >> (((1602997556U) - (1602997531U)))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)16030)) == (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [(_Bool)1])))))))));
                arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_2 + 4] [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) ((_Bool) var_6)))));
            }
            /* LoopSeq 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 4; i_4 < 14; i_4 += 4) 
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) && (((/* implicit */_Bool) (signed char)42))))) * (arr_4 [i_0 - 3] [i_1]))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))) : (var_4)));
                }
                /* LoopSeq 1 */
                for (long long int i_5 = 3; i_5 < 14; i_5 += 4) 
                {
                    arr_18 [i_0] [i_5] [i_5] = ((/* implicit */_Bool) (~(arr_8 [i_0 - 2] [i_1 + 1] [i_3 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 - 4] [i_1 + 1] [i_5 - 3])) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_6])))) : (arr_11 [i_3 - 1] [i_5 - 3] [i_6 - 1])));
                        arr_21 [i_0] [i_5] [i_3] [i_3 - 1] [i_0] [i_3 - 1] [i_0] = ((/* implicit */_Bool) arr_20 [i_1] [i_3 - 1] [i_3 - 1] [i_5 + 2] [i_5] [i_5] [i_6 - 1]);
                        arr_22 [i_5] [i_1] [i_3] [i_5 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) | (71916856549572608LL)));
                    }
                    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_5 + 2]))));
                }
                var_18 *= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1])))) % (((/* implicit */int) var_9))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (signed char)-21))));
                /* LoopSeq 4 */
                for (unsigned char i_7 = 2; i_7 < 15; i_7 += 4) /* same iter space */
                {
                    arr_25 [i_3 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_3] [i_3] [i_7]))) : (var_5)));
                    arr_26 [i_7] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_3 - 1] [i_0 + 1]))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_3]))));
                }
                for (unsigned char i_8 = 2; i_8 < 15; i_8 += 4) /* same iter space */
                {
                    arr_29 [i_0] [i_3] [i_8] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3]))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3])) || ((_Bool)0))))));
                    arr_30 [i_0] [(unsigned short)11] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_8]));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_0]))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned int) arr_10 [i_9] [i_9] [i_8 - 1] [i_1])))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (arr_11 [i_8 + 1] [i_3 - 1] [i_0 - 3]))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_3 - 1] [i_8 - 1] [i_8 - 1] [i_10])) % (((/* implicit */int) arr_27 [i_8] [i_0 - 1] [i_0 - 1] [i_1 + 1] [(short)3] [i_8])))))));
                        var_25 = arr_28 [i_0] [i_0] [i_0] [i_10];
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (((~(arr_11 [i_0] [i_3] [i_3 - 1]))) != (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_3] [i_8])) ? (((/* implicit */int) var_10)) : (arr_11 [i_1] [i_3] [i_3]))))))));
                        var_27 *= ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12997126928277779886ULL)) ? (6813728637270951147ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_3 - 1] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) arr_4 [i_8] [i_10]))))));
                    }
                    var_29 &= var_7;
                }
                for (unsigned char i_11 = 2; i_11 < 15; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_30 *= ((/* implicit */unsigned char) (+(arr_33 [i_0] [9] [i_3] [i_0] [i_0] [i_12] [i_3])));
                        var_31 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_12] [(unsigned char)15] [i_1] [i_0]))) % (var_7))));
                    }
                    var_32 = ((/* implicit */_Bool) (~(arr_20 [i_11] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11] [i_11] [(signed char)6])));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((unsigned long long int) (_Bool)1)))));
                        arr_45 [i_0] [i_1] [i_3] [i_11] [i_13 - 1] = var_3;
                        arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_13 - 1] [i_3 - 1] [i_3 - 1]))));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_50 [i_0] [i_1] [7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_3] [i_0] [i_3] [i_11] [i_14])) && ((_Bool)1))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1073741823U)))));
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14] [i_14 - 1] [i_14 - 1])) ? (3994037099633179215LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1111))))))));
                        arr_51 [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    }
                }
                for (unsigned char i_15 = 2; i_15 < 15; i_15 += 4) /* same iter space */
                {
                    arr_55 [i_0] [i_0] [i_0] [i_15] |= ((/* implicit */signed char) ((arr_54 [i_0 - 1]) - (arr_54 [i_0 - 1])));
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) arr_27 [i_0] [i_0] [i_1] [i_0] [i_3] [i_15]))));
                }
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */signed char) ((int) arr_44 [i_0] [i_0 - 1] [i_1 - 2]));
                var_37 += ((/* implicit */unsigned char) arr_53 [i_0] [i_1 + 1] [i_16] [i_0]);
                arr_58 [i_16] = ((/* implicit */long long int) arr_35 [i_0 - 3]);
            }
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_0 - 1] [i_1] [i_0 - 1])) % (arr_28 [i_17] [i_17 - 1] [i_17] [i_17]))))));
                var_39 = ((/* implicit */unsigned int) ((signed char) arr_23 [0LL] [i_1 - 1]));
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_8 [i_0] [i_1 - 1] [i_17 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((3259064760U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 2 */
                for (long long int i_18 = 2; i_18 < 15; i_18 += 4) 
                {
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (unsigned char)220))));
                    arr_66 [i_18] [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_0] [i_0])) * (arr_38 [i_0] [i_1] [i_17 - 1])));
                    arr_67 [i_0] [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_42 &= ((/* implicit */signed char) var_8);
                    arr_71 [i_0 + 1] [i_19] [i_19] [i_0 + 1] = ((/* implicit */_Bool) (((_Bool)1) ? (arr_4 [i_0 - 3] [i_0 - 3]) : (((/* implicit */int) var_2))));
                }
            }
        }
        for (unsigned short i_20 = 0; i_20 < 16; i_20 += 4) 
        {
            arr_74 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)(-32767 - 1)))));
            arr_75 [i_20] = ((long long int) ((((/* implicit */_Bool) (short)-3587)) || (((/* implicit */_Bool) var_4))));
        }
        var_43 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (short)32744)) < (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_1)) : (var_8)));
    }
    for (unsigned short i_21 = 1; i_21 < 7; i_21 += 4) /* same iter space */
    {
        arr_79 [i_21] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-67))) + (var_4)))) > (max((min((var_5), (((/* implicit */unsigned long long int) arr_49 [(unsigned short)4])))), (((/* implicit */unsigned long long int) (unsigned char)1))))));
        arr_80 [i_21] = var_4;
        arr_81 [i_21] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (min((10ULL), (((/* implicit */unsigned long long int) var_9))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_8 [i_21] [i_21 + 1] [i_21 + 3])))));
        arr_82 [i_21] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (~(var_6)))), (max((((/* implicit */unsigned long long int) var_1)), (34ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_31 [i_21] [i_21 + 3] [i_21])))) * (((/* implicit */int) arr_62 [i_21 - 1] [i_21] [i_21 + 1])))))));
        var_44 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_21 + 3] [i_21] [i_21 + 3] [i_21 + 2] [i_21] [i_21 + 1])) % (((/* implicit */int) arr_27 [i_21] [i_21] [i_21 + 3] [i_21] [i_21] [i_21]))))), (((((/* implicit */_Bool) arr_27 [i_21] [i_21] [i_21 + 3] [i_21 + 2] [i_21 + 2] [i_21 + 2])) ? (3494951732U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_21 + 1] [i_21] [i_21] [i_21] [i_21 + 3] [i_21 + 2])))))));
    }
    for (unsigned short i_22 = 1; i_22 < 7; i_22 += 4) /* same iter space */
    {
        var_45 = ((/* implicit */short) var_1);
        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) arr_14 [i_22] [i_22] [i_22] [i_22])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_22] [i_22] [i_22])))))))) ? (((((/* implicit */int) (unsigned char)249)) << (((/* implicit */int) arr_37 [i_22] [i_22])))) : (((((/* implicit */int) arr_32 [i_22])) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_22]))))))));
        var_47 += ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) -6824949213513235129LL)), (18446744073709551610ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_23 = 1; i_23 < 7; i_23 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_24 = 1; i_24 < 8; i_24 += 4) 
        {
            for (int i_25 = 1; i_25 < 9; i_25 += 1) 
            {
                {
                    arr_92 [i_23] [i_23] [i_23] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) arr_70 [(unsigned char)12] [(unsigned char)12])) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_25]))) * (arr_42 [i_24])))))));
                    var_49 = ((/* implicit */signed char) ((_Bool) min((arr_90 [i_23 + 2] [i_24] [i_25 + 1] [i_25 - 1]), (((/* implicit */short) var_9)))));
                }
            } 
        } 
        arr_93 [i_23] = ((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) >> (((/* implicit */int) var_10)))))));
        var_50 |= ((/* implicit */unsigned long long int) ((long long int) (-(arr_15 [i_23] [i_23 - 1] [i_23 + 3]))));
    }
    var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) var_4))));
    var_52 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-17581))) < (var_4)))), (var_1))))));
}
