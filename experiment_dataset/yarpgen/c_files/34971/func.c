/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34971
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
    var_20 = ((/* implicit */unsigned long long int) ((((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_13)))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21)))));
    var_21 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((var_8), (((/* implicit */unsigned int) (short)23306)))), (((/* implicit */unsigned int) max(((unsigned short)20), (((/* implicit */unsigned short) var_9)))))))) ? (arr_1 [i_0]) : (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (short)26315))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (short)26324))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) var_6);
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
            {
                arr_11 [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2 + 2] [i_3])) ? (((/* implicit */int) (unsigned short)8301)) : (((/* implicit */int) var_6))))));
                var_25 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_3]);
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                {
                    var_26 = -1763173159;
                    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)349)) | (((/* implicit */int) (unsigned short)57250)))))));
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                {
                    var_28 = ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_5])) ? (((((/* implicit */int) var_15)) >> (((((/* implicit */int) (unsigned short)65514)) - (65498))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_14 [i_1] [i_2 + 1] [i_1] [i_5])) : (((/* implicit */int) (short)349)))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_1 [(unsigned short)12]))));
                }
            }
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1753270273)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_2] [0LL]))) : (var_0)))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((unsigned long long int) var_11)) : (var_14)));
            }
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
            {
                arr_23 [1LL] [i_2 + 2] [7U] = ((/* implicit */_Bool) (+(arr_4 [i_2 - 2])));
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2 + 2] [i_2 + 2] [i_2 - 2])) ? (((/* implicit */int) (short)-3965)) : (((/* implicit */int) arr_9 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 2]))));
                arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-28459)) ? (((/* implicit */int) arr_20 [i_2 + 2] [i_2 + 1] [i_2 - 2])) : (((/* implicit */int) var_11))));
                /* LoopSeq 4 */
                for (short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 2; i_9 < 14; i_9 += 2) 
                    {
                        arr_30 [i_1] [i_2] [i_7] [i_7] [i_9 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) arr_3 [i_2 + 2]))));
                        var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 5495392013364636855LL)) || (((/* implicit */_Bool) (unsigned short)65535)))))));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 4) 
                    {
                        arr_35 [i_1] [i_1] [8U] [(unsigned char)0] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                        arr_36 [i_2] [i_7] [12] = (+(4611686018427387903LL));
                    }
                    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((short) arr_20 [i_2 + 2] [i_2 - 2] [i_7])))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 3; i_11 < 15; i_11 += 4) 
                    {
                        var_35 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (unsigned short)32631)))));
                        var_36 = ((/* implicit */short) ((((/* implicit */int) (short)-7812)) >= (((/* implicit */int) var_3))));
                    }
                    arr_40 [i_1] [i_2] [i_7] [i_8] [i_8] [i_7] = ((/* implicit */signed char) 234578077U);
                    var_37 = ((/* implicit */unsigned short) ((var_9) ? ((+(((/* implicit */int) (unsigned short)3144)))) : (((((/* implicit */int) (signed char)31)) * (((/* implicit */int) arr_10 [i_8] [7LL] [i_2 - 1] [7LL]))))));
                }
                for (short i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 1; i_13 < 15; i_13 += 2) 
                    {
                        var_38 ^= ((/* implicit */unsigned short) (short)26313);
                        arr_45 [i_1] [2ULL] [2ULL] [i_12] = ((/* implicit */unsigned char) ((int) arr_25 [i_2 + 2] [i_2 + 2] [i_13 + 1]));
                    }
                    arr_46 [i_1] [5U] [i_7] [i_12] = ((((/* implicit */_Bool) arr_0 [i_2 - 2] [i_2 - 2])) || (((/* implicit */_Bool) var_3)));
                    var_39 = ((/* implicit */_Bool) arr_3 [i_1]);
                }
                for (short i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_53 [i_14] [i_14] = ((/* implicit */unsigned int) var_13);
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1])) | ((+(((/* implicit */int) (short)-17053))))));
                        arr_54 [i_15] [i_14] [i_14] [3ULL] [3ULL] [i_14] [3ULL] = ((/* implicit */long long int) 3465241837U);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) -951451416102820977LL))));
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_52 [14ULL]))))) ? (((int) var_9)) : (((/* implicit */int) arr_19 [i_7] [i_14] [i_16])))))));
                        var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                        var_44 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_3 [i_1]))))));
                    }
                    var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                    /* LoopSeq 4 */
                    for (int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        arr_60 [i_1] [i_2] [15] [15] [i_14] [i_14] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_57 [i_1] [i_2] [i_14] [i_14] [i_17]))))));
                        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned short)4] [(unsigned short)4] [i_7] [i_14]))) : (5275117683809405375LL)));
                        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)349))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 - 2] [i_14]))) : ((+(15339049739376770810ULL)))));
                        arr_61 [i_1] [i_2 - 2] [i_14] [i_14] [i_14] = ((/* implicit */long long int) var_8);
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) /* same iter space */
                    {
                        var_48 = ((/* implicit */long long int) (~(-2147483642)));
                        var_49 = ((/* implicit */short) (-(var_0)));
                        var_50 = ((/* implicit */unsigned long long int) var_11);
                        var_51 = -3870175729525691528LL;
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 2) /* same iter space */
                    {
                        var_52 = ((/* implicit */_Bool) ((long long int) var_6));
                        arr_68 [(short)9] [i_14] [i_14] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (3465241835U)));
                    }
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        var_53 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_7] [i_20]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18948))) : (((((/* implicit */_Bool) var_1)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))))));
                        var_54 ^= ((/* implicit */_Bool) (~(var_19)));
                        var_55 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2 + 2])) != (((/* implicit */int) ((unsigned char) var_0)))));
                    }
                    var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(480324927)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_6 [i_2 + 1] [i_2 + 2] [i_2 + 1]))))));
                    var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 3465241835U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 2] [i_2 + 2]))) : (8693292130013360191LL))))))));
                }
                for (short i_21 = 0; i_21 < 16; i_21 += 3) /* same iter space */
                {
                    arr_74 [i_21] [i_1] [(unsigned short)0] [i_2] [i_2] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_3)) ? (-1081718535683187018LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33765)))));
                    var_58 = var_5;
                }
            }
            var_59 *= ((/* implicit */unsigned int) ((unsigned long long int) arr_67 [i_2] [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]));
        }
        for (unsigned short i_22 = 0; i_22 < 16; i_22 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_23 = 0; i_23 < 16; i_23 += 3) /* same iter space */
            {
                var_60 = ((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_1] [(unsigned char)10] [i_22] [i_22] [4ULL] [i_23] [i_23])) ? (3343562607U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                var_61 -= ((/* implicit */signed char) ((arr_21 [i_1] [i_22] [i_23]) == (((/* implicit */int) arr_28 [i_1] [(_Bool)1] [5] [5] [i_22] [5]))));
            }
            for (int i_24 = 0; i_24 < 16; i_24 += 3) /* same iter space */
            {
                var_62 = ((/* implicit */_Bool) var_3);
                /* LoopSeq 2 */
                for (unsigned short i_25 = 1; i_25 < 12; i_25 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_26 = 0; i_26 < 16; i_26 += 2) 
                    {
                        var_63 = ((/* implicit */short) var_17);
                        arr_90 [0U] [(short)3] [(signed char)2] [i_24] = ((/* implicit */unsigned int) var_14);
                    }
                    var_64 = ((/* implicit */short) min((var_64), (((/* implicit */short) (-(3465241835U))))));
                    var_65 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64869)) ? (1081718535683187034LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                }
                for (unsigned short i_27 = 1; i_27 < 12; i_27 += 3) /* same iter space */
                {
                    var_66 = ((/* implicit */_Bool) max((var_66), (((/* implicit */_Bool) var_6))));
                    var_67 ^= ((/* implicit */_Bool) ((((((/* implicit */int) var_11)) > (((/* implicit */int) (unsigned short)61981)))) ? (((((/* implicit */_Bool) var_8)) ? (var_16) : (1081718535683187034LL))) : ((-(4611686018427387903LL)))));
                    /* LoopSeq 2 */
                    for (short i_28 = 0; i_28 < 16; i_28 += 4) /* same iter space */
                    {
                        var_68 = var_17;
                        var_69 = ((/* implicit */long long int) (+(arr_42 [i_28] [i_27 + 1] [i_27 + 1] [i_27 + 2] [i_27 - 1])));
                    }
                    for (short i_29 = 0; i_29 < 16; i_29 += 4) /* same iter space */
                    {
                        arr_100 [i_29] [i_24] [i_24] [i_24] [i_1] = (((_Bool)1) ? ((~(((/* implicit */int) (unsigned short)65523)))) : (((/* implicit */int) var_18)));
                        var_70 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_11))))));
                    }
                    var_71 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(0LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (306906517U)));
                    var_72 = ((/* implicit */_Bool) ((((/* implicit */int) arr_73 [i_24] [i_24] [i_22] [i_24])) | (((/* implicit */int) arr_73 [i_24] [i_24] [i_22] [i_24]))));
                }
                var_73 = ((/* implicit */unsigned char) arr_88 [i_1] [i_1] [i_22] [8ULL] [i_24]);
            }
            var_74 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
            var_75 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(38345297U)))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_34 [i_1] [i_1] [14U] [i_22]))));
        }
        arr_101 [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) (unsigned short)32631))))) == (((/* implicit */int) (unsigned short)57235))));
    }
    for (unsigned char i_30 = 0; i_30 < 16; i_30 += 3) /* same iter space */
    {
        arr_106 [i_30] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
        arr_107 [(signed char)14] [i_30] = ((/* implicit */unsigned short) max((max((arr_48 [i_30] [3LL] [(unsigned char)6] [3LL] [i_30] [i_30]), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) arr_16 [i_30] [(unsigned short)6] [i_30]))));
    }
}
