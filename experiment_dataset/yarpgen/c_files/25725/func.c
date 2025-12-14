/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25725
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] [(unsigned char)9] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_8) : (((/* implicit */int) (_Bool)1))))), (((long long int) arr_1 [i_0 - 1]))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        var_11 = arr_3 [i_0 - 1] [i_0] [i_1];
                        arr_10 [(_Bool)1] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) var_9);
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 2] [i_1] [i_1]))) : (var_9)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (min((((/* implicit */unsigned int) var_4)), (398232176U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        arr_11 [i_1] [i_2] [(unsigned char)4] [i_0] [i_1] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)7)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 4; i_4 < 8; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-38))));
                        var_14 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_2])) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_15 [i_1] [i_4 - 4] [i_2] [(unsigned char)5] [i_1] = ((/* implicit */signed char) (-(arr_1 [i_0 - 2])));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_5] [i_2] [i_0])))))));
                        arr_19 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        arr_22 [i_1] [i_1] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1))))));
                        arr_23 [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */short) var_1)), (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])))) ? (((/* implicit */int) max((arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2]), (arr_7 [8ULL] [i_1] [i_1] [i_1] [i_1] [i_1 + 3])))) : (((/* implicit */int) (unsigned char)192)));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) arr_14 [i_1] [i_1] [i_2] [i_6]))) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)135)) ? (var_9) : (arr_9 [i_0] [i_0] [i_6]))), (((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (var_0)))))))));
                    }
                    var_18 ^= ((/* implicit */unsigned short) (~(((unsigned int) (unsigned short)249))));
                    var_19 ^= ((/* implicit */int) arr_14 [i_2] [i_2] [i_1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))))), (arr_24 [i_7] [i_7]))))));
        var_20 = ((/* implicit */unsigned int) arr_25 [(unsigned short)1] [i_7]);
        var_21 = ((/* implicit */int) (!((!(((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_7))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) (((_Bool)1) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    {
                        var_23 = ((/* implicit */short) ((unsigned short) 1747457682U));
                        /* LoopSeq 1 */
                        for (int i_11 = 1; i_11 < 8; i_11 += 1) 
                        {
                            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(4294967289U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_7] [i_8] [i_9 - 1] [i_8] [i_11])))))) : (((unsigned long long int) (short)22275))));
                            var_25 &= ((/* implicit */long long int) ((arr_29 [i_7] [i_9 + 1] [i_11 + 2]) || (arr_29 [i_8] [i_9 + 1] [i_11 + 2])));
                            arr_38 [i_10] [i_8] [i_8] [i_10] [i_9] = ((/* implicit */long long int) var_10);
                            var_26 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        }
                        arr_39 [i_7] [i_7] [i_9] [i_10] = (!(arr_29 [i_7] [i_7] [i_7]));
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */int) var_3);
            var_28 = (+((-(((((/* implicit */_Bool) 4294967290U)) ? (arr_34 [i_7] [i_12] [i_12] [i_12] [(unsigned char)0]) : (arr_42 [i_7] [i_12] [i_7]))))));
        }
        for (long long int i_13 = 2; i_13 < 10; i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                for (unsigned short i_15 = 1; i_15 < 11; i_15 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [(unsigned short)7] [(short)2] [i_7]))))))) : ((+((-(((/* implicit */int) (signed char)-67)))))))))));
                        var_30 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_15 - 1]))) : (var_10))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_15 - 1] [i_7])))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (-(((15192931661497897772ULL) / (((/* implicit */unsigned long long int) arr_44 [i_7] [i_13] [i_16])))))))));
                var_32 = ((/* implicit */int) arr_35 [i_7] [i_13] [11LL] [i_13 - 1] [11LL] [i_13]);
                var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_4))));
                var_34 = ((/* implicit */long long int) ((var_3) >> (((var_5) - (1838257381U)))));
                var_35 = ((/* implicit */signed char) (+(((/* implicit */int) arr_29 [(unsigned short)2] [6ULL] [(unsigned short)2]))));
            }
            for (short i_17 = 3; i_17 < 11; i_17 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 1) 
                {
                    var_36 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_13 + 2] [i_13 - 2])) ? (arr_48 [i_13] [i_13] [i_13 - 1] [i_13 - 1]) : (arr_48 [i_13 + 2] [(unsigned short)7] [i_13 + 2] [i_13 + 2])));
                    var_37 = ((/* implicit */signed char) (-(((/* implicit */int) ((8232060127821672738ULL) == (((/* implicit */unsigned long long int) var_0)))))));
                    var_38 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_10)))));
                    var_39 = ((/* implicit */signed char) (-(var_6)));
                }
                for (int i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    arr_62 [i_19] [i_13] [i_13] [i_7] = ((/* implicit */short) 0ULL);
                    arr_63 [(unsigned short)3] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_49 [i_13])))) ? ((-(arr_49 [i_13]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65529)))))));
                    var_40 += (short)-18247;
                    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_7] [i_13] [(signed char)0] [i_19]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (arr_31 [i_7] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                }
                arr_64 [i_7] [i_13] [i_13] = ((/* implicit */unsigned int) (~(max(((~(2ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                /* LoopSeq 1 */
                for (short i_20 = 0; i_20 < 12; i_20 += 4) 
                {
                    var_42 -= ((/* implicit */unsigned long long int) ((((arr_33 [i_7] [i_13] [i_13] [i_20] [i_13] [i_20]) >= (((/* implicit */unsigned long long int) var_5)))) ? (((/* implicit */unsigned int) ((var_8) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)3))))))) : ((-(max((((/* implicit */unsigned int) var_8)), (var_7)))))));
                    var_43 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) arr_40 [i_7] [i_7])) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_2)))))));
                    var_44 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-66))));
                }
                var_45 = ((/* implicit */int) (_Bool)1);
            }
            var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) max((((((/* implicit */_Bool) (signed char)113)) || ((!(((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_7] [i_7])))))), ((!(((/* implicit */_Bool) min((arr_44 [i_7] [7LL] [7LL]), (((/* implicit */unsigned int) arr_25 [i_7] [i_7]))))))))))));
        }
        for (long long int i_21 = 2; i_21 < 10; i_21 += 1) /* same iter space */
        {
            arr_70 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_40 [i_7] [i_7]);
            arr_71 [i_7] = ((/* implicit */unsigned int) var_8);
        }
    }
    for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 1) /* same iter space */
    {
        arr_74 [i_22] = ((/* implicit */unsigned short) (_Bool)1);
        var_47 = ((/* implicit */int) var_5);
        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_10), (((/* implicit */unsigned long long int) (short)-17476)))), (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_10)))))) ? (max((((/* implicit */long long int) (short)18253)), (arr_35 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_33 [i_22] [i_22] [i_22] [(unsigned short)11] [(unsigned short)11] [i_22])))) ? (((/* implicit */int) min(((short)18262), (((/* implicit */short) (signed char)108))))) : (((/* implicit */int) (signed char)37)))))));
        /* LoopSeq 3 */
        for (long long int i_23 = 0; i_23 < 12; i_23 += 4) /* same iter space */
        {
            var_49 ^= ((/* implicit */int) (+(7847282859645742659ULL)));
            /* LoopSeq 1 */
            for (signed char i_24 = 0; i_24 < 12; i_24 += 4) 
            {
                var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_69 [i_24] [5]), (arr_69 [i_22] [i_22])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)18254)) && (((/* implicit */_Bool) arr_69 [i_22] [i_24]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_69 [i_23] [i_24])) && (((/* implicit */_Bool) var_7)))))));
                var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_54 [i_22] [i_23] [i_24])) && ((_Bool)1))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) arr_54 [i_22] [i_22] [i_22])) ? (arr_54 [i_22] [i_22] [i_22]) : (arr_54 [i_22] [i_23] [i_24]))))))));
            }
        }
        for (long long int i_25 = 0; i_25 < 12; i_25 += 4) /* same iter space */
        {
            var_52 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_82 [1U] [1U])) ? (3938146988U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)45)))))));
            /* LoopSeq 1 */
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
            {
                arr_86 [i_22] [i_25] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_22] [i_25] [i_26 - 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_26 - 1])))));
                var_53 += ((/* implicit */unsigned long long int) arr_41 [i_22]);
                var_54 = max((36028797014769664ULL), (((/* implicit */unsigned long long int) max((3999251667U), (((/* implicit */unsigned int) arr_73 [i_26]))))));
                var_55 = ((/* implicit */short) (+(((((((/* implicit */_Bool) arr_73 [i_25])) && (((/* implicit */_Bool) 36028797014769654ULL)))) ? (((/* implicit */unsigned long long int) arr_36 [i_25])) : (var_6)))));
            }
            var_56 = ((/* implicit */unsigned short) min((var_56), (((/* implicit */unsigned short) var_9))));
            var_57 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_83 [i_22] [i_22] [10] [i_22]))))));
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            arr_90 [0U] [10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_79 [i_22] [i_22]))) ? (max((((/* implicit */unsigned long long int) var_7)), (arr_42 [i_22] [i_22] [i_22]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_22] [i_22]))) >= (arr_31 [i_22] [i_27])))))));
            arr_91 [(unsigned char)5] [(unsigned char)9] |= ((/* implicit */unsigned long long int) arr_76 [i_22] [i_22] [i_27]);
            /* LoopNest 2 */
            for (signed char i_28 = 0; i_28 < 12; i_28 += 4) 
            {
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    {
                        arr_96 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_9)))) ? (max((var_5), (((/* implicit */unsigned int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)188)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) / (((arr_80 [i_22] [i_22] [i_22] [(_Bool)1]) ? (((((/* implicit */_Bool) arr_32 [i_22])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_27] [i_28]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))));
                        var_58 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_57 [i_29 - 1] [i_29] [i_29] [i_28])) || (((/* implicit */_Bool) var_5)))) ? (4288486381U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_22] [i_27] [i_27] [i_27] [i_27] [i_29 - 1])) ? (((/* implicit */int) arr_80 [i_29] [i_29 - 1] [i_29] [i_29 - 1])) : (((/* implicit */int) (signed char)-36)))))));
                    }
                } 
            } 
            var_59 &= ((/* implicit */int) (!(((/* implicit */_Bool) (short)18534))));
        }
        arr_97 [7ULL] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)17)))));
    }
    for (unsigned char i_30 = 1; i_30 < 12; i_30 += 1) 
    {
        var_60 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((6232376040007810562LL) & (((/* implicit */long long int) 295715615U)))), (((long long int) arr_99 [i_30])))))));
        var_61 = ((/* implicit */unsigned int) var_1);
        var_62 ^= ((/* implicit */unsigned char) var_5);
        arr_102 [i_30] = ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_99 [i_30 - 1])) ? (((/* implicit */int) arr_99 [i_30 + 1])) : (var_8))))));
    }
}
