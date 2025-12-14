/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212998
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (signed char)123))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)6])) : (((/* implicit */int) (signed char)120))))));
        var_16 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 1])) + (((/* implicit */int) arr_1 [i_0 - 1]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_12 [(signed char)4] [i_2] [(signed char)4] [(signed char)4] &= ((/* implicit */short) ((unsigned char) arr_9 [i_0 - 1] [(_Bool)1] [i_1 + 3]));
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                    {
                        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0] [i_2 + 2] [i_1 - 1] [i_4 + 1])) ^ (((/* implicit */int) (unsigned char)217))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4] [i_4] [i_0 + 1])) ? (var_11) : (((/* implicit */unsigned int) arr_3 [i_0 + 1])))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
                    var_21 = 18446744073709551615ULL;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) var_10))));
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned long long int) var_0)))));
            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_5] [i_6] [i_5] [i_6]))));
        }
        for (long long int i_7 = 3; i_7 < 10; i_7 += 2) 
        {
            var_24 *= ((/* implicit */_Bool) 18446744073709551615ULL);
            var_25 ^= ((/* implicit */_Bool) ((short) arr_19 [i_7 - 2] [i_7 - 1]));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_5] [i_5])))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) var_7);
        var_28 = ((/* implicit */signed char) ((int) var_2));
        var_29 = ((/* implicit */_Bool) var_3);
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)504))) % (var_4)))) ? (arr_11 [i_8] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_9])) || (((((/* implicit */_Bool) var_12)) || ((_Bool)1)))));
            var_32 = ((/* implicit */short) (~(((/* implicit */int) arr_24 [i_8]))));
            var_33 = ((/* implicit */short) (~(((/* implicit */int) arr_17 [i_9] [i_8]))));
        }
        for (short i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 2; i_11 < 9; i_11 += 2) 
            {
                arr_34 [i_8] [i_8] [i_11] = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopSeq 1 */
                for (long long int i_12 = 1; i_12 < 8; i_12 += 2) 
                {
                    var_34 = ((/* implicit */unsigned char) (_Bool)0);
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) arr_13 [i_8] [4] [i_12 + 1] [7LL] [i_11 - 1]))));
                    var_36 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_8))))));
                    var_37 = ((/* implicit */signed char) ((((unsigned long long int) 14204757040764018331ULL)) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_11] [i_10] [i_11] [i_10])))));
                    arr_37 [i_10] [i_10] [i_10] [i_12] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_14 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 + 3] [i_12])) : (((/* implicit */int) arr_14 [i_12 + 3] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12]))));
                }
                /* LoopSeq 4 */
                for (short i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    var_38 *= ((/* implicit */int) var_9);
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_39 = (-(((/* implicit */int) ((((/* implicit */int) var_12)) == (var_14)))));
                        var_40 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) arr_21 [i_8] [i_10] [i_11]))))));
                    }
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        var_41 = ((unsigned long long int) ((((/* implicit */unsigned int) var_6)) - (arr_23 [i_8])));
                        arr_46 [(_Bool)1] [i_10] [i_10] [i_10] [i_13] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    }
                    var_42 = ((/* implicit */signed char) (-(((/* implicit */int) arr_40 [i_11 + 2] [i_13] [i_11] [i_11 + 2]))));
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)3972)) ? ((~(4241987032945533285ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_10] [i_8])))))));
                    arr_47 [i_10] [i_10] [i_11] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) arr_25 [i_8] [i_8])) : (((/* implicit */int) arr_1 [i_11 - 2]))));
                }
                for (short i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    var_44 = ((((/* implicit */_Bool) arr_36 [i_11 + 1] [i_16] [i_16] [i_16])) ? (arr_36 [i_11 + 1] [i_11 + 1] [i_8] [i_8]) : (((/* implicit */unsigned long long int) var_14)));
                    var_45 = ((/* implicit */_Bool) (((!(var_9))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_8])) : (((/* implicit */int) (unsigned char)32)))) : (((/* implicit */int) arr_45 [(_Bool)1] [i_11 - 2] [i_11 - 2]))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_11 - 1]))) ^ (var_4))))));
                    arr_53 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_42 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */int) arr_28 [i_10]))));
                    arr_54 [i_8] [i_8] [i_11 + 2] [i_8] = ((/* implicit */short) arr_40 [i_8] [i_11] [i_8] [i_8]);
                    var_47 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-123))));
                    arr_55 [i_8] [i_8] [5U] [i_8] [7ULL] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_2)))));
                }
                for (short i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    arr_59 [i_8] [i_10] [i_10] = ((/* implicit */unsigned short) (-(arr_42 [0] [0] [i_11 + 2] [i_18])));
                    var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) arr_11 [i_8] [i_10]))));
                    var_49 = ((/* implicit */signed char) arr_27 [i_8]);
                    var_50 = ((/* implicit */unsigned int) arr_21 [(unsigned short)8] [(unsigned short)8] [(unsigned char)1]);
                    /* LoopSeq 3 */
                    for (unsigned short i_19 = 4; i_19 < 10; i_19 += 2) 
                    {
                        var_51 = ((unsigned char) var_7);
                        var_52 = ((/* implicit */short) (-(((/* implicit */int) arr_38 [i_11 - 1] [i_11 + 2] [i_11 + 2]))));
                        var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((((/* implicit */_Bool) arr_25 [(signed char)10] [i_10])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_25 [i_8] [i_8])))))));
                        arr_63 [i_19] [i_18] [i_11 - 1] [i_10] [i_8] = ((((/* implicit */_Bool) arr_35 [i_8] [i_11 + 1] [i_8] [i_11 + 1] [i_11] [i_19 - 4])) ? (((/* implicit */int) ((short) (unsigned short)61553))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) (short)(-32767 - 1))))));
                    }
                    for (unsigned int i_20 = 2; i_20 < 10; i_20 += 1) 
                    {
                        var_54 |= ((/* implicit */short) ((((/* implicit */int) arr_26 [i_20])) + (((/* implicit */int) ((((/* implicit */int) arr_17 [i_11] [(signed char)6])) > (((/* implicit */int) arr_56 [i_8] [i_8] [i_8] [i_18])))))));
                        arr_67 [i_8] [i_8] [(unsigned char)4] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_64 [i_8] [i_20 - 1] [i_11 + 2] [i_8] [i_8] [i_11 + 2] [i_8])) >> (((((/* implicit */int) arr_64 [i_8] [i_20 - 2] [i_11 - 1] [i_8] [i_20 + 1] [i_18] [i_10])) - (37264)))));
                        arr_68 [i_10] [i_10] [10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_20 - 1])) ? (((/* implicit */int) arr_31 [i_20 - 1])) : (((/* implicit */int) arr_31 [i_20 - 2]))));
                        var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_11 + 1] [i_10] [i_20 + 1] [i_8] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_8] [i_20 - 2] [i_20 - 2]))))) : (((((/* implicit */unsigned long long int) -6337082939879903577LL)) & (4241987032945533275ULL))))))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        var_56 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4241987032945533284ULL)) ? (((/* implicit */int) arr_70 [i_11 - 2] [i_10] [i_11 - 1])) : (((/* implicit */int) (unsigned short)61564))));
                        var_57 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61552)) << (((((/* implicit */int) arr_19 [i_8] [i_10])) - (61896)))));
                        var_58 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_69 [i_18] [i_11 + 1] [i_18]))));
                        var_59 = ((/* implicit */unsigned short) (~(arr_9 [i_21] [i_21] [i_10])));
                    }
                }
            }
            for (unsigned long long int i_22 = 1; i_22 < 7; i_22 += 4) 
            {
                var_60 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)47810))));
                var_61 = ((/* implicit */unsigned short) arr_40 [i_22] [i_10] [i_10] [(unsigned short)10]);
            }
            for (unsigned short i_23 = 2; i_23 < 10; i_23 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_24 = 0; i_24 < 11; i_24 += 4) 
                {
                    var_62 = ((/* implicit */unsigned short) arr_38 [i_8] [i_10] [i_23 + 1]);
                    var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) ((((unsigned long long int) var_8)) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
                }
                for (unsigned char i_25 = 1; i_25 < 9; i_25 += 2) 
                {
                    var_64 ^= ((/* implicit */signed char) (unsigned short)47610);
                    var_65 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_74 [i_8] [i_25 + 2] [i_23 + 1])) : (((/* implicit */int) (signed char)30))));
                }
                arr_84 [i_23] [i_10] [i_10] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_78 [i_23] [i_23 - 1] [i_23])) ? (((/* implicit */int) arr_64 [(short)4] [i_23 - 1] [(short)4] [(unsigned short)5] [i_23] [i_23 - 1] [i_23 + 1])) : (((/* implicit */int) arr_78 [i_23] [i_23 + 1] [i_23]))));
            }
            var_66 = ((/* implicit */short) (-(var_6)));
        }
        arr_85 [i_8] = ((/* implicit */int) var_1);
    }
    var_67 = ((/* implicit */short) (_Bool)1);
}
