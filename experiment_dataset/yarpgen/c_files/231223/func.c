/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231223
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) arr_5 [i_2 + 1] [i_2 + 1] [i_0]);
                    var_20 *= ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)130));
                    var_21 &= ((/* implicit */_Bool) (unsigned char)248);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 19; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                {
                    arr_17 [i_3] [i_3] [i_3] = ((/* implicit */long long int) 1713464514);
                    /* LoopSeq 4 */
                    for (short i_6 = 3; i_6 < 17; i_6 += 2) 
                    {
                        arr_21 [i_3] [i_5 - 1] [i_5 + 1] [i_4 + 1] [i_3] = ((/* implicit */short) (-(max((8465578502279950216ULL), (((/* implicit */unsigned long long int) arr_11 [i_3]))))));
                        arr_22 [i_3] [i_4 - 3] [i_3] [i_6 - 3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_3])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (arr_10 [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 613177522)) / (arr_19 [i_3] [i_3]))))))) ? ((-(((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))))))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (15U)))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) 602918803582732707LL)) || (((/* implicit */_Bool) 3189304190662078424ULL)))))));
                    }
                    for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        var_23 *= ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (unsigned short)4096))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)97)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (arr_15 [i_3] [i_5] [i_4] [i_3])))) >= (arr_24 [i_3] [i_4 - 3] [i_5 + 1] [i_4 - 3])))))));
                    }
                    for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) ((unsigned long long int) min((arr_18 [i_4 - 1]), (((/* implicit */int) arr_23 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2846136696U)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (unsigned char)92))))));
                            arr_31 [i_3] [i_4 - 3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_19 [i_3] [i_3]) <= (arr_19 [i_3] [i_3]))))));
                            arr_32 [i_3] [i_3] [i_4 + 1] [i_5] [i_3] [i_9] = (~(2119207567U));
                            var_27 *= ((/* implicit */unsigned long long int) (unsigned char)69);
                        }
                        for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */long long int) var_17);
                            arr_36 [i_10 - 3] [i_8] [i_3] [i_4 - 3] [i_3] = (-(((/* implicit */int) ((arr_20 [i_3] [i_5 + 1] [i_8] [i_10 - 1]) != (((/* implicit */int) arr_29 [i_8] [i_3]))))));
                        }
                    }
                    for (short i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        arr_39 [i_3] [i_3] [i_3] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_3] [i_3] [i_3]))))) : (((/* implicit */int) ((var_4) != (arr_24 [i_3] [i_5] [i_4 - 1] [i_3]))))))) ? (((long long int) (unsigned char)236)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((6096830387939274714ULL) == (((/* implicit */unsigned long long int) 5901107446259027413LL))))) : (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                        var_29 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) 1579046030)), (18247369573260148090ULL)))));
                    }
                    arr_40 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (signed char)62)))))) ? (((((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned long long int) -8885172059120533392LL)) : (arr_10 [i_4]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_33 [i_3] [i_3] [i_4] [i_4] [i_3] [i_3] [i_3])) : (((/* implicit */int) (short)-29715)))), (((/* implicit */int) ((short) (_Bool)0))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_3] [(unsigned char)4] [i_3])) || (((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_3] [12ULL] [i_3]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            var_31 = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_12]))));
            var_32 = ((/* implicit */unsigned char) 1439494124U);
            /* LoopSeq 2 */
            for (int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                arr_46 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)23913)))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_3] [i_3])) || (((/* implicit */_Bool) 2147483647)))))));
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_15 = 2; i_15 < 18; i_15 += 2) 
                    {
                        var_33 = ((/* implicit */_Bool) var_5);
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) arr_44 [i_3] [i_12] [i_13])) : ((~(((/* implicit */int) var_13))))));
                        var_35 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_15 - 1] [i_15 + 2] [i_15 - 2]))) % ((~(5082949422028618058LL)))));
                        var_36 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_14] [i_12] [i_12] [i_12]))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_37 -= ((/* implicit */signed char) (+(-5311579364886015482LL)));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_3] [i_13] [i_14])) ? (((/* implicit */int) arr_52 [i_3])) : (((/* implicit */int) arr_41 [i_3]))));
                        var_39 = ((/* implicit */unsigned int) 9223372036854775807LL);
                        var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3101305297U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)14)))))));
                    }
                    var_41 = ((/* implicit */unsigned short) ((int) arr_35 [i_3] [i_3] [i_12] [i_13] [i_14]));
                }
            }
            for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                var_42 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)86)) % (((/* implicit */int) (signed char)-102))))));
                arr_57 [i_3] [i_3] = (-(arr_24 [i_3] [i_3] [i_12] [i_17]));
                var_43 = (_Bool)1;
                var_44 ^= ((/* implicit */int) arr_28 [i_3] [i_3] [(unsigned short)18] [i_12] [i_3]);
            }
            var_45 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_42 [i_12] [i_3] [i_3])) * (((/* implicit */int) arr_45 [i_3] [i_12] [i_3] [i_12])))));
            var_46 ^= ((/* implicit */long long int) (~(arr_30 [i_3] [i_3] [i_3] [i_3] [(_Bool)0] [i_3])));
        }
        for (long long int i_18 = 0; i_18 < 20; i_18 += 1) 
        {
            var_47 = ((/* implicit */int) 7073865798464688134LL);
            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (18024141957028648144ULL) : (((/* implicit */unsigned long long int) var_18)))))))));
        }
        arr_61 [i_3] = ((/* implicit */unsigned long long int) ((((arr_48 [i_3] [i_3] [i_3] [i_3]) ? ((~(arr_10 [i_3]))) : (((/* implicit */unsigned long long int) var_4)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_59 [i_3]))))))))));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 19; i_19 += 1) 
    {
        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_19])) || (((/* implicit */_Bool) arr_33 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))));
        var_50 = ((/* implicit */unsigned short) ((((472438430791970847LL) < (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_19] [i_19] [i_19] [i_19] [i_19]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967288U)));
    }
    var_51 = var_9;
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 22; i_20 += 2) 
    {
        for (unsigned short i_21 = 0; i_21 < 22; i_21 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_23 = 0; i_23 < 22; i_23 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned int) ((long long int) (+(((/* implicit */int) (unsigned char)6)))));
                        var_53 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (short)5021)))));
                        var_54 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) arr_70 [i_22])))) : (((/* implicit */int) (_Bool)1))))));
                        var_55 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(-843652866)))))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_24 = 0; i_24 < 22; i_24 += 3) /* same iter space */
                    {
                        var_56 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_75 [i_20] [i_21] [i_21] [i_20]), (((/* implicit */unsigned long long int) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_20] [i_21] [i_20] [i_24]))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)3))))), (((((/* implicit */_Bool) var_12)) ? (12335944428619548164ULL) : (((/* implicit */unsigned long long int) arr_74 [i_20] [i_22] [i_24]))))))));
                        arr_79 [i_20] [i_20] [i_22] [i_24] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_73 [i_24] [i_22] [i_22] [i_20]))))) ? ((~(((/* implicit */int) (unsigned char)110)))) : (((((/* implicit */_Bool) (short)-25834)) ? (1320297889) : (((/* implicit */int) (short)-1))))));
                    }
                    for (int i_25 = 0; i_25 < 22; i_25 += 3) /* same iter space */
                    {
                        arr_82 [i_22] [i_22] [i_22] [i_21] [i_22] = (~(4294967295U));
                        arr_83 [i_22] = ((/* implicit */unsigned long long int) (+(((((unsigned int) (signed char)117)) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)19121)) + (((/* implicit */int) var_16)))))))));
                        var_57 = ((/* implicit */short) (~(((/* implicit */int) ((9223372036854775807LL) >= (var_4))))));
                    }
                    arr_84 [i_22] [i_21] = ((var_4) == (((long long int) arr_69 [i_21])));
                    /* LoopNest 2 */
                    for (short i_26 = 0; i_26 < 22; i_26 += 1) 
                    {
                        for (unsigned long long int i_27 = 2; i_27 < 20; i_27 += 1) 
                        {
                            {
                                var_58 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_73 [i_20] [i_21] [i_22] [i_22]))))))))));
                                arr_91 [i_22] [i_22] [i_22] [i_27] = ((/* implicit */_Bool) (-(arr_88 [i_27] [i_20])));
                                arr_92 [i_20] [i_21] [i_21] [i_21] [i_27] [i_27 - 1] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_28 = 0; i_28 < 22; i_28 += 1) 
                    {
                        for (long long int i_29 = 0; i_29 < 22; i_29 += 3) 
                        {
                            {
                                var_59 = (~(((arr_67 [i_20]) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_76 [i_20] [i_22] [i_21] [i_20] [i_28] [i_29])), ((short)19330))))))));
                                arr_98 [i_20] [i_22] [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_14) + (min((8217754010417915570LL), (((/* implicit */long long int) (unsigned char)148))))))) ? ((-(arr_75 [i_22] [i_22] [i_22] [i_28]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34))) : (21ULL)))) ? (((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (short)-17044)))) : ((+(((/* implicit */int) arr_70 [i_29])))))))));
                            }
                        } 
                    } 
                }
                arr_99 [i_20] [i_21] [i_21] = ((/* implicit */unsigned char) -7654190499471855899LL);
                var_60 = ((/* implicit */unsigned char) 13LL);
                arr_100 [i_20] [i_20] [i_21] = ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
}
