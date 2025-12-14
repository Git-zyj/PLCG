/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4994
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 3])) * (((/* implicit */int) arr_3 [i_0 - 2])))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((4563525068646832367LL) + (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 211586282))));
                        var_16 = ((/* implicit */long long int) (~(arr_1 [i_3 - 1])));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                        {
                            var_17 &= arr_12 [i_0 - 2] [i_1];
                            var_18 = (_Bool)0;
                        }
                        for (short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(var_3))))));
                            arr_17 [i_3] = ((/* implicit */long long int) 211586291);
                            var_20 = var_9;
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) (+(((211586282) - (((/* implicit */int) arr_5 [i_0]))))));
                            arr_20 [i_0] [i_2] [i_2] [i_3] [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0 + 1]))));
                        }
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        /* LoopSeq 4 */
        for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                arr_28 [i_7] [i_7] [i_7] [i_7] = var_8;
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) ((arr_29 [i_7] [i_8] [i_9] [i_10] [i_11] [i_8]) ? (((/* implicit */unsigned long long int) ((((arr_32 [i_7] [i_8] [i_9] [18ULL] [i_11]) + (2147483647))) << (((((var_11) + (2286911))) - (5)))))) : ((~(18446744073709551615ULL)))));
                        var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((((/* implicit */_Bool) var_8)) ? (arr_24 [i_7] [18] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    }
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 14546780264676948457ULL)) && (((/* implicit */_Bool) 3271505471U))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_38 [i_7] [i_8] [i_9] [i_12] [i_7] [21ULL] = ((/* implicit */unsigned long long int) (+(arr_26 [i_12] [i_12] [i_12])));
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 3; i_13 < 19; i_13 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) arr_41 [i_7] [i_8] [i_8] [i_13 + 1]);
                        arr_42 [i_13 - 2] [i_8] [i_8] [i_9] [i_8] [i_7] = ((/* implicit */unsigned char) (~(arr_32 [i_13 + 3] [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_12])));
                        var_27 = ((/* implicit */unsigned short) ((arr_36 [i_7] [i_7]) + (((/* implicit */int) var_1))));
                    }
                    for (unsigned int i_14 = 3; i_14 < 19; i_14 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_7] [i_8] [i_9] [i_14])))))));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((var_12) / (((/* implicit */int) arr_33 [i_14 - 3] [i_8])))))));
                        var_30 = ((/* implicit */unsigned short) ((arr_22 [(unsigned char)17] [i_14 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_14] [i_7] [i_14 - 3] [i_14 + 2] [i_7])))));
                    }
                    for (unsigned int i_15 = 3; i_15 < 19; i_15 += 3) /* same iter space */
                    {
                        arr_51 [i_8] [i_9] [i_12] [i_15 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_15 - 3] [7U] [i_15 - 1] [i_15 + 4] [i_15 + 4])) | (((/* implicit */int) arr_37 [i_15 + 3]))));
                        var_31 = ((/* implicit */short) arr_35 [i_15 + 3] [i_15 + 4] [i_15 + 4] [i_15 + 3] [i_15 + 3] [i_15] [i_15]);
                    }
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        var_32 ^= ((/* implicit */long long int) ((int) var_2));
                        var_33 = ((/* implicit */unsigned short) ((long long int) arr_29 [i_16] [i_9] [i_9] [i_8] [(unsigned char)15] [i_7]));
                    }
                    var_34 *= ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (var_3)))));
                }
                var_35 = var_11;
            }
            var_36 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_33 [i_7] [i_7])))) ^ ((~(((/* implicit */int) arr_31 [(short)20] [i_8] [(short)20] [(short)20]))))));
            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (+((-(-9007701307887925160LL))))))));
        }
        for (int i_17 = 3; i_17 < 21; i_17 += 4) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned short) 16387365376649825178ULL);
            var_39 ^= ((/* implicit */unsigned char) (~((-(var_10)))));
        }
        for (int i_18 = 3; i_18 < 21; i_18 += 4) /* same iter space */
        {
            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (~(((/* implicit */int) arr_52 [i_18 - 1] [i_18 - 1] [i_18 - 3] [i_18] [i_18])))))));
            var_41 = ((/* implicit */unsigned long long int) ((int) arr_45 [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_18 - 2] [i_18]));
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 23; i_19 += 2) 
            {
                for (int i_20 = 0; i_20 < 23; i_20 += 3) 
                {
                    {
                        var_42 = ((/* implicit */unsigned char) var_1);
                        var_43 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3271505471U)));
                        arr_66 [i_20] [10U] [i_18] [i_18] [i_18] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned char)198))));
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)544))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 979883536U)) ? (((/* implicit */int) var_5)) : (var_11))))));
                    }
                } 
            } 
            var_45 += ((/* implicit */short) ((((/* implicit */int) arr_40 [i_7] [i_7] [i_7] [i_7] [i_7])) & (arr_32 [i_7] [i_7] [i_7] [i_7] [i_7])));
        }
        for (int i_21 = 3; i_21 < 21; i_21 += 4) /* same iter space */
        {
            var_46 = ((/* implicit */unsigned int) (unsigned char)31);
            /* LoopSeq 2 */
            for (unsigned char i_22 = 2; i_22 < 22; i_22 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_23 = 0; i_23 < 23; i_23 += 4) 
                {
                    var_47 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_21] [i_21 - 3])) || (((/* implicit */_Bool) arr_68 [i_21] [i_21 - 2]))));
                    arr_75 [i_7] [i_21 + 2] = ((/* implicit */int) var_10);
                    /* LoopSeq 3 */
                    for (unsigned int i_24 = 0; i_24 < 23; i_24 += 1) 
                    {
                        var_48 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_21 - 2] [i_21 + 1] [i_22 - 2] [i_23] [i_24])) ? ((~(((/* implicit */int) var_7)))) : (((arr_68 [i_7] [17ULL]) | (((/* implicit */int) arr_37 [i_7]))))));
                        arr_78 [20U] [i_21 - 3] [i_22 + 1] [i_23] [i_24] = ((/* implicit */unsigned char) arr_63 [i_23] [i_23] [i_23]);
                        var_49 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [i_24] [i_22 + 1] [i_22 - 1] [i_21 + 2] [i_21 + 2]))));
                    }
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */long long int) (-(arr_24 [i_21 - 3] [i_21] [i_21 - 2])));
                        arr_82 [i_25] = ((/* implicit */unsigned char) (((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_21 - 1] [i_22 - 1] [i_22 - 1])))));
                        var_51 = ((/* implicit */unsigned short) (+(((var_4) << (((((/* implicit */int) (unsigned short)10882)) - (10866)))))));
                    }
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)1471)))))));
                        var_53 ^= ((/* implicit */long long int) ((unsigned int) var_5));
                        arr_85 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (+(arr_32 [i_21 - 2] [i_21 - 2] [i_22 - 2] [i_22 - 1] [i_26 - 1])));
                        var_54 -= ((/* implicit */unsigned int) var_5);
                    }
                    var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) (unsigned char)39))));
                }
                /* LoopNest 2 */
                for (unsigned char i_27 = 0; i_27 < 23; i_27 += 1) 
                {
                    for (unsigned int i_28 = 0; i_28 < 23; i_28 += 3) 
                    {
                        {
                            var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */int) (unsigned short)56657)) : (((/* implicit */int) (_Bool)0)))))));
                            var_57 = ((long long int) (-(((/* implicit */int) (unsigned char)161))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_30 = 3; i_30 < 22; i_30 += 1) 
                    {
                        arr_96 [8U] [i_30] [i_22 - 1] [i_30] [i_7] = ((((/* implicit */int) arr_55 [i_21 + 1] [i_30 - 3])) >> (((((/* implicit */int) arr_55 [i_21 + 1] [i_30 + 1])) - (21979))));
                        var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) ((arr_45 [i_22] [i_22 + 1] [(signed char)1] [(signed char)1] [(signed char)1]) % (arr_45 [i_30 - 1] [i_22 + 1] [i_7] [i_7] [i_7]))))));
                        var_59 = (~(3772949044918020259LL));
                    }
                    for (long long int i_31 = 1; i_31 < 22; i_31 += 4) 
                    {
                        var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) (unsigned short)65535))));
                        var_61 = ((/* implicit */int) min((var_61), (((/* implicit */int) var_6))));
                    }
                    var_62 = (!(((/* implicit */_Bool) 4294967295U)));
                }
                var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_21 + 1] [i_22 + 1])) == (((/* implicit */int) arr_54 [i_22 - 2] [i_22 - 1] [i_22 - 1])))))));
            }
            for (unsigned long long int i_32 = 0; i_32 < 23; i_32 += 2) 
            {
                var_64 *= ((/* implicit */_Bool) 2760147014U);
                arr_101 [i_7] [i_21] [i_32] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_32] [i_7] [i_7] [i_7]))) + (arr_81 [i_7])));
                arr_102 [i_7] [i_21] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) arr_21 [i_21])) : (var_0)))) ? (((((/* implicit */_Bool) 4021572527U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2992152395U))) : (var_4)));
            }
            var_65 = ((/* implicit */unsigned char) 1086354210);
        }
        arr_103 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_7] [i_7] [(short)12])) ? (((/* implicit */int) arr_27 [i_7] [i_7] [i_7] [i_7])) : ((+(((/* implicit */int) arr_27 [i_7] [i_7] [i_7] [i_7]))))));
    }
    var_66 = ((/* implicit */unsigned short) var_5);
    var_67 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
}
