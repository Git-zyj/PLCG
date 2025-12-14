/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223889
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
    var_20 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) var_19))))) < (((arr_4 [(signed char)1]) / (arr_5 [0] [i_1]))))), ((!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))) : (arr_11 [i_0] [i_3])))))) ? (((((/* implicit */long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */int) var_19))))) / (((((/* implicit */long long int) ((/* implicit */int) (short)-1))) - (arr_11 [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [4])), (arr_8 [i_0] [(unsigned char)9] [i_2] [(unsigned char)0] [i_0])))))));
                                var_23 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(short)1])) ? (var_7) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (!(var_10)))) : (arr_1 [i_2] [i_2]))), (((/* implicit */int) min((arr_6 [(_Bool)1] [i_0] [i_1] [i_0]), (arr_6 [i_0] [i_2] [i_3] [i_2]))))));
                                var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((((/* implicit */_Bool) var_11)) ? (arr_11 [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_2] [i_4])))) + (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_14)))))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_1] [i_1])) / (((((/* implicit */int) (unsigned char)169)) * (((/* implicit */int) arr_9 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)190)) + (((/* implicit */int) (unsigned char)162)))) + (((/* implicit */int) min(((unsigned char)175), (((/* implicit */unsigned char) arr_2 [i_0]))))))))));
                                var_27 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_0 [i_0] [i_1])))), ((((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) arr_14 [i_0] [i_5] [(signed char)5])) : (((((/* implicit */int) arr_9 [i_0] [i_0])) * (((/* implicit */int) var_14))))))));
                                var_28 = ((/* implicit */signed char) (+(((((/* implicit */int) var_19)) / (((/* implicit */int) arr_7 [i_0] [5LL] [i_0]))))));
                                var_29 = ((/* implicit */short) ((((-1248507162648126252LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) * (((/* implicit */long long int) max((((((var_7) + (2147483647))) >> (((((/* implicit */int) (unsigned char)162)) - (137))))), (((/* implicit */int) arr_15 [(unsigned short)4] [i_5] [i_2] [i_2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    var_30 &= ((/* implicit */signed char) var_5);
                }
            } 
        } 
        var_31 -= ((/* implicit */signed char) (~((-(((/* implicit */int) var_0))))));
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            var_32 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_2)) ? (max((arr_16 [i_0] [i_7] [i_0] [i_7]), (((/* implicit */long long int) arr_20 [(unsigned char)8])))) : (arr_5 [(unsigned char)8] [i_7])))));
            var_33 = ((/* implicit */signed char) (((((~(((/* implicit */int) var_10)))) | (((var_15) << (((((/* implicit */int) arr_17 [(signed char)3] [i_0] [i_7] [i_7] [i_7] [i_7])) - (185))))))) - (min(((-(var_13))), (((/* implicit */int) var_1))))));
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_34 = arr_8 [i_0] [i_0] [i_0] [i_0] [i_0];
            var_35 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_14 [i_0] [0] [i_8])), (var_15)));
            var_36 = (+((-((+(((/* implicit */int) (signed char)0)))))));
        }
    }
    for (short i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
    {
        var_37 = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-114)) - (((((/* implicit */_Bool) arr_21 [10LL])) ? (((/* implicit */int) arr_17 [i_9] [(signed char)8] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) var_14))))))) || (((/* implicit */_Bool) (unsigned char)51)));
        var_38 = ((/* implicit */signed char) max((((arr_5 [i_9] [i_9]) / (arr_5 [i_9] [i_9]))), (((/* implicit */long long int) ((unsigned char) var_19)))));
    }
    for (short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                {
                    var_39 -= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) & (4379293316816577317LL))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0))))));
                    var_40 -= ((/* implicit */unsigned char) ((short) arr_8 [(signed char)5] [(unsigned short)0] [i_11] [(unsigned char)0] [i_12]));
                    var_41 = ((/* implicit */long long int) arr_23 [i_11]);
                    var_42 &= ((/* implicit */int) (signed char)-1);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            var_43 = ((/* implicit */short) max((min((((/* implicit */long long int) arr_0 [i_10] [i_13])), (4379293316816577301LL))), (((/* implicit */long long int) arr_0 [i_10] [i_13]))));
            var_44 = ((/* implicit */unsigned short) 1502649316);
            var_45 = 3150971915576665882LL;
            var_46 |= ((/* implicit */long long int) arr_37 [i_10] [i_10] [i_10]);
        }
        for (signed char i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
        {
            var_47 |= ((/* implicit */short) (~(((arr_36 [i_10] [i_14]) ^ (arr_36 [i_10] [i_14])))));
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                for (short i_16 = 1; i_16 < 10; i_16 += 4) 
                {
                    {
                        var_48 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)56286))));
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
                        {
                            var_49 *= ((/* implicit */unsigned short) var_18);
                            var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) max((var_1), (((/* implicit */short) var_6))))) != ((~(arr_41 [i_10] [i_17] [i_14] [i_16 - 1])))))) : ((+(((((/* implicit */_Bool) arr_36 [i_10] [i_14])) ? (((/* implicit */int) arr_12 [i_10] [i_14] [i_15] [i_16] [i_17] [i_17])) : (((/* implicit */int) arr_40 [i_14]))))))));
                            var_51 = ((/* implicit */long long int) max((var_51), (arr_4 [(signed char)3])));
                        }
                        for (unsigned char i_18 = 0; i_18 < 11; i_18 += 4) 
                        {
                            var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_16 - 1] [i_14] [i_14] [(unsigned short)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((/* implicit */int) var_10))))) ? (((2LL) << (((((/* implicit */int) arr_38 [0])) - (96))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_19)))))))));
                            var_53 = ((/* implicit */long long int) min(((~(((/* implicit */int) max((((/* implicit */unsigned char) arr_43 [i_10] [i_14] [i_10] [i_10])), (var_4)))))), (121420324)));
                        }
                        var_54 = ((/* implicit */signed char) (~(((((((/* implicit */int) arr_24 [i_10] [i_10])) * (((/* implicit */int) var_9)))) & (((/* implicit */int) var_17))))));
                        var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_16 - 1] [i_14] [i_15] [i_16] [i_14] [i_16])) ? (((/* implicit */int) arr_17 [i_16 + 1] [i_14] [i_15] [i_16 + 1] [i_15] [(signed char)8])) : (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) arr_17 [i_16 + 1] [(signed char)1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [5LL])) ? (((/* implicit */int) arr_17 [i_16 - 1] [i_16 - 1] [i_15] [i_16] [i_10] [i_10])) : (((/* implicit */int) arr_17 [i_16 + 1] [i_14] [i_15] [i_15] [i_16] [i_15])))) : (((/* implicit */int) max((arr_17 [i_16 - 1] [(short)2] [(short)2] [i_16] [i_15] [i_16]), (arr_17 [i_16 - 1] [i_14] [(unsigned char)2] [(signed char)7] [i_16] [i_16]))))));
                        /* LoopSeq 2 */
                        for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            var_56 -= ((/* implicit */signed char) arr_24 [i_14] [(_Bool)0]);
                            var_57 *= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (var_0)))) ^ (((((((/* implicit */int) arr_47 [i_10] [i_10] [i_15] [i_15] [i_15] [0])) & (((/* implicit */int) var_19)))) * (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))))));
                        }
                        for (signed char i_20 = 0; i_20 < 11; i_20 += 4) 
                        {
                            var_58 = ((/* implicit */signed char) arr_12 [i_10] [i_14] [i_15] [i_15] [i_16] [i_15]);
                            var_59 = ((/* implicit */short) 1906863795);
                        }
                    }
                } 
            } 
        }
        for (signed char i_21 = 0; i_21 < 11; i_21 += 1) /* same iter space */
        {
            var_60 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_56 [i_10] [i_10] [i_21])) ? (arr_56 [i_21] [i_21] [i_10]) : (arr_56 [i_21] [i_10] [i_10]))) % (((arr_54 [i_21] [(_Bool)1] [i_21] [i_21] [0LL] [i_21]) + (((/* implicit */long long int) max((178523821), (178523828))))))));
            /* LoopNest 3 */
            for (long long int i_22 = 2; i_22 < 8; i_22 += 3) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (int i_24 = 2; i_24 < 10; i_24 += 4) 
                    {
                        {
                            var_61 = ((/* implicit */int) arr_46 [i_10] [i_21] [i_22]);
                            var_62 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_37 [i_21] [i_21] [i_22 - 1]))))) ? (((/* implicit */int) ((signed char) arr_37 [i_21] [i_22 + 2] [i_23]))) : (((((/* implicit */_Bool) arr_37 [i_10] [5LL] [i_24 - 2])) ? (((/* implicit */int) arr_37 [i_10] [i_21] [i_10])) : (((/* implicit */int) arr_37 [i_23] [i_21] [i_21]))))));
                            var_63 = ((/* implicit */long long int) arr_51 [i_22 - 2] [i_22] [i_24] [i_24] [i_22]);
                            var_64 = (signed char)3;
                        }
                    } 
                } 
            } 
            var_65 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (163550170)))) ? (((((/* implicit */_Bool) (signed char)-34)) ? (var_15) : (var_13))) : (((/* implicit */int) ((var_7) <= (((/* implicit */int) (signed char)87))))))), (max((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_48 [i_10] [i_10] [i_10] [i_10] [i_10] [i_21] [i_21]))))), ((-(((/* implicit */int) var_3))))))));
        }
        for (signed char i_25 = 1; i_25 < 10; i_25 += 2) 
        {
            var_66 = ((/* implicit */unsigned short) arr_47 [i_10] [i_25] [i_25] [i_25 + 1] [i_25] [i_25 + 1]);
            var_67 &= ((/* implicit */int) ((short) arr_63 [i_10] [i_10] [i_10] [i_10] [i_25 + 1] [i_10]));
            var_68 &= ((/* implicit */unsigned short) var_11);
        }
        /* LoopNest 3 */
        for (long long int i_26 = 0; i_26 < 11; i_26 += 3) 
        {
            for (signed char i_27 = 1; i_27 < 8; i_27 += 2) 
            {
                for (unsigned short i_28 = 0; i_28 < 11; i_28 += 2) 
                {
                    {
                        var_69 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (signed char)-78)))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_26])) - (((/* implicit */int) arr_47 [i_26] [(signed char)3] [i_27 + 3] [(signed char)4] [3] [i_27]))))) ? (((((/* implicit */int) (signed char)-121)) + (((/* implicit */int) (unsigned char)56)))) : (((arr_73 [i_27]) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) arr_69 [(unsigned char)9] [i_27] [i_28]))))))));
                        var_70 = ((/* implicit */signed char) var_6);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
    {
        var_71 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-113)), (arr_75 [i_29] [i_29])))) ? (((((/* implicit */_Bool) arr_74 [i_29])) ? (((/* implicit */int) arr_74 [i_29])) : (((/* implicit */int) arr_74 [i_29])))) : (((((/* implicit */_Bool) arr_75 [i_29] [i_29])) ? (((/* implicit */int) arr_74 [i_29])) : (((/* implicit */int) var_11)))))), ((+(((((/* implicit */int) var_16)) + (-2080148716)))))));
        var_72 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_75 [i_29] [i_29])), ((~(((/* implicit */int) arr_74 [i_29]))))));
        /* LoopNest 3 */
        for (unsigned char i_30 = 1; i_30 < 21; i_30 += 1) 
        {
            for (short i_31 = 0; i_31 < 24; i_31 += 4) 
            {
                for (unsigned char i_32 = 0; i_32 < 24; i_32 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_33 = 0; i_33 < 24; i_33 += 3) 
                        {
                            var_73 = ((/* implicit */short) arr_78 [i_29] [i_31] [i_30]);
                            var_74 *= ((/* implicit */short) ((((/* implicit */int) arr_81 [i_30 + 1] [i_32] [i_30 + 1] [i_30 + 2])) >= (((/* implicit */int) arr_81 [i_30 + 3] [i_31] [i_30 + 3] [i_30 + 1]))));
                        }
                        var_75 = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
        } 
        var_76 = ((((((/* implicit */_Bool) arr_75 [i_29] [i_29])) ? (((/* implicit */int) arr_75 [i_29] [i_29])) : (((/* implicit */int) var_17)))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_77 [i_29])) : (((((/* implicit */_Bool) arr_78 [i_29] [i_29] [4LL])) ? (((/* implicit */int) arr_83 [i_29] [i_29] [i_29] [i_29] [(short)0])) : (((/* implicit */int) (unsigned char)220)))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
    {
        var_77 = ((/* implicit */short) ((((/* implicit */_Bool) arr_79 [i_34] [i_34] [(_Bool)1])) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)106)) * (((/* implicit */int) (_Bool)1))))) : (((arr_85 [i_34] [i_34]) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        var_78 = ((/* implicit */signed char) arr_84 [(signed char)6]);
    }
    var_79 *= ((/* implicit */_Bool) var_18);
    var_80 = ((/* implicit */short) var_9);
}
