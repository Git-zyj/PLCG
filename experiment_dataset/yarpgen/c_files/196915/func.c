/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196915
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) arr_6 [i_2] [i_1]);
                                var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_10 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_0]))) * (((((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_0])) ? (((/* implicit */int) var_5)) : (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4 - 2])))))), (min((var_2), ((-(17LL)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) max((var_11), (((/* implicit */long long int) (signed char)20)))))) && (((/* implicit */_Bool) (~(min((-5944345154964387100LL), (((/* implicit */long long int) var_7)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max(((signed char)-115), ((signed char)95)));
                    var_17 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (134217216LL))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
                    {
                        for (long long int i_9 = 4; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((int) arr_18 [3U] [i_8 - 1] [i_9 - 4] [i_8]))), (min((((/* implicit */unsigned int) var_1)), (arr_16 [i_6])))));
                                arr_24 [i_5] [i_6] [i_6] [i_7] [i_6] [i_9 - 4] [i_6] = var_5;
                                arr_25 [i_5] [i_6] [10LL] [i_8] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((2103756446U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7])))))) == ((-(5944345154964387124LL))))))));
                                arr_26 [i_6] [i_6] = max(((!((!(((/* implicit */_Bool) var_6)))))), (((((/* implicit */_Bool) (signed char)22)) && (((/* implicit */_Bool) var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */short) (+(((/* implicit */int) (short)6775))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (int i_12 = 1; i_12 < 11; i_12 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)74)) ? (((((/* implicit */_Bool) ((var_11) % (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((signed char) (unsigned char)120))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) (-(134217237LL)))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned int) ((max((var_10), (((/* implicit */long long int) var_6)))) | (((/* implicit */long long int) arr_31 [i_11] [i_11] [i_12 + 1] [i_12]))))))));
                    var_22 = ((/* implicit */unsigned short) (unsigned char)137);
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_14 [i_12 + 1])))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [(unsigned char)6] [i_11] [(unsigned short)9] [(unsigned char)0])), (10561465995230985481ULL)))) ? (((/* implicit */int) (short)-18203)) : (((/* implicit */int) arr_22 [i_12 - 1] [i_11] [i_11] [i_10] [i_10])))))))));
                }
            } 
        } 
        arr_33 [i_10] = ((/* implicit */unsigned short) ((((arr_15 [i_10]) & (arr_15 [i_10]))) & (min((arr_15 [i_10]), (arr_15 [i_10])))));
    }
    for (int i_13 = 3; i_13 < 23; i_13 += 1) 
    {
        arr_38 [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)118)) <= (((/* implicit */int) (unsigned short)53669)))))));
        arr_39 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7248908048585949631ULL)) ? (((/* implicit */unsigned long long int) -134217229LL)) : (((((/* implicit */_Bool) max((var_0), (arr_34 [i_13 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) arr_35 [i_13])) : (var_9)))) : (var_3)))));
        /* LoopSeq 2 */
        for (unsigned short i_14 = 2; i_14 < 24; i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_15 = 2; i_15 < 22; i_15 += 4) 
            {
                for (int i_16 = 1; i_16 < 21; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */_Bool) arr_40 [i_17] [i_17] [i_15])) && (((/* implicit */_Bool) (-((-(((/* implicit */int) var_0)))))))))));
                            var_25 = ((/* implicit */unsigned char) ((((((((int) (signed char)-14)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_14 + 1] [i_13] [i_17] [i_17] [i_15])) && (((/* implicit */_Bool) arr_34 [i_15 - 1]))))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551609ULL)))))) > (min((var_4), (((/* implicit */long long int) (short)7624)))))))));
                            var_26 |= ((/* implicit */short) ((min((((/* implicit */long long int) (unsigned short)22432)), (arr_49 [(short)10] [i_15 - 2] [i_15] [i_16 + 4] [i_17] [i_14 - 2]))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_12)) : (11ULL)))) || (((/* implicit */_Bool) ((unsigned char) -134217214LL)))))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_47 [(signed char)20] [(signed char)20] [i_15 + 2] [(signed char)20] [i_17] [i_17] [i_16]))));
                            arr_50 [i_13] [i_13] [i_13] [i_16 + 4] [5U] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */unsigned long long int) var_10)) : (max((((/* implicit */unsigned long long int) (unsigned short)0)), (18446744073709551609ULL))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */signed char) arr_42 [i_13] [i_13 - 3] [i_14 + 1] [i_14]);
            arr_51 [i_13] [i_14] = ((/* implicit */_Bool) arr_49 [i_13 - 1] [i_13] [i_13] [i_14] [i_14] [i_14]);
        }
        /* vectorizable */
        for (unsigned short i_18 = 2; i_18 < 24; i_18 += 1) /* same iter space */
        {
            var_29 *= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
            var_30 = ((/* implicit */unsigned long long int) (signed char)66);
            var_31 = ((/* implicit */short) ((10015862266096878339ULL) * (18446744073709551612ULL)));
            arr_55 [i_13 - 2] [i_13] [(unsigned short)20] = ((/* implicit */unsigned char) -134217226LL);
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) 
            {
                var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -6214999016884017832LL)) ? (134217214LL) : (-134217218LL)));
                arr_58 [i_13] [11U] [i_13] [i_13] = ((/* implicit */int) arr_43 [i_13] [i_13] [i_13] [i_13]);
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_20 = 2; i_20 < 20; i_20 += 2) 
    {
        for (int i_21 = 0; i_21 < 21; i_21 += 4) 
        {
            {
                arr_65 [(signed char)8] [i_20 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_41 [i_20] [i_21] [i_20])), (arr_60 [i_21])))) ? (((/* implicit */int) min((var_0), (var_0)))) : (((/* implicit */int) arr_37 [i_21] [i_21]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_1))))))))) : (min((max((-1LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)56063))))))));
                /* LoopSeq 2 */
                for (signed char i_22 = 2; i_22 < 20; i_22 += 2) 
                {
                    arr_69 [(unsigned short)4] [i_20] [(unsigned short)4] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_40 [i_22] [i_21] [i_22]), (arr_40 [i_21] [i_21] [i_20 - 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)66))))) : (((4ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_22] [i_21] [i_22])))))));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_36 [i_20 - 2] [i_22 + 1])), (var_9)))) ? (arr_68 [i_20 - 2] [i_20] [i_21] [i_22]) : ((~(((/* implicit */int) ((short) -134217228LL)))))));
                    var_34 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) (~(var_2)))) ^ (((((/* implicit */_Bool) arr_43 [i_20 + 1] [i_21] [i_21] [i_21])) ? (arr_47 [3] [i_22] [21] [3] [(signed char)20] [i_20] [21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                }
                /* vectorizable */
                for (unsigned int i_23 = 0; i_23 < 21; i_23 += 1) 
                {
                    var_35 = ((/* implicit */long long int) var_3);
                    var_36 = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) arr_70 [i_23])))));
                }
                var_37 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) != (arr_66 [i_20] [i_20] [i_20 - 1] [i_20])))), (((unsigned short) var_3))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) var_5);
    var_39 = ((/* implicit */long long int) max((-1435696352), (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)9465), (((/* implicit */unsigned short) var_7))))))))));
}
