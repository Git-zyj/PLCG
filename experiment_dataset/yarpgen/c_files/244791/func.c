/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244791
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((min((arr_7 [(unsigned short)18] [i_1] [i_1]), (var_0))), (((/* implicit */short) ((_Bool) 2388840362U))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 - 1] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1] [(short)3] [i_0 + 1] [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (1828223233U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((unsigned long long int) 4294967295U))))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47057)))))) * (max((((/* implicit */unsigned int) (unsigned short)50946)), (3612409156U))))))))));
                                arr_13 [i_0] = ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0]))) : (var_3)))))));
                                arr_14 [i_0] [i_0] [(unsigned short)6] [(unsigned short)6] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_3] [i_3] [(short)16] [i_3 + 1]) ? (((/* implicit */unsigned long long int) var_11)) : (arr_2 [i_0] [i_0])))) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 2])))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
        var_20 = (-(min((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_10))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (16608250467230224494ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))));
        var_21 = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]))) < (-6155501280577158107LL)))));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5])) ? (((7002669917584619431ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-12)))))));
        var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(short)5]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [(_Bool)1] [i_5] [i_5] [10U]))))) : (((arr_16 [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22))) : (1828223243U))))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((signed char) arr_2 [i_5] [i_5])), (((/* implicit */signed char) arr_5 [i_5] [i_5] [6LL] [6LL]))))))));
    }
    for (int i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_19 [i_6 - 1])) && (((/* implicit */_Bool) 11444074156124932205ULL))))))) ^ (((((_Bool) arr_1 [4LL] [i_6 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6]))))) : (min((((/* implicit */long long int) var_14)), (-9223372036854775807LL)))))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13))))))))));
        arr_20 [(short)15] = ((/* implicit */signed char) max((((((var_9) == (10453898135924845238ULL))) ? (((/* implicit */int) arr_10 [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [i_6] [i_6])) : ((+(((/* implicit */int) arr_7 [(signed char)12] [i_6] [(signed char)12])))))), ((-(((((/* implicit */_Bool) arr_9 [i_6] [i_6 + 1] [i_6] [i_6])) ? (((/* implicit */int) (short)-25842)) : (((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((/* implicit */int) arr_16 [(unsigned short)20])) / (((/* implicit */int) (_Bool)1))));
        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_7]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)25827))) ^ (arr_0 [i_7])))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        var_28 = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_25 [i_8] [i_8])), (3082322947U)))) ? (((((/* implicit */_Bool) 7992845937784706377ULL)) ? (arr_24 [i_8]) : (((/* implicit */unsigned long long int) 5347195192610146285LL)))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_26 [i_8])))))));
        arr_27 [i_8] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned short) 1838493606479327121ULL);
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (-(((arr_26 [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8744))))))))))))));
        arr_29 [i_8] [i_8] = ((/* implicit */int) max(((((-(arr_26 [(short)14]))) | (6108113185271112640ULL))), (((arr_25 [i_8] [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8] [i_8]))) : (arr_24 [i_8])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            {
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) 0U))));
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_38 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_31 [8ULL] [i_10])) : (((/* implicit */int) var_14)))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_19 [i_9])) : (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_10 [i_11] [i_11] [i_11] [i_10] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_9] [i_9]))) : (2226094234U)))))) : (((18446744073709551613ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_11] [i_11] [i_11] [i_10] [i_9])))))));
                    arr_39 [16ULL] [16ULL] [i_10] [(unsigned short)14] &= ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((((((/* implicit */_Bool) arr_24 [i_9])) ? (3519873179U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) - (arr_18 [i_9] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_19 [i_9]), (arr_19 [i_11]))))));
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        var_31 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_2)) ^ (min((max((6695471137949406330ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_11))))));
                        arr_42 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 9223372036854775777LL)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_0)) * (((/* implicit */int) (signed char)-32)))), (((((/* implicit */int) arr_8 [i_12] [(unsigned char)16] [i_9])) * (((/* implicit */int) arr_5 [i_9] [i_9] [i_11] [i_9]))))))) : (((((13986339860064140215ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                        arr_43 [i_12] [i_11] [i_10] [i_11] [i_9] = ((/* implicit */_Bool) arr_2 [11ULL] [i_11]);
                        arr_44 [i_9] [i_10] [i_9] [i_9] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9] [i_9]))) : (arr_1 [i_11] [i_11]))), ((~(12338630888438438976ULL)))))) ? ((~(((((/* implicit */int) arr_8 [i_10] [i_11] [(unsigned short)11])) | (((/* implicit */int) arr_6 [i_11] [i_11] [i_12])))))) : (((((/* implicit */int) (short)-1)) & (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-881))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            arr_47 [i_9] [i_9] [i_11] [i_12] [i_11] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_11] [10ULL] [i_13])))) : (((((/* implicit */int) arr_46 [i_9] [i_12] [i_11] [i_12] [i_11])) % (((/* implicit */int) (short)-28614))))));
                            var_32 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_22 [i_12] [i_13])) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_22 [i_13] [i_10])))) + (2147483647))) << (((((((/* implicit */_Bool) arr_18 [7ULL] [(unsigned short)10])) ? (13047880771236392939ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (13047880771236392939ULL)))));
                        }
                        for (signed char i_14 = 2; i_14 < 15; i_14 += 1) 
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [i_14] [i_14 + 1] [i_14 + 1] [i_14] [i_14 + 3] [i_14 + 1] [i_14]), (arr_10 [i_12] [i_14 + 1] [i_14 + 3] [(unsigned char)8] [i_14 - 2] [i_14 - 2] [i_14]))))) : (1019700547U)));
                            arr_52 [i_9] [i_10] [i_12] [i_12] |= (~(((arr_48 [i_9] [(short)6] [i_14 - 1] [i_14 + 4] [i_14] [i_9]) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
                        }
                    }
                    for (short i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
                    {
                        arr_55 [i_9] [i_9] [i_11] [i_11] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) arr_45 [i_9] [i_9])) * (((/* implicit */int) ((unsigned short) arr_16 [i_11])))));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((5026182990097028105ULL), (((/* implicit */unsigned long long int) arr_4 [i_11] [i_11]))))))) ? ((~(5398863302473158676ULL))) : (((/* implicit */unsigned long long int) ((arr_34 [i_15] [i_11] [i_10]) ? (((/* implicit */int) arr_34 [i_15] [i_10] [i_10])) : (((/* implicit */int) arr_34 [i_11] [i_10] [i_11])))))));
                    }
                    for (short i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                    {
                        var_35 = arr_8 [i_10] [i_10] [10LL];
                        arr_58 [i_11] [i_11] [(unsigned short)17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_4)))) + (2147483647))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23670))) : (arr_17 [i_16]))) - (23670ULL)))))) ? (((/* implicit */int) arr_49 [i_11])) : (((/* implicit */int) (short)13333))));
                    }
                    var_36 -= ((/* implicit */unsigned long long int) var_6);
                }
                for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
                {
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (short)0))));
                    arr_61 [i_9] [i_17] [i_17] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9])) ? (arr_21 [i_9] [i_17]) : (arr_18 [(unsigned short)13] [i_9])))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) 3275266721U))) >= (((/* implicit */int) (unsigned short)37897))))))));
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        for (short i_19 = 0; i_19 < 19; i_19 += 1) 
                        {
                            {
                                var_38 &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (1067715799U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
                                var_39 = ((/* implicit */int) (~(arr_35 [i_19] [i_18])));
                                arr_67 [(signed char)18] [i_10] [i_17] [i_18] [i_19] = ((/* implicit */short) arr_17 [i_17]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_40 &= ((/* implicit */unsigned int) var_15);
}
