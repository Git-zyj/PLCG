/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51328
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) 4527194405549151638ULL);
                    var_15 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) 4527194405549151652ULL);
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), ((+(((unsigned int) ((unsigned int) var_13)))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_18 &= ((/* implicit */long long int) (+(13919549668160399938ULL)));
                                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 2086301360)) / (var_13))) / (((/* implicit */long long int) var_1))))), (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (var_3)))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_13)) : (4527194405549151632ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) var_2))))) != (((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (320985554927701206LL))))));
                        var_21 ^= ((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)-32750))))));
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [7ULL] [i_7] [i_0])) ? ((+(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)8] [(unsigned char)8])))));
                            var_23 = ((/* implicit */unsigned int) var_4);
                        }
                        for (int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                        {
                            var_24 |= ((/* implicit */unsigned int) (+((+((+(var_4)))))));
                            var_25 = ((/* implicit */short) ((13919549668160399969ULL) < (((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) var_3)) >= (var_13)))))));
                            var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0 + 2] [i_7] [i_7] [i_9] [i_11])) ? (var_9) : (var_6)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        for (short i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        for (unsigned int i_16 = 1; i_16 < 7; i_16 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) (+((~(max((var_6), (var_9)))))));
                                var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-32750)), (13919549668160399963ULL)));
                                var_29 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_15] [i_13] [i_14] [i_15]))) : (((13919549668160399977ULL) * (arr_5 [i_14] [i_16 + 2] [i_16 + 2] [i_16 - 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_17 = 1; i_17 < 7; i_17 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((max((min((-2086301360), (-2028491510))), (((/* implicit */int) ((4527194405549151638ULL) == (((/* implicit */unsigned long long int) 9223372036854775807LL))))))), (max((((/* implicit */int) var_2)), (var_4)))));
                            var_31 += ((/* implicit */short) ((((unsigned int) (+(var_3)))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [(_Bool)1] [i_13] [i_18] [i_17 + 2] [i_14])) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_48 [(short)9] [i_17 + 2] [i_17] [i_12] [i_18] [i_12])))))));
                        }
                        for (long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                        {
                            var_32 |= ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775792LL)) ? (min((var_9), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) var_8))))) | (((((/* implicit */_Bool) var_5)) ? (var_5) : (var_10))))))));
                            var_33 |= ((/* implicit */unsigned char) ((long long int) min((var_2), (((/* implicit */unsigned char) arr_46 [7U] [i_17 + 1] [i_17 + 3] [i_17 + 1])))));
                            var_34 = ((/* implicit */long long int) min((arr_4 [i_12]), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (signed char)0)), (var_1))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_3))))))));
                            var_35 |= ((/* implicit */int) ((min((arr_4 [i_12]), (((/* implicit */unsigned long long int) ((unsigned short) var_6))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((var_12) << (((var_9) - (4549766562344797298ULL))))))))));
                            var_36 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((unsigned char) var_4)))))));
                        }
                        for (short i_20 = 0; i_20 < 10; i_20 += 3) 
                        {
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_25 [i_17 + 1] [i_17] [i_17 + 2] [i_17 - 1] [i_20]))))) ? (max((arr_5 [i_17 + 1] [i_17] [i_17 + 2] [i_17 + 1]), (((/* implicit */unsigned long long int) var_3)))) : ((+(arr_5 [i_17 + 3] [i_17] [i_17 - 1] [i_17 - 1])))));
                            var_38 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_8))) || (((/* implicit */_Bool) (+(var_3))))))) >> ((((+(((/* implicit */int) (signed char)37)))) - (28)))));
                            var_39 |= ((/* implicit */short) min((((((/* implicit */int) arr_6 [i_12])) - (((/* implicit */int) arr_6 [i_13])))), (((/* implicit */int) ((short) arr_6 [i_13])))));
                            var_40 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 1256528087U)), (min(((+(arr_53 [i_12] [i_12] [i_13] [i_13] [i_13] [i_17] [i_13]))), (min((arr_53 [(signed char)6] [i_13] [(signed char)6] [i_12] [i_20] [i_17] [i_12]), (var_6)))))));
                            var_41 = min(((+(((/* implicit */int) (signed char)54)))), (((/* implicit */int) ((unsigned char) (+(var_12))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 3; i_21 < 8; i_21 += 2) 
                        {
                            var_42 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) var_7)), (arr_18 [i_17 - 1] [i_17 + 1]))), (max((arr_18 [i_17 - 1] [i_17 - 1]), (((/* implicit */long long int) var_8))))));
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)75))))) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (1693639057)));
                            var_44 = min(((-(var_10))), ((-(((/* implicit */int) arr_16 [i_17 + 3] [i_17 + 2])))));
                        }
                    }
                    for (int i_22 = 0; i_22 < 10; i_22 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_45 -= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [8LL] [i_13] [8LL]))) : (var_13)))) : (arr_53 [i_23] [i_23] [i_23] [i_23] [8U] [i_23] [i_23]))));
                            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_23] [i_23] [i_22] [6] [i_13] [i_12] [i_12])) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_45 [i_12] [i_13] [i_14] [i_22]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)13))))) : (((unsigned long long int) max((((/* implicit */int) var_7)), (var_5))))));
                            var_47 -= ((/* implicit */long long int) (((+((+(((/* implicit */int) (unsigned char)75)))))) % ((+(((/* implicit */int) ((((/* implicit */long long int) var_11)) < (var_0))))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_24 = 3; i_24 < 9; i_24 += 4) 
                        {
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_12] [i_13] [i_22] [i_22] [i_24]))) : (var_1)))) ? (arr_43 [i_13] [i_13] [i_22] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (var_1)))), ((unsigned char)188))))) : ((+(((long long int) arr_11 [i_12]))))));
                            var_49 = ((/* implicit */unsigned int) (+((+((+(4224027671743415698LL)))))));
                        }
                        /* vectorizable */
                        for (signed char i_25 = 3; i_25 < 9; i_25 += 3) 
                        {
                            var_50 = ((/* implicit */short) ((int) (+(var_10))));
                            var_51 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_4)) + (((var_12) + (var_1)))));
                            var_52 = ((/* implicit */unsigned char) ((signed char) var_0));
                            var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) * (((/* implicit */int) (short)-27993))))) : (((((/* implicit */_Bool) arr_7 [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3848130330U)))));
                            var_54 = ((/* implicit */unsigned long long int) max((var_54), (((/* implicit */unsigned long long int) var_4))));
                        }
                        var_55 = ((/* implicit */unsigned char) var_13);
                    }
                    for (unsigned long long int i_26 = 2; i_26 < 8; i_26 += 2) 
                    {
                        var_56 = ((/* implicit */unsigned long long int) var_4);
                        var_57 |= ((/* implicit */signed char) min(((+(min((var_3), (((/* implicit */unsigned int) var_4)))))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_6 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_26 - 2] [i_26] [i_13] [i_26] [i_12]))) : (var_3))) : (var_3)))));
                        var_58 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_60 [2] [i_13] [i_26] [2]), (((/* implicit */unsigned long long int) (+(var_8))))))) ? (((/* implicit */unsigned long long int) var_3)) : ((+(arr_54 [i_12] [i_26 - 1] [i_26 - 2] [i_26 - 2])))));
                        /* LoopSeq 3 */
                        for (unsigned char i_27 = 2; i_27 < 7; i_27 += 3) /* same iter space */
                        {
                            var_59 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(var_12)))) / ((+(((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) var_13))))))));
                            var_60 = min((((/* implicit */int) ((unsigned char) var_10))), ((+(((var_11) << (((arr_15 [i_27] [6LL] [i_14] [(unsigned char)4] [i_12]) - (37811756))))))));
                            var_61 ^= (+(((((/* implicit */_Bool) arr_41 [i_27 + 3])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(_Bool)1] [i_26 - 2] [i_14] [i_26] [i_27]))))));
                            var_62 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) (signed char)30)), (var_6)))));
                            var_63 = ((/* implicit */_Bool) ((((_Bool) (signed char)-30)) ? (max((((/* implicit */unsigned long long int) arr_2 [i_14])), (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) var_13)))))) : ((+(arr_53 [i_26 + 2] [i_13] [i_26 - 1] [i_26 + 2] [4] [i_26 - 1] [i_27 - 1])))));
                        }
                        for (unsigned char i_28 = 2; i_28 < 7; i_28 += 3) /* same iter space */
                        {
                            var_64 |= ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) arr_1 [i_12] [i_28 + 3]))))) ? (((/* implicit */unsigned long long int) (+(var_4)))) : ((+((+(arr_43 [0LL] [(_Bool)1] [5U] [i_26 + 2]))))));
                            var_65 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) | (var_9)))) || (((/* implicit */_Bool) min((1380715267U), (((/* implicit */unsigned int) (short)-2416)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_29 = 2; i_29 < 7; i_29 += 3) /* same iter space */
                        {
                            var_66 |= ((/* implicit */unsigned short) var_3);
                            var_67 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_1)))) ? ((+(var_4))) : (((/* implicit */int) (signed char)36))));
                        }
                        var_68 = ((/* implicit */signed char) max((var_68), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) (+(var_0))))), (min((((/* implicit */unsigned long long int) (short)-15846)), (((unsigned long long int) var_5)))))))));
                    }
                    var_69 = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_5)) ? (var_9) : (arr_63 [i_12] [i_13] [i_13] [i_13] [i_13] [i_13]))) / (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (var_4))))))));
                    var_70 += ((/* implicit */_Bool) (+(min((max((var_9), (((/* implicit */unsigned long long int) arr_35 [i_14] [(_Bool)1] [(_Bool)1])))), (((/* implicit */unsigned long long int) arr_9 [i_14] [i_13] [i_12]))))));
                }
            } 
        } 
    } 
    var_71 = ((/* implicit */_Bool) (+(var_12)));
    var_72 *= ((/* implicit */unsigned long long int) min((min((var_10), (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) (signed char)28)))))), (((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_8))))) || (((/* implicit */_Bool) var_4)))))));
}
