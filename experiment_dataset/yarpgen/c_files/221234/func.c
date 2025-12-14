/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221234
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
    var_15 &= (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) var_8);
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */int) (unsigned char)255))))) && (((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]))))))) | (var_0)));
                        arr_13 [i_2] [i_3] = ((/* implicit */short) var_12);
                        arr_14 [i_2] [i_1] = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) ((signed char) (unsigned char)238)))))) % (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)241)) : (2147483647))));
                    }
                    for (short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        arr_18 [i_1] [i_4] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned char)241)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39492)) ? (136365211648LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18427)))))) > (var_11)))) : (arr_16 [i_4] [i_4] [i_4]))))));
                            arr_21 [i_0] [i_1] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-127)), (var_7)))) - (((/* implicit */int) (short)-1))));
                            var_18 = ((/* implicit */int) arr_9 [i_0] [i_2] [i_4] [i_5]);
                        }
                    }
                    for (short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (arr_17 [i_0] [i_1] [i_2] [i_2] [i_6])))) / ((+(((/* implicit */int) var_14))))));
                        var_20 = ((((arr_11 [i_0] [i_1] [i_1] [i_0] [i_6]) ? (((long long int) (unsigned short)39498)) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) | (2687312808U)))))) % (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_23 [i_0] [i_1] [i_1] [i_1] [i_2] [i_6])))) + (max((var_3), (((/* implicit */long long int) (unsigned short)26042)))))));
                    }
                    arr_24 [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (unsigned short)65535))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
        /* LoopSeq 3 */
        for (short i_8 = 4; i_8 < 10; i_8 += 1) /* same iter space */
        {
            arr_29 [i_8 + 1] [i_8 - 1] [i_7] = ((/* implicit */long long int) ((signed char) (short)-16086));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    {
                        arr_36 [i_7] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */int) 5595804109320973156LL);
                        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), ((unsigned short)1)));
                        arr_37 [i_10] [i_9] [i_9] [i_8] [i_8] [i_7] = ((/* implicit */unsigned int) ((long long int) (+(var_10))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) (short)-3898)) * (((/* implicit */int) arr_28 [i_7] [i_8] [i_8 - 4]))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (short i_11 = 1; i_11 < 10; i_11 += 1) 
            {
                var_25 = ((((/* implicit */int) (unsigned char)233)) + ((~(((/* implicit */int) (unsigned char)241)))));
                var_26 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)36)) && (((/* implicit */_Bool) 2870288527188491598LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_27 [i_11] [i_11 - 1]))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)39492)) : (arr_22 [i_7] [i_7] [i_7] [i_7] [i_12] [i_12])))) ? (arr_22 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 3] [i_8 + 1] [i_8]) : (var_4)));
                var_28 = ((/* implicit */short) (+(((((/* implicit */int) (short)-8519)) ^ (((/* implicit */int) (unsigned short)38881))))));
                arr_45 [i_12] [i_12] = (unsigned char)1;
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) (+(0LL)));
                            arr_50 [i_12] [i_8] [i_8] [i_12] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5745546057573118067LL)) ? (2053282339) : (((/* implicit */int) arr_2 [i_13]))))) ? (((((/* implicit */int) (short)23399)) * (((/* implicit */int) (unsigned char)31)))) : (((/* implicit */int) ((signed char) (signed char)70)))));
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) arr_15 [i_15 + 1] [i_8 - 3]))));
                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (short)8512))));
                arr_53 [i_7] [i_7] [i_8] [i_15] = ((((/* implicit */int) arr_8 [i_8 + 1] [i_8 - 1] [i_15 + 1])) - (((/* implicit */int) arr_8 [i_8] [i_8 - 2] [i_15 + 1])));
            }
            for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                arr_56 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)224)) != (((/* implicit */int) (signed char)38))));
                var_32 = ((/* implicit */unsigned short) arr_27 [i_7] [i_7]);
                var_33 = ((/* implicit */int) ((short) ((var_12) != (((/* implicit */unsigned long long int) arr_30 [i_16] [i_8 - 2] [i_7])))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [(unsigned short)10] [i_7] [i_7] [i_8] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (unsigned short)26056)) : (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (var_12)))));
                arr_57 [i_16] = ((3486726376U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))));
            }
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) 18446744073709551604ULL))));
        }
        for (short i_17 = 4; i_17 < 10; i_17 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_18] [i_7])) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
                var_37 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1232337351)) % (arr_41 [i_17 - 4] [i_17 - 2])));
                var_38 = ((/* implicit */unsigned long long int) arr_17 [i_7] [i_7] [i_7] [i_17] [i_18]);
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned char)1))) ? ((~(((/* implicit */int) arr_32 [i_18] [i_17] [i_7])))) : (((/* implicit */int) (unsigned short)49780)))))));
            }
            for (unsigned char i_19 = 2; i_19 < 8; i_19 += 4) 
            {
                arr_66 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (short)-32762)) : (-823484852)));
                var_40 = ((/* implicit */int) ((unsigned long long int) arr_22 [i_19] [i_19] [i_19] [i_19 + 1] [i_17 + 1] [i_7]));
                var_41 = ((/* implicit */unsigned short) ((var_14) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_19] [i_19] [i_19] [i_17] [i_7])) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (unsigned short)24250)))))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 9; i_21 += 1) 
                {
                    for (int i_22 = 3; i_22 < 7; i_22 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */short) arr_68 [i_17] [i_17] [i_20] [i_17]);
                            var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) (!(var_14))))));
                        }
                    } 
                } 
                var_44 |= ((/* implicit */short) ((_Bool) ((_Bool) (unsigned char)224)));
                var_45 = ((/* implicit */unsigned long long int) arr_22 [i_7] [i_7] [i_17 - 2] [i_17] [i_17] [i_17 - 2]);
                arr_76 [i_7] [i_17] [i_20] = ((/* implicit */signed char) (-(3232197684870927367ULL)));
            }
            var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((var_0) == (var_1))))));
            var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15918)) ? (((/* implicit */unsigned int) var_4)) : (((arr_3 [i_7] [i_7] [i_17]) >> (((((/* implicit */int) (unsigned short)26045)) - (26041)))))));
            var_48 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (338223796U)))) || (((/* implicit */_Bool) (unsigned char)140))));
        }
        for (short i_23 = 4; i_23 < 10; i_23 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_24 = 1; i_24 < 10; i_24 += 4) 
            {
                var_49 = ((/* implicit */short) var_3);
                var_50 &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) : (var_9)));
                var_51 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)251)) ? (2972578129828669022ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224)))));
            }
            for (long long int i_25 = 0; i_25 < 11; i_25 += 3) 
            {
                arr_85 [i_7] [i_23 - 2] [i_25] [i_25] = ((/* implicit */signed char) ((unsigned long long int) (_Bool)0));
                arr_86 [i_25] = ((/* implicit */unsigned char) ((arr_68 [i_23 - 2] [i_23 - 3] [i_25] [i_23 - 3]) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_74 [i_7] [i_7] [i_23] [i_25] [i_23])))))));
                /* LoopSeq 1 */
                for (unsigned short i_26 = 3; i_26 < 8; i_26 += 4) 
                {
                    arr_90 [i_7] [i_23] [i_25] [i_25] = ((/* implicit */int) (unsigned char)74);
                    var_52 += ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)149))))));
                    arr_91 [i_7] [i_23] [i_25] = ((/* implicit */unsigned short) (_Bool)0);
                }
            }
            /* LoopNest 2 */
            for (long long int i_27 = 0; i_27 < 11; i_27 += 1) 
            {
                for (signed char i_28 = 0; i_28 < 11; i_28 += 1) 
                {
                    {
                        arr_97 [i_28] [i_23] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_23 + 1] [i_23] [i_23])) ? (-4631356035280372234LL) : (arr_5 [i_23 - 3] [i_23] [i_23])));
                        /* LoopSeq 1 */
                        for (int i_29 = 0; i_29 < 11; i_29 += 3) 
                        {
                            var_53 = ((/* implicit */long long int) ((((/* implicit */int) arr_74 [i_7] [i_23] [i_27] [i_27] [i_29])) ^ (((/* implicit */int) arr_74 [i_28] [i_23] [i_27] [i_28] [i_29]))));
                            var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_69 [i_23 - 1] [i_29] [i_27] [i_28])) && (((/* implicit */_Bool) arr_69 [i_23 - 2] [i_23] [i_27] [i_28]))));
                            var_55 = ((/* implicit */signed char) 4128859349U);
                            var_56 |= ((/* implicit */unsigned char) (+(arr_22 [i_23] [i_23 - 1] [i_23] [i_23] [i_23] [i_23])));
                        }
                    }
                } 
            } 
            arr_100 [i_7] [i_23] = ((/* implicit */int) (unsigned short)16705);
            var_57 = ((/* implicit */long long int) arr_9 [i_7] [i_7] [i_7] [i_7]);
            var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (unsigned short)26966)) : (((/* implicit */int) (unsigned short)4078))));
        }
        arr_101 [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((var_10) - (arr_22 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59289))) ^ (2522042104U)))));
        arr_102 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39496)) ? (((/* implicit */int) arr_69 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_69 [i_7] [i_7] [i_7] [i_7]))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
    {
        arr_107 [i_30] = ((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned char) ((arr_55 [i_30] [i_30] [i_30] [i_30]) == (((/* implicit */int) (unsigned char)211))))), (max((arr_65 [i_30] [i_30] [i_30]), (((/* implicit */unsigned char) (signed char)57))))))), (((((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (_Bool)1))))) + (((((/* implicit */_Bool) 338223814U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)247))))))));
        /* LoopSeq 1 */
        for (int i_31 = 4; i_31 < 10; i_31 += 3) 
        {
            var_59 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)247)) << (((((/* implicit */int) (unsigned short)58407)) - (58398))))));
            arr_110 [i_31] = ((/* implicit */long long int) arr_47 [i_30] [i_30] [i_30] [i_30]);
        }
        var_60 = ((/* implicit */unsigned short) max((var_60), (((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_71 [i_30] [i_30] [i_30] [i_30])))) >> (((/* implicit */int) arr_71 [i_30] [i_30] [i_30] [i_30])))))));
    }
}
