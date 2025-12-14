/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190688
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
    var_18 = ((/* implicit */short) var_13);
    var_19 = var_1;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) -2147483641)) ? (0ULL) : (((/* implicit */unsigned long long int) 0U)))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((_Bool) 0ULL));
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) var_5);
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0])) - (((/* implicit */int) (signed char)26))));
        }
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_7 [i_0])));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopSeq 4 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    arr_22 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) 1272040029U)) : (arr_7 [i_4])));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        arr_26 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (arr_21 [i_5] [i_4] [i_3] [i_2] [i_0])));
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-5702)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (var_4))))));
                        arr_27 [i_0] [i_0] [i_2] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_5 + 1] [i_5 + 2])) && (((/* implicit */_Bool) (signed char)0))));
                    }
                    for (short i_6 = 2; i_6 < 7; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((4695062926165278663ULL) / (((/* implicit */unsigned long long int) 4294967295U))))) ? (((arr_14 [i_4]) ? (arr_23 [i_6] [i_4] [i_2] [i_0]) : (((/* implicit */unsigned long long int) 1300964975)))) : (10ULL)));
                        var_24 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6 - 1] [i_2]))) + (var_3)))));
                        arr_32 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) 16716560U))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) > (23ULL))));
                        arr_35 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_8 [i_4] [i_7])))) == (((/* implicit */int) ((unsigned char) 4294967290U)))));
                        arr_36 [i_0] [i_2] [(short)10] [i_4] [10U] [(short)8] = ((/* implicit */unsigned short) ((arr_19 [i_2] [i_3] [i_0] [i_7]) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_3])))));
                        arr_37 [i_0] [i_2] [i_3] [i_4] [i_7] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_8 [i_3] [i_7])) : (((/* implicit */int) (short)-16))));
                    }
                }
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_2] [i_3] [(unsigned short)5]);
                    arr_41 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [3U] [i_2] [i_0])) & (1682354741)));
                }
                for (short i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                {
                    arr_45 [i_0] [i_9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)71)) ? (10ULL) : (((/* implicit */unsigned long long int) var_9)))))));
                    arr_46 [i_9] [6LL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)54318);
                    arr_47 [i_0] [i_2] [i_3] [i_9] [i_3] [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_38 [i_9] [i_2] [i_2])) - (((/* implicit */int) arr_38 [i_2] [i_3] [i_9]))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)64)) * (((((/* implicit */int) (unsigned char)180)) >> (((8257536) - (8257516))))))))));
                }
                for (short i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_5))));
                    arr_50 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((23ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_55 [i_0] = ((/* implicit */unsigned char) var_12);
                        var_29 = ((/* implicit */short) (((_Bool)1) ? (arr_54 [i_0] [i_2] [i_3] [i_10]) : (arr_51 [i_0] [i_2] [i_3] [i_3] [i_10] [i_11])));
                        var_30 = ((/* implicit */short) ((((/* implicit */int) arr_38 [i_0] [i_0] [10ULL])) ^ (((/* implicit */int) (unsigned char)144))));
                        arr_56 [i_0] [i_10] [i_3] [i_0] = ((/* implicit */short) (_Bool)1);
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_13 [i_0] [i_11]))) == (((/* implicit */int) (unsigned short)1))));
                    }
                    arr_57 [i_0] = ((/* implicit */unsigned char) ((arr_54 [i_0] [i_2] [i_3] [i_10]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                }
                var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) (short)-23032)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (arr_16 [2] [i_2] [i_0]))) : (-8257537)));
            }
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                arr_61 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (!((_Bool)1)));
                var_33 *= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) -5133333770110498684LL)) || (((/* implicit */_Bool) arr_23 [i_12] [i_12] [i_0] [i_0])))));
            }
        }
    }
    for (short i_13 = 0; i_13 < 12; i_13 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) arr_62 [i_13]);
            arr_69 [i_13] [i_13] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_67 [i_14 - 2] [i_14 - 2]))))));
        }
        /* LoopSeq 4 */
        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 8257531)) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)49)))))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((min(((unsigned short)47426), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (_Bool)0)))))))))));
            var_36 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */int) min((arr_66 [i_13] [i_15]), ((unsigned short)2378)))) : ((-(((/* implicit */int) var_1)))))) == ((~(((/* implicit */int) ((unsigned short) 8257513)))))));
            arr_74 [i_13] = ((/* implicit */int) ((_Bool) ((4294967295U) - (arr_73 [i_13]))));
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((max((min((((/* implicit */long long int) 4294967274U)), (var_2))), (((/* implicit */long long int) 4294967274U)))) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_68 [i_13] [i_15]))))), ((unsigned short)2352))))))))));
            arr_75 [i_13] [i_15] = ((/* implicit */unsigned char) var_0);
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_80 [i_13] [i_13] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65535)), (-776898022)))) ? (-6728893650028726159LL) : (((long long int) var_17)))), (((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */int) var_15)) < (((/* implicit */int) (unsigned short)65530))))), (min((var_15), ((short)-14576))))))));
            arr_81 [i_13] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_15)))));
            var_38 *= ((/* implicit */unsigned int) min((((unsigned long long int) 18446744073709551593ULL)), (((/* implicit */unsigned long long int) ((signed char) (unsigned short)2352)))));
            arr_82 [i_13] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_13] [i_13]))) | (min((arr_71 [i_13]), (((/* implicit */unsigned int) (unsigned short)0)))))))));
        }
        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL))) ? (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))) : (((((/* implicit */int) var_17)) * (((int) var_5)))))))));
            /* LoopSeq 2 */
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                arr_87 [i_13] [i_17] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)22001)) + (((/* implicit */int) (unsigned short)65528))))))) - (max((((/* implicit */long long int) arr_79 [i_13] [i_18 + 1])), (6251297523637625860LL)))));
                var_40 += ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) 2532778700U)), (min((((/* implicit */unsigned long long int) arr_66 [i_13] [i_13])), (var_16))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))))));
            }
            for (unsigned char i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_76 [i_17] [i_13] [i_20])))) <= (((((/* implicit */_Bool) arr_76 [i_13] [i_13] [i_19])) ? (((/* implicit */int) arr_76 [i_13] [i_13] [i_19])) : (((/* implicit */int) arr_76 [i_21 - 1] [i_13] [i_19]))))));
                        var_42 += ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65534), (((/* implicit */unsigned short) (_Bool)1)))))) < (arr_89 [i_17])))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_3)))));
                        var_43 |= ((/* implicit */short) min((((((/* implicit */int) (unsigned char)15)) % (((/* implicit */int) arr_77 [i_17] [i_21 - 1])))), (((/* implicit */int) ((6251297523637625860LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15776))))))));
                        var_44 = ((/* implicit */unsigned short) 0U);
                    }
                    for (unsigned char i_22 = 1; i_22 < 11; i_22 += 1) /* same iter space */
                    {
                        arr_99 [i_13] [i_19] [i_13] [i_13] [i_13] [i_17] [i_17] = ((/* implicit */unsigned char) ((((arr_91 [i_13] [i_13]) / (arr_92 [i_13] [i_13] [6] [i_13] [i_13] [i_13]))) < (((((/* implicit */unsigned long long int) var_0)) + (arr_92 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))));
                        var_45 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2352)) ? (((/* implicit */int) arr_83 [i_13] [i_19] [i_22 - 1])) : (((/* implicit */int) arr_83 [i_13] [i_17] [i_17]))))) ? (((/* implicit */int) ((short) (short)-6124))) : (((((/* implicit */int) var_12)) - (((/* implicit */int) arr_83 [i_13] [2LL] [i_19])))));
                        arr_100 [i_22 - 1] [i_20] [i_17] [i_17] [8ULL] [i_13] |= (-(((/* implicit */int) var_17)));
                    }
                    for (unsigned char i_23 = 1; i_23 < 11; i_23 += 1) /* same iter space */
                    {
                        var_46 += ((/* implicit */unsigned char) (!(min((((((/* implicit */int) var_11)) == (((/* implicit */int) arr_63 [i_20] [i_17])))), ((!(((/* implicit */_Bool) var_4))))))));
                        arr_104 [(unsigned char)7] [i_17] [i_19] [i_13] [(unsigned char)0] = ((/* implicit */short) ((max((2078275401209122488ULL), (((/* implicit */unsigned long long int) arr_63 [i_20 - 1] [i_13])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_20 - 1] [i_13])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_20 - 1] [i_13]))))))));
                        arr_105 [i_13] [i_17] [i_17] [i_17] [i_19] [i_13] [i_23] = ((/* implicit */unsigned int) var_6);
                        var_47 = ((/* implicit */signed char) (~((+(((/* implicit */int) var_15))))));
                        arr_106 [i_13] [i_17] [i_19] [i_17] [i_17] = ((/* implicit */unsigned short) ((arr_84 [i_13]) ? (((((((/* implicit */int) arr_77 [i_13] [i_17])) * (((/* implicit */int) var_5)))) / (var_8))) : (((/* implicit */int) max((arr_62 [i_13]), (arr_62 [i_13]))))));
                    }
                    arr_107 [i_13] [i_17] [i_19] [i_17] [i_13] [i_13] |= ((/* implicit */long long int) (_Bool)0);
                    arr_108 [i_13] [i_13] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? ((-(((/* implicit */int) arr_101 [i_20 - 1] [i_17] [i_20 - 1] [i_20] [(_Bool)1])))) : ((-(((/* implicit */int) arr_83 [i_13] [i_20 - 1] [i_20]))))));
                    arr_109 [i_20] [i_13] [i_17] [i_13] [i_13] = ((/* implicit */int) min(((((_Bool)1) ? ((+(18446744073709551612ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)20605)) << (((((/* implicit */int) (signed char)98)) - (87)))))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (short)11972)) < (((/* implicit */int) arr_66 [i_20] [4]))))))));
                    arr_110 [i_13] [i_13] [i_13] [i_13] [i_13] [(unsigned short)10] = ((/* implicit */short) (unsigned char)0);
                }
                var_48 = ((/* implicit */short) (signed char)-98);
            }
            var_49 = ((/* implicit */unsigned short) min(((-((-(((/* implicit */int) var_12)))))), (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)0)))) != (((/* implicit */int) (unsigned char)255)))))));
        }
        for (int i_24 = 0; i_24 < 12; i_24 += 1) 
        {
            arr_113 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 3340068021U)) && (((/* implicit */_Bool) var_16))))) == (((/* implicit */int) min((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)154)))), (arr_111 [i_13]))))));
            arr_114 [i_13] [i_13] = ((/* implicit */unsigned int) ((((var_4) == (((/* implicit */unsigned int) (-(arr_95 [3U] [i_13])))))) && (((/* implicit */_Bool) (unsigned short)41068))));
        }
    }
}
