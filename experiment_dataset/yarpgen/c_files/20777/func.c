/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20777
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) -7236584800206364783LL))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_4 [(signed char)2] [2U] &= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((short) var_1))), (((((/* implicit */_Bool) (unsigned char)226)) ? (-8655857764593217999LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))), (((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 2] [8U])) * (((/* implicit */int) var_6))))) % (var_16)))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min(((-(var_12))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_2 + 2]))))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_2 - 1] [i_2 - 1])))), (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2 - 1] [i_2])) || (((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2 + 1] [i_2 + 2])))))))));
                arr_7 [i_0] [1ULL] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) ((short) (short)-32744))), (max((var_12), (((/* implicit */unsigned int) var_18))))))));
            }
            var_22 += ((/* implicit */unsigned char) var_2);
        }
        for (long long int i_3 = 2; i_3 < 7; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 44298619U))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (44298619U)))))))) >= ((-(var_16))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 3; i_4 < 6; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_17 [i_4] [i_5] [i_4 + 3] [i_5] [i_0] = ((/* implicit */unsigned char) arr_15 [i_5] [(unsigned short)8] [(_Bool)1] [i_5]);
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2U)) | (16492637448459458025ULL)));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (unsigned short)39907))));
                            arr_21 [i_0 + 1] [i_5] [8ULL] [i_4 - 2] [3LL] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((arr_13 [i_0] [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned char)245))))) + (((((/* implicit */long long int) ((/* implicit */int) (short)-13751))) % (arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_3] [i_0 - 1] [(unsigned char)9]))) + (arr_13 [i_4 + 2] [i_3] [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -7057173185745195452LL))) && (((/* implicit */_Bool) 3810343176U))))))));
                            var_27 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)23543)) && (((/* implicit */_Bool) arr_15 [i_5] [i_0] [i_4] [i_3])))) ? ((-(((/* implicit */int) (short)217)))) : (((/* implicit */int) ((arr_13 [(unsigned short)4] [5ULL] [(signed char)0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197)))))))) * (min((((/* implicit */int) ((_Bool) 9128715829731602703LL))), ((~(((/* implicit */int) (unsigned char)27))))))));
                            arr_22 [(short)4] [i_4 - 3] [i_4] [i_5] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))) >= (((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (var_12))) ? (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4]))))) : (((/* implicit */unsigned long long int) var_12))))));
                        }
                        arr_23 [(short)0] [i_3 - 2] [i_4] [i_5] [i_5] [i_5] &= ((/* implicit */long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_1 [i_5] [(unsigned char)2])) : (((/* implicit */int) var_8)))))) & (((/* implicit */int) ((short) ((unsigned short) arr_19 [i_5] [i_5] [i_4] [i_4] [i_4] [(unsigned char)1] [i_0 - 1]))))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_26 [(short)7] [i_5] [i_4] [i_7] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (max((arr_9 [i_0 + 2]), (((/* implicit */long long int) (unsigned char)9))))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [1LL] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31941))) : (-7236584800206364767LL)))) - (var_2)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [4ULL] [(short)1] [i_4])), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_19 [i_7] [i_5] [i_5] [(signed char)0] [i_4 - 3] [i_3] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_3 - 2] [i_3] [i_5] [i_8] = ((/* implicit */_Bool) (unsigned char)27);
                            arr_31 [i_5] [(unsigned char)6] [i_4] [i_5] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)127))))))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */int) ((unsigned short) var_3))) >> (((((/* implicit */int) var_5)) - (223)))))));
                            arr_32 [i_0] [i_5] [i_8] [i_5] = 8727373545472LL;
                            arr_33 [(_Bool)0] [i_5] [(signed char)0] [i_4] [(signed char)0] [i_3] [i_0 - 1] |= var_2;
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_29 = max((var_16), (((((/* implicit */_Bool) (short)-1126)) ? (((((/* implicit */_Bool) arr_25 [i_5] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (7236584800206364781LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)15360))))))));
                            var_30 += ((/* implicit */unsigned int) min(((short)32767), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_10)))))));
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            var_31 *= ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (min((arr_24 [i_10] [i_0 + 1] [(unsigned char)6] [i_10] [i_10] [i_0 + 1]), (arr_24 [i_10] [i_0 + 2] [i_10] [i_0] [(unsigned char)8] [i_10])))));
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min(((_Bool)1), (arr_3 [i_0 + 2] [i_11]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 12754595277714105496ULL)))) : (max((365273845U), (((/* implicit */unsigned int) (unsigned short)14))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -7807925000549714269LL)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) var_0)))))) : (((-7236584800206364782LL) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                var_33 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (arr_9 [i_0 + 2]) : (((/* implicit */long long int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-5054)) || (((/* implicit */_Bool) arr_9 [i_0 + 2])))))) : (((((/* implicit */_Bool) (unsigned char)65)) ? (arr_9 [i_0 + 1]) : (var_1)))));
            }
            for (short i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_13 = 4; i_13 < 7; i_13 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 2; i_14 < 8; i_14 += 3) /* same iter space */
                    {
                        var_34 += ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) arr_44 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35)))))))) : (((((/* implicit */long long int) (-(var_12)))) % (max((arr_9 [(_Bool)1]), (var_1))))));
                        var_35 += ((/* implicit */signed char) ((long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)119)) - (((/* implicit */int) (unsigned char)72))))));
                    }
                    for (long long int i_15 = 2; i_15 < 8; i_15 += 3) /* same iter space */
                    {
                        arr_50 [(unsigned short)6] [i_10] [i_13] [i_12] [i_15] [i_12] [i_12] = ((/* implicit */unsigned short) ((unsigned int) ((short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_1 [i_10] [i_0]))))));
                        var_36 *= ((((/* implicit */_Bool) ((((var_6) ? (((/* implicit */unsigned long long int) 938403744U)) : (arr_46 [(short)9] [(unsigned char)9] [8LL] [(short)4] [i_15 - 1]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) (short)15418)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_15)))) : (arr_14 [i_0 - 1] [6LL] [i_13 - 4] [(unsigned char)7]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                        arr_51 [(unsigned short)9] [2U] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (-(((long long int) ((long long int) (unsigned char)24)))));
                    }
                    var_37 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_0 + 2])) ? (((/* implicit */int) (short)-16383)) : (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_13 - 4])))));
                    var_38 = ((/* implicit */short) max((max((((/* implicit */unsigned short) max((var_10), (((/* implicit */short) var_4))))), (((unsigned short) var_14)))), (((/* implicit */unsigned short) (unsigned char)248))));
                }
                for (short i_16 = 1; i_16 < 7; i_16 += 1) 
                {
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4250668694U)))) ? (((/* implicit */long long int) var_12)) : (arr_35 [i_0 - 1] [(short)7] [i_0 + 2]))))));
                    arr_54 [i_0] [(signed char)2] [i_16] [(unsigned char)8] [i_12] [i_16 + 1] = ((/* implicit */unsigned long long int) (_Bool)0);
                }
                var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) 4250668676U))));
                var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (562585147U) : (1294024410U)))), (arr_34 [i_12] [i_12] [6U] [i_10] [i_0] [i_0 + 2])))))));
            }
            arr_55 [(short)1] = ((/* implicit */long long int) arr_18 [i_0] [(_Bool)1] [i_10] [i_10] [i_10] [i_10] [i_10]);
        }
        for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 1; i_18 < 8; i_18 += 3) 
            {
                for (signed char i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_42 = ((/* implicit */signed char) (~(((/* implicit */int) var_17))));
                            var_43 &= ((/* implicit */short) ((long long int) (-(arr_14 [i_0] [i_0 + 1] [i_18 + 2] [i_18]))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
                        {
                            var_44 = ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_21] [i_18] [i_17] [i_21])) : (((/* implicit */int) var_6)))) >= ((~(((/* implicit */int) arr_6 [i_0] [(_Bool)1] [(_Bool)1])))))));
                            var_45 = ((/* implicit */long long int) max((var_45), (((long long int) var_3))));
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) var_6))));
                            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) min((max(((~(((/* implicit */int) var_14)))), (((/* implicit */int) arr_49 [0LL] [(short)1] [i_18] [(short)8] [i_18])))), (((((/* implicit */int) (short)27836)) * ((~(((/* implicit */int) var_14)))))))))));
                        }
                        for (unsigned char i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
                        {
                            var_48 *= (unsigned char)67;
                            var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (_Bool)0)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-67)))))))))));
                            var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_11)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)234)), (127ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)246)), ((short)27811))))))))))));
                            var_51 = ((/* implicit */short) min(((-(((/* implicit */int) ((short) var_2))))), ((+(((/* implicit */int) (unsigned char)53))))));
                        }
                        for (unsigned char i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
                        {
                            var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) (~(14064476960085158600ULL))))));
                            var_53 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_18 - 1] [i_18 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_0 + 1]))) : (arr_10 [i_18 - 1] [(unsigned short)5] [i_18] [i_0 - 1])))));
                            arr_73 [i_0] [(unsigned char)3] [i_18 + 2] [i_19] [i_23] = ((/* implicit */unsigned long long int) ((unsigned short) (+(((arr_70 [i_0 + 2] [i_17] [i_17] [i_18] [i_23]) ? (arr_66 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143))))))));
                        }
                        var_54 += ((/* implicit */signed char) var_3);
                        arr_74 [i_18 - 1] [i_18] [(unsigned short)7] [i_18] [(unsigned char)9] [i_18 + 1] = ((/* implicit */short) max((var_6), (arr_42 [8LL] [i_17] [i_17] [i_18 + 1] [i_18] [i_19])));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_24 = 0; i_24 < 10; i_24 += 4) 
            {
                var_55 = ((/* implicit */unsigned int) ((short) min((((/* implicit */long long int) var_3)), (min((arr_24 [i_24] [i_17] [i_17] [i_24] [i_24] [i_24]), (((/* implicit */long long int) 4145626799U)))))));
                arr_78 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) min(((unsigned short)65528), (((/* implicit */unsigned short) (signed char)25))))))))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned int) arr_64 [(signed char)2] [(unsigned char)8] [i_24] [i_24] [i_17])), (arr_13 [(short)4] [5LL] [i_0 - 1])))))));
            }
            for (short i_25 = 1; i_25 < 9; i_25 += 2) 
            {
                var_56 *= ((/* implicit */unsigned long long int) var_12);
                /* LoopSeq 4 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_57 = ((/* implicit */int) var_7);
                    arr_84 [i_25] [i_25] [i_17] [i_25] = ((/* implicit */unsigned char) (signed char)-55);
                }
                for (long long int i_27 = 1; i_27 < 9; i_27 += 4) 
                {
                    var_58 *= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) arr_72 [i_0] [i_0] [i_0 + 1] [(unsigned char)1] [i_0])), ((short)5381)))) << (((/* implicit */int) ((((/* implicit */int) ((short) arr_14 [i_0 + 1] [i_17] [i_25] [i_27]))) >= (((((/* implicit */_Bool) (short)-25460)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) arr_85 [i_17] [(unsigned char)4])))))))));
                    var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4841374086601704910ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_27] [i_17] [(short)6]))) : (max((arr_46 [i_27 + 1] [i_27] [9U] [i_27 + 1] [i_25 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [8U] [i_17] [(unsigned short)3] [(signed char)4] [i_27]))) & (295877701U)))))))))));
                }
                for (short i_28 = 0; i_28 < 10; i_28 += 1) 
                {
                    var_60 = ((/* implicit */short) max((var_60), (((/* implicit */short) var_17))));
                    var_61 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-27))))))))));
                }
                for (unsigned char i_29 = 0; i_29 < 10; i_29 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_30 = 1; i_30 < 8; i_30 += 4) 
                    {
                        arr_97 [i_0] [i_17] [i_25] [(unsigned char)6] [i_30] &= ((/* implicit */short) arr_90 [i_25] [i_29] [i_25] [i_25]);
                        var_62 = ((/* implicit */unsigned char) arr_47 [i_25]);
                    }
                    var_63 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)254))) : (((unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) % (max((((/* implicit */unsigned int) arr_8 [i_0])), (var_12))))))));
                    var_64 = ((/* implicit */long long int) (~((+((~(((/* implicit */int) arr_61 [(short)5] [i_17] [i_25 - 1]))))))));
                }
                var_65 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max(((unsigned short)25681), (((/* implicit */unsigned short) var_6))))), (((((/* implicit */_Bool) var_9)) ? (arr_35 [i_0 + 1] [i_0 + 2] [i_0 + 2]) : (var_1)))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_31 = 2; i_31 < 6; i_31 += 4) 
            {
                arr_100 [6LL] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((int) var_13))) ? (((((/* implicit */_Bool) (unsigned char)240)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [(unsigned char)3] [8LL] [2U]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_31 + 2] [i_31] [i_31 + 3]))))), (((((/* implicit */_Bool) var_16)) ? (var_1) : (min((((/* implicit */long long int) (unsigned char)82)), (arr_35 [(unsigned short)7] [i_17] [i_31 + 2])))))));
                var_66 = ((/* implicit */short) min((var_66), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_81 [i_0] [i_0] [8LL] [(short)4] [i_31] [i_31]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)39855), (((/* implicit */unsigned short) var_15))))) == ((-(((/* implicit */int) (unsigned short)51706)))))))) : (68169720922112LL))))));
            }
            var_67 = (-(min((((((/* implicit */_Bool) (unsigned short)39855)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))))), (((/* implicit */long long int) arr_96 [i_17] [i_17] [i_17] [(_Bool)1] [(short)4] [i_0 + 1] [i_0])))));
        }
    }
    var_68 = ((/* implicit */short) min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_2))))) <= (((long long int) (short)-16374)))))));
    var_69 |= ((unsigned char) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_17))));
}
