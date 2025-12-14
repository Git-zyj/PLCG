/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193496
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
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0 - 2] &= ((/* implicit */unsigned short) ((((-1397059270) == (((/* implicit */int) (_Bool)0)))) && (((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0] [i_0 + 1])), (((((/* implicit */int) var_14)) + (((/* implicit */int) var_0)))))))));
        var_15 ^= ((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))));
        var_16 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) && (((/* implicit */_Bool) min((arr_0 [i_0]), (17727633161100260656ULL))))))) << (((((/* implicit */int) var_13)) - (44881)))));
    }
    for (int i_1 = 3; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                arr_13 [i_1 - 2] [(signed char)5] = (!(((/* implicit */_Bool) (-(arr_11 [i_3 + 1] [i_1 + 1] [8])))));
                var_17 = ((/* implicit */signed char) arr_1 [i_1]);
                arr_14 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                var_18 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)250)))) && (((arr_4 [i_1]) != (11695239343051474163ULL)))))) ^ (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_0)), (719110912609290932ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))))))));
                arr_18 [i_4] = ((/* implicit */unsigned short) (((+(((((/* implicit */int) (signed char)40)) / (((/* implicit */int) (unsigned char)239)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) 
                {
                    var_19 += (~(((/* implicit */int) ((signed char) var_8))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */int) (!((!(arr_21 [i_1 - 2] [i_1 + 1] [(_Bool)1] [i_1] [i_1 + 1] [(_Bool)1])))));
                        var_21 = ((/* implicit */unsigned short) ((unsigned int) ((1796990803292736970ULL) + (17727633161100260656ULL))));
                    }
                }
            }
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_22 ^= ((/* implicit */_Bool) min((719110912609290948ULL), (((/* implicit */unsigned long long int) var_10))));
                            arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_8] [i_1] |= ((/* implicit */unsigned long long int) (!(arr_28 [i_1] [i_1] [i_1] [i_8] [i_8])));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((-(arr_22 [i_1] [i_1] [i_2] [i_7] [i_8] [i_8] [(_Bool)1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_22 [(short)12] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 3; i_10 < 11; i_10 += 4) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((short) ((short) arr_30 [i_1 - 2] [i_1 - 1] [i_1 - 3] [i_1 - 3] [(signed char)12] [i_1 - 2]))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_1] [i_2] [i_2] [i_7] [i_7] [i_1] [i_7]))))) != ((+(((/* implicit */int) arr_21 [i_1 - 3] [i_1] [i_1 - 3] [i_1] [i_1 - 2] [i_1]))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1397059270)))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)250))))) : (((((/* implicit */int) arr_24 [i_1] [i_1 - 2] [i_1] [i_1])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1] [i_1])))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_12 = 2; i_12 < 13; i_12 += 4) 
            {
                var_27 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17727633161100260656ULL)))))) ^ (min((125829120ULL), (487533812283451837ULL))))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1 + 1])))))));
                /* LoopNest 2 */
                for (short i_13 = 1; i_13 < 10; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        {
                            arr_44 [i_1] [i_1] [i_2] [i_12] [i_13] [i_13] [i_13] |= (!(((((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) arr_1 [(unsigned char)13])))) < ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12)))))));
                            arr_45 [i_1] [i_2] [i_12 + 1] [(signed char)0] = ((/* implicit */signed char) (~(min((((/* implicit */long long int) arr_35 [i_1] [i_2] [i_12 - 1] [i_1 - 3] [i_13 - 1])), (arr_8 [(unsigned short)11] [(unsigned short)11])))));
                            arr_46 [i_1] [i_1] [(unsigned char)5] [i_14] = ((/* implicit */_Bool) var_1);
                        }
                    } 
                } 
            }
            arr_47 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_39 [i_1] [i_1] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_1 - 2] [i_2] [i_2] [i_1 - 2])))));
            arr_48 [i_1] [i_2] [i_2] = ((/* implicit */int) ((signed char) min((-1), (-1397059270))));
        }
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            arr_51 [i_1] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)4931)) != (((/* implicit */int) (unsigned char)193)))))) & (((unsigned long long int) var_3))));
            arr_52 [i_1] [i_15] [i_15] = ((/* implicit */_Bool) ((long long int) arr_29 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1] [i_1 - 2]));
            arr_53 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_15] [i_15] [i_1 - 3] [i_1 - 1] [i_1])) ? (1230191674) : (((/* implicit */int) arr_20 [i_1 - 2] [i_15] [i_1 - 2] [i_1 - 2] [i_1 - 2]))));
            arr_54 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) var_6);
        }
        var_28 = ((/* implicit */short) max((((((/* implicit */int) var_9)) ^ (((32768) >> (((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) + (17053))))))), (min(((~(((/* implicit */int) arr_20 [i_1] [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 3])))), ((~(((/* implicit */int) (_Bool)1))))))));
        arr_55 [i_1 - 1] = ((/* implicit */short) (+(16649753270416814649ULL)));
        /* LoopSeq 4 */
        for (signed char i_16 = 2; i_16 < 13; i_16 += 4) 
        {
            arr_58 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_3)))))) - (min((arr_42 [i_1 - 3]), (arr_42 [i_1 - 3])))));
            arr_59 [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) arr_10 [i_1] [i_1 - 2] [i_16 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))) >> (((((/* implicit */int) max(((unsigned short)1359), (((/* implicit */unsigned short) arr_10 [i_1] [i_1 + 1] [i_16 - 2]))))) - (48477))));
            var_29 = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((var_12) && (((/* implicit */_Bool) arr_25 [i_16] [i_16] [i_16 - 1]))))), (((signed char) min(((signed char)127), (arr_9 [i_1] [i_16] [i_16]))))));
            arr_60 [13ULL] [13ULL] [13ULL] = ((/* implicit */unsigned int) max((arr_38 [(short)1] [(short)1] [i_1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_1] [i_1 + 1] [i_16 + 1] [i_16 + 1])) && ((_Bool)1))))));
        }
        for (short i_17 = 1; i_17 < 12; i_17 += 4) 
        {
            arr_65 [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_27 [i_1 + 1] [i_17 + 2] [i_1 + 1] [i_17])), (var_4)))) & (((/* implicit */int) arr_21 [i_17] [i_17] [i_17] [i_17 + 1] [(signed char)9] [i_17]))))) ? (-1161202472898232091LL) : (((/* implicit */long long int) max((((/* implicit */int) ((6621061215447294131LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), ((-(((/* implicit */int) var_7)))))))));
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_1] [i_17] [13U] [i_1] [i_17 - 1] [i_17])) || (var_12))))))) ? (((((/* implicit */_Bool) (~(arr_39 [i_1 + 1] [i_1] [i_1] [i_17])))) ? (-4) : (((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) (signed char)-33)))))) : (((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [12U] [i_1]))));
        }
        for (unsigned short i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            var_32 += ((/* implicit */short) (_Bool)1);
            /* LoopSeq 1 */
            for (short i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_31 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 + 1])) & (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_63 [i_1] [i_18]), (((/* implicit */unsigned int) var_0))))) || (((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1 + 1] [i_18] [i_1 + 1]))))))))));
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            arr_76 [i_21] [(signed char)10] [i_18] [(signed char)10] [i_21] [i_21] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_1 - 3])), (min(((-(1397059269))), (arr_12 [i_21] [i_19] [i_18])))));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 17727633161100260656ULL)))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-31)))) ? (((/* implicit */int) arr_16 [i_1 + 1] [i_18] [i_18])) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (signed char)53))))))) : (((/* implicit */int) arr_36 [i_21] [i_1 + 1] [i_1 - 2] [i_18] [i_1] [i_1] [i_1])))))));
                        }
                    } 
                } 
                var_35 |= ((/* implicit */_Bool) ((unsigned short) ((short) arr_71 [i_1] [i_1] [i_18] [i_19] [i_18])));
                arr_77 [4ULL] [i_18] [4ULL] = ((/* implicit */unsigned int) ((1369022893561438447ULL) + (((/* implicit */unsigned long long int) 1397059269))));
            }
            arr_78 [i_1] [(short)6] = min((((/* implicit */long long int) arr_41 [(unsigned short)9] [2] [i_1 - 2] [i_1 - 2] [i_1])), (((arr_39 [i_1 + 1] [i_18] [i_18] [(_Bool)1]) / (arr_39 [i_1 + 1] [i_18] [i_1 + 1] [i_1]))));
            arr_79 [i_18] [i_18] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_74 [i_1] [i_1 + 1] [i_1] [i_1] [(signed char)1] [i_1] [i_1]))));
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_21 [i_1] [i_1 - 1] [i_1] [8U] [i_1] [i_1])), (max((((unsigned int) (signed char)69)), (((/* implicit */unsigned int) (short)-7409)))))))));
        }
        for (long long int i_22 = 0; i_22 < 14; i_22 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_23 = 0; i_23 < 14; i_23 += 4) 
            {
                arr_84 [(short)5] [i_22] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 8097018698529009035ULL))) && (((/* implicit */_Bool) ((long long int) arr_11 [i_23] [i_1] [i_1])))));
                /* LoopSeq 2 */
                for (long long int i_24 = 0; i_24 < 14; i_24 += 4) /* same iter space */
                {
                    arr_88 [i_1] [i_1] [i_1 - 2] [i_24] [i_24] = ((unsigned long long int) (short)2392);
                    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (((~(((/* implicit */int) arr_7 [i_1 - 3] [i_1 + 1])))) == (((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 3])))))))));
                }
                for (long long int i_25 = 0; i_25 < 14; i_25 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_69 [i_23] [i_23] [i_23] [i_23]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_26 = 0; i_26 < 14; i_26 += 4) 
                    {
                        arr_95 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) <= (((((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_22] [i_22] [i_23] [i_22]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-1)))) : (arr_19 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 2])))));
                        arr_96 [i_26] [i_25] [i_23] [i_1] [i_22] [i_1] = ((/* implicit */short) ((int) (signed char)54));
                        arr_97 [i_1] [i_22] [i_22] [12LL] [i_26] = ((arr_0 [i_1]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_72 [i_1 + 1] [i_1 + 1] [i_1] [i_25] [(short)3] [i_1 + 1]), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) arr_40 [i_22] [i_22] [i_23] [i_22])) : (((/* implicit */int) min(((unsigned short)14031), (((/* implicit */unsigned short) var_14)))))))));
                        arr_98 [i_23] = ((/* implicit */short) arr_12 [i_1] [i_22] [i_22]);
                    }
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned short) 0ULL);
                        arr_101 [i_27] [i_22] [i_22] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)12658)))));
                        var_40 -= ((/* implicit */unsigned short) (-(10349725375180542569ULL)));
                        var_41 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)41)) || (((/* implicit */_Bool) (unsigned short)62390))))) << (((((/* implicit */int) ((signed char) arr_35 [i_1 - 1] [i_22] [i_22] [i_1 - 1] [i_1 - 1]))) - (84)))));
                        arr_102 [i_1 + 1] [1] [i_1] [i_27] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)51505)));
                    }
                }
            }
            /* LoopNest 2 */
            for (long long int i_28 = 0; i_28 < 14; i_28 += 4) 
            {
                for (int i_29 = 0; i_29 < 14; i_29 += 4) 
                {
                    {
                        var_42 ^= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13999)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2872382273U)))) && (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)19))))))), ((+((-2147483647 - 1))))));
                        arr_110 [i_1] = ((/* implicit */signed char) (((!((((_Bool)1) && (((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_22] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_1] [i_1] [i_1 - 3] [i_1]))) : ((-(var_5)))));
                        /* LoopSeq 1 */
                        for (signed char i_30 = 0; i_30 < 14; i_30 += 4) 
                        {
                            arr_113 [(signed char)5] [i_29] [i_1 - 1] [i_1 - 1] [(signed char)5] [i_1 - 1] [i_1 - 1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_82 [i_1 + 1] [i_29] [i_29]))))) != ((-(18446744073709551615ULL))))) && (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_112 [(unsigned short)1])))) && (((/* implicit */_Bool) (short)-24489))))));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_6 [i_1 + 1]))) + ((-(((/* implicit */int) arr_6 [i_1 - 1]))))));
                            var_44 = ((/* implicit */short) arr_49 [i_1 - 3]);
                        }
                    }
                } 
            } 
            arr_114 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_42 [i_1]);
        }
    }
    for (int i_31 = 3; i_31 < 13; i_31 += 4) /* same iter space */
    {
        arr_119 [i_31] [i_31] = ((/* implicit */short) arr_21 [(signed char)3] [i_31 - 2] [(signed char)3] [i_31] [(signed char)3] [(unsigned short)2]);
        arr_120 [i_31] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((arr_39 [i_31 - 2] [i_31 + 1] [i_31 - 3] [i_31 - 3]), (((/* implicit */long long int) 1242401334)))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) (unsigned short)47408)))))))));
    }
    var_45 = ((/* implicit */signed char) ((min((var_14), (((1242401334) < (((/* implicit */int) (unsigned short)14055)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
}
