/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19047
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [3U] [i_0] [i_0] = ((/* implicit */unsigned int) -1885046442);
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((((unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_0 [i_4])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-1))))))))));
                                var_16 = ((unsigned char) min((arr_0 [i_0]), (arr_0 [i_0])));
                                arr_14 [3U] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) 11149348020036471420ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))), (max((((/* implicit */long long int) var_11)), (5220549873307843178LL))))), (((/* implicit */long long int) var_10))));
                            }
                        } 
                    } 
                } 
                var_17 -= ((/* implicit */signed char) arr_4 [14LL] [i_1] [i_0]);
            }
        } 
    } 
    var_18 = var_0;
    /* LoopSeq 2 */
    for (int i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        arr_18 [i_5 + 1] [i_5] = ((/* implicit */long long int) arr_16 [i_5]);
        var_19 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (arr_7 [i_5] [i_5] [i_5]))) ? (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_5 [(_Bool)1] [i_5 - 1] [i_5 + 1] [(_Bool)1]))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(signed char)16] [i_5 + 1] [(signed char)16])) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_5])) && (((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5] [14U] [i_5] [i_5] [(_Bool)1])))) || (((/* implicit */_Bool) var_8))))) : (((((/* implicit */int) arr_10 [3U] [3U] [i_5 - 1] [3U] [i_5 - 1] [i_5])) * (((((/* implicit */int) var_13)) % (((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 4 */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((unsigned char) 1384468781U))), (((((/* implicit */_Bool) var_2)) ? (4294967282U) : (2221202537U))))) * (min((arr_7 [i_5 + 1] [i_5 - 1] [i_5 + 1]), (arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_7 = 3; i_7 < 9; i_7 += 4) /* same iter space */
            {
                var_22 &= ((/* implicit */unsigned int) (((_Bool)1) ? (arr_0 [i_6]) : (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */long long int) 1839840400U)) : (arr_12 [4U] [4U] [i_6] [i_7] [i_7])))));
                arr_26 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) arr_3 [i_5 - 1]);
                var_23 &= (_Bool)1;
            }
            for (unsigned char i_8 = 3; i_8 < 9; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((((arr_24 [i_8 - 2] [i_8 - 2] [i_8 - 2]) / (var_12))), (((((/* implicit */_Bool) arr_8 [i_9] [i_8] [i_6] [(unsigned char)1])) ? (var_12) : (max((((/* implicit */unsigned int) arr_23 [i_9 - 1] [i_5] [i_5])), (arr_8 [i_6] [(signed char)2] [9U] [i_6]))))))))));
                    var_25 ^= ((/* implicit */short) (~(((max((((/* implicit */long long int) var_7)), (arr_12 [(signed char)10] [i_8] [i_6] [i_6] [i_5]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_19 [i_9])) : (((/* implicit */int) arr_2 [i_5 - 1] [i_5])))))))));
                    var_26 += ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned int) ((arr_12 [i_5] [i_5 + 1] [i_6] [i_6] [i_8]) <= (arr_12 [i_5 - 1] [i_5 + 1] [i_6] [i_8] [i_9]))))));
                    arr_33 [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5490924197907095028LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(signed char)1])))))) : (max((arr_27 [i_5] [i_5]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)121)) ? (2003721803) : (((/* implicit */int) (unsigned char)139)))))))));
                }
                arr_34 [i_5] [i_6] [i_5] [i_5] = max((((((/* implicit */_Bool) 6388382750714602259LL)) ? (arr_27 [i_8 + 1] [i_5 + 1]) : (arr_27 [i_8 - 1] [i_5 + 1]))), (((/* implicit */unsigned int) min(((signed char)-107), (((/* implicit */signed char) (_Bool)1))))));
            }
            for (unsigned char i_10 = 3; i_10 < 9; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    arr_39 [3U] = ((/* implicit */long long int) arr_19 [i_10 - 1]);
                    var_27 = ((/* implicit */long long int) ((unsigned char) max((arr_38 [i_5] [i_6] [i_10] [i_11]), (((/* implicit */unsigned int) arr_2 [i_5] [i_10])))));
                    arr_40 [i_5] [i_5] = ((/* implicit */signed char) arr_21 [i_6]);
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)107)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) arr_30 [i_10 + 1] [i_10 - 2] [i_10 - 3] [i_10 - 1] [7U])))))));
                    var_29 = ((/* implicit */unsigned int) arr_23 [i_5] [i_6] [(signed char)1]);
                }
                arr_41 [3U] [i_6] [i_6] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_16 [i_5 + 1])), (((max((var_13), ((_Bool)0))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_6] [i_6] [i_10]))) : (((/* implicit */int) var_1))))));
                arr_42 [i_5] [i_5] [(unsigned short)1] [(short)4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 + 1]))) < (var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 - 1]))) : (((unsigned int) arr_7 [i_6] [i_5 + 1] [i_10 - 1]))));
                var_30 = ((/* implicit */unsigned int) arr_10 [i_5] [i_6] [(signed char)10] [i_5] [13U] [i_5]);
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_31 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_25 [3U] [i_6])) ? (min((var_5), (((/* implicit */unsigned int) arr_19 [i_5])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [9U] [i_6] [(_Bool)1] [i_12] [i_12 - 1])))))))));
                var_32 = ((/* implicit */unsigned int) (-(11833726956728925124ULL)));
            }
        }
        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 3; i_15 < 7; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        {
                            arr_55 [i_13] [(unsigned short)2] = ((/* implicit */long long int) var_2);
                            var_33 = ((/* implicit */unsigned char) var_3);
                        }
                    } 
                } 
                var_34 = ((/* implicit */_Bool) ((3398584862U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
            }
            arr_56 [2ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_5])) ? (max((var_9), (((/* implicit */unsigned int) ((arr_25 [i_5] [i_13]) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) : (max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_13]))) : (2371610322U))), (var_8)))));
            /* LoopNest 3 */
            for (unsigned int i_17 = 1; i_17 < 9; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (signed char i_19 = 1; i_19 < 8; i_19 += 1) 
                    {
                        {
                            arr_64 [i_19] [i_19] [i_18] [i_18] [i_5] [i_5] = (~(var_6));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (var_6)))) ? (2671160116U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_18] [i_19] [i_19] [i_19 + 1])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)107))))) : (((((/* implicit */_Bool) arr_48 [i_19 - 1] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_19 + 2] [i_19]))) : (var_4)))));
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16293228235986747624ULL)) ? (((/* implicit */int) (short)-13714)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_20 = 1; i_20 < 9; i_20 += 2) 
        {
            arr_67 [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned int) var_3)), (var_7))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [14LL] [i_20 - 1] [(short)8]), (((/* implicit */short) (_Bool)0)))))) | (((14818978857498201678ULL) | (((/* implicit */unsigned long long int) arr_0 [12U])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
            /* LoopSeq 3 */
            for (unsigned int i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned int) (~(max(((-(((/* implicit */int) arr_29 [i_5] [i_20] [i_20])))), (((/* implicit */int) ((arr_38 [i_5] [i_5] [i_20] [i_21]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_5] [i_20 - 1] [i_21]))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_22 = 1; i_22 < 8; i_22 += 1) 
                {
                    var_38 = ((/* implicit */long long int) var_2);
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) max(((~(-1))), (((/* implicit */int) arr_21 [i_5])))))));
                    var_40 = ((/* implicit */unsigned char) ((var_13) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) (unsigned char)185))), (654270489U)))) : ((-(((((/* implicit */_Bool) (signed char)97)) ? (9223372036854775796LL) : (((/* implicit */long long int) arr_36 [i_5 - 1] [i_20 + 1] [(signed char)0] [i_22]))))))));
                    var_41 *= ((/* implicit */unsigned short) ((unsigned int) arr_53 [(_Bool)1] [i_5] [i_5 - 1]));
                }
            }
            for (unsigned int i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
            {
                var_42 = ((/* implicit */short) (_Bool)1);
                var_43 = ((/* implicit */short) max((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_37 [i_5])))) / (((/* implicit */int) arr_30 [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5]))))), (((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_5] [i_20 - 1] [i_23]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (arr_7 [15U] [i_23] [i_23])))));
            }
            /* vectorizable */
            for (unsigned int i_24 = 0; i_24 < 10; i_24 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_25 = 2; i_25 < 8; i_25 += 3) 
                {
                    for (long long int i_26 = 0; i_26 < 10; i_26 += 4) 
                    {
                        {
                            arr_86 [i_5 + 1] [7LL] [9U] [i_25] [i_26] [(_Bool)1] = ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_24] [i_25]))) <= (((((/* implicit */_Bool) arr_61 [i_24] [i_24] [i_24] [(signed char)4])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-815))) : (0LL))));
                            arr_87 [i_5] [i_5] [9U] [i_24] [i_25] [i_26] = ((/* implicit */long long int) ((arr_49 [(unsigned char)0]) ? (((/* implicit */int) ((arr_16 [i_5]) && (((/* implicit */_Bool) var_3))))) : ((-(((/* implicit */int) arr_72 [i_5] [8LL] [i_5] [8LL]))))));
                            arr_88 [i_5] [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_19 [i_26]))));
                            var_44 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_5] [i_5 - 1] [i_5])) ? ((((_Bool)0) ? (4095U) : (2075574137U))) : (arr_82 [(short)9] [i_20] [i_24] [2U] [i_20])));
                            var_45 = ((((((/* implicit */unsigned long long int) arr_78 [i_26] [i_5 + 1] [i_20] [i_5 + 1])) ^ (arr_59 [i_5] [i_5] [i_5]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_9)))));
                        }
                    } 
                } 
                arr_89 [i_5 + 1] [i_20] [i_24] = ((/* implicit */short) (signed char)103);
            }
        }
        for (short i_27 = 0; i_27 < 10; i_27 += 3) 
        {
            var_46 = ((/* implicit */long long int) arr_61 [i_5] [i_5] [i_5 - 1] [i_5]);
            var_47 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 415466317U)))), ((_Bool)1)));
            var_48 ^= ((/* implicit */unsigned short) arr_61 [i_5 - 1] [i_5 - 1] [i_5 - 1] [(_Bool)1]);
            /* LoopNest 3 */
            for (signed char i_28 = 1; i_28 < 8; i_28 += 2) 
            {
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    for (unsigned int i_30 = 0; i_30 < 10; i_30 += 2) 
                    {
                        {
                            arr_100 [i_5] [1LL] [i_28] [i_28] [i_29] [i_27] = ((/* implicit */long long int) var_8);
                            var_49 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_61 [i_29 - 1] [i_29 - 1] [i_28 - 1] [i_5 - 1]), (((/* implicit */short) arr_48 [i_29 - 1] [i_29 - 1])))))) / ((+(min((arr_12 [i_5] [(short)0] [i_30] [i_30] [14U]), (((/* implicit */long long int) var_4))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_31 = 0; i_31 < 16; i_31 += 4) 
    {
        var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (short)31964)) / (((/* implicit */int) (signed char)23))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_31] [i_31])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_7 [(unsigned char)12] [i_31] [(short)13])))) ? (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */long long int) arr_8 [i_31] [(unsigned short)14] [i_31] [i_31])) : (9223372036854775796LL))) : (((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_31] [i_31] [i_31] [i_31]))) : (19LL))))) : (((/* implicit */long long int) var_12)))))));
        arr_103 [10U] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4180615306U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-83)))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_102 [i_31])), (var_0)))) - (158)))));
        arr_104 [i_31] [i_31] = ((/* implicit */short) arr_101 [(_Bool)1]);
    }
}
