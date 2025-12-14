/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4106
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
    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) 1503581931U)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned int) var_0)), (2791385369U))))) < (max((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (1503581943U))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) + (708506249U)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 2791385364U))))), ((~(var_9))))))));
                    var_18 = min((((/* implicit */unsigned int) ((unsigned char) (_Bool)1))), (((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))) ? (min((1503581926U), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))))));
                    arr_8 [i_0] [i_1] [i_2 - 3] [i_2 + 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6))))), (((/* implicit */unsigned int) ((int) var_9)))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) min((((/* implicit */int) (short)20485)), (((var_12) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [(short)0]))))) ? (var_9) : (((/* implicit */long long int) ((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
        var_19 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) 1503581935U)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (1613114922U)))) ? (((((/* implicit */_Bool) var_15)) ? (arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2]) : (var_2))) : (((/* implicit */long long int) 3227486332U))))));
    }
    for (int i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_3 - 2])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((var_12) ? (var_1) : (arr_10 [i_3 - 2]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
        {
            var_21 -= ((/* implicit */short) ((((/* implicit */int) arr_14 [i_3 + 2])) < (-1230721435)));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        arr_24 [i_5] [i_4] [(signed char)0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)56))));
                        arr_25 [i_3] [i_5] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) var_0);
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
        {
            arr_29 [i_3 + 2] [i_3] [i_7] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8807454160206854664LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9))))))));
            var_22 += ((/* implicit */unsigned int) var_14);
            arr_30 [i_3 + 2] [i_7] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((var_5) - (10064997057958181864ULL)))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (3586461047U))))))));
        }
        for (long long int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_9 = 2; i_9 < 22; i_9 += 4) 
            {
                arr_36 [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned int) ((long long int) ((((/* implicit */_Bool) var_10)) ? (3487319849430639515LL) : (var_9)))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 21; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned short) ((min((arr_22 [i_8]), (((/* implicit */long long int) var_15)))) >= (((/* implicit */long long int) ((int) var_8)))));
                            var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))));
                            arr_42 [i_3 - 2] [i_9 - 2] [i_10 + 1] = ((/* implicit */short) min((max((((/* implicit */long long int) 3774557483U)), (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_14)), (min((var_8), (var_8))))))));
                            arr_43 [i_3] [i_8] [i_8] [i_3] [i_10] [i_11] [i_11] = ((/* implicit */int) ((((_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (short)29130)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_8] [i_12]))) : (var_9))))) * (((((/* implicit */_Bool) arr_45 [i_3 + 2] [i_9] [i_9 - 2] [i_9 + 1])) ? (3487319849430639515LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))))))))));
                            arr_48 [i_12] [i_13] [i_9] [i_12] [4U] = ((/* implicit */unsigned int) var_10);
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1364715032)))))));
            }
            /* vectorizable */
            for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        var_28 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                        arr_57 [i_15] = ((/* implicit */int) var_11);
                        arr_58 [i_15] [i_14] [i_14] [i_15] [i_16] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)169)) ? (-8377726473020282757LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)100))) : (((((/* implicit */_Bool) (unsigned char)131)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145)))))));
                    }
                    for (int i_17 = 2; i_17 < 20; i_17 += 2) 
                    {
                        arr_62 [i_15] [i_8] [i_8] [i_17] = ((/* implicit */short) ((var_2) != (((long long int) (unsigned char)183))));
                        arr_63 [i_15] [i_8] [i_14] [i_15] [i_17] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_18 [i_3] [i_8] [i_14] [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        arr_66 [i_15] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3 + 2])) ? (((/* implicit */int) var_7)) : (7)));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)29373)) : (((/* implicit */int) var_0)))) - (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6))))))))));
                    }
                    arr_67 [i_15] [i_8] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967272U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126)))));
                }
                for (long long int i_19 = 1; i_19 < 22; i_19 += 4) 
                {
                    arr_71 [i_3] [i_8] [i_19] [i_19 - 1] = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-8192)))) : (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_49 [i_3] [i_3])) : (((/* implicit */int) var_12)))));
                    var_31 *= ((/* implicit */short) arr_54 [i_3] [i_14] [i_14] [i_3]);
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-12053))));
                        var_33 = ((/* implicit */signed char) 3487319849430639505LL);
                        var_34 = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */long long int) var_6)) : (var_2))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)15)))))));
                    }
                    for (unsigned int i_21 = 0; i_21 < 23; i_21 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) -545522221)) : (arr_18 [i_3 - 2] [i_8] [(unsigned char)22] [i_19 - 1])));
                        var_36 = ((/* implicit */unsigned short) (_Bool)1);
                        arr_76 [i_19] [i_19] = ((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (_Bool)1))));
                    }
                    arr_77 [18LL] [i_8] [i_14] [i_19] = ((/* implicit */unsigned int) ((var_2) ^ (((/* implicit */long long int) var_6))));
                    /* LoopSeq 3 */
                    for (short i_22 = 0; i_22 < 23; i_22 += 3) 
                    {
                        arr_82 [i_3] [i_19] = ((unsigned short) (!(((/* implicit */_Bool) var_0))));
                        arr_83 [i_3] [i_19] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        arr_86 [i_19] [i_8] [i_8] = ((((/* implicit */_Bool) 672675669U)) ? (((/* implicit */int) (unsigned short)61288)) : (((/* implicit */int) (unsigned char)129)));
                        arr_87 [i_3 + 1] [i_8] [i_19] [i_19 + 1] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_10))));
                        var_37 = ((/* implicit */short) (+(((((/* implicit */_Bool) 7)) ? (12) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (short i_24 = 1; i_24 < 21; i_24 += 3) 
                    {
                        arr_91 [i_3] [i_3] [i_14] [i_3] [i_24 + 2] [i_14] [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_26 [i_3]))));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) * (-11)));
                        arr_92 [i_3] [i_19] [i_14] [i_14] [i_19 + 1] [i_3] [i_24] = ((/* implicit */unsigned char) ((long long int) var_5));
                        arr_93 [i_19] [i_19] [i_14] [i_19] [i_24 + 1] = ((/* implicit */unsigned short) (!(((((/* implicit */int) (unsigned short)36908)) > ((-2147483647 - 1))))));
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (+(((/* implicit */int) ((unsigned char) var_4))))))));
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_25 = 0; i_25 < 23; i_25 += 2) 
                {
                    var_40 = (!(var_12));
                    /* LoopSeq 1 */
                    for (unsigned short i_26 = 3; i_26 < 21; i_26 += 3) 
                    {
                        arr_101 [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_3] [19] [(unsigned char)9]))) : (452871196U)))) ? (var_2) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)37111)) : (((/* implicit */int) arr_37 [i_3 - 2] [i_3 + 1]))));
                        arr_102 [i_26] [i_26] [i_14] [i_26] [i_26] = ((/* implicit */short) var_3);
                    }
                    arr_103 [i_3] [i_8] [i_14] [i_25] = ((/* implicit */short) (-(((((/* implicit */int) var_15)) * (((/* implicit */int) (unsigned char)154))))));
                    var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4233))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12)))))))));
                }
                for (short i_27 = 0; i_27 < 23; i_27 += 4) 
                {
                    arr_106 [i_3 + 2] [i_3] [i_3] [i_8] [i_14] [i_27] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)29120)) ? (((/* implicit */int) (unsigned short)29383)) : (-1961594643)));
                    var_43 = ((/* implicit */unsigned short) var_14);
                    var_44 += (!(((/* implicit */_Bool) (unsigned char)129)));
                    arr_107 [i_3] [i_8] [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)3)))))));
                    arr_108 [i_3 - 2] = (~(1353009828U));
                }
            }
            for (int i_28 = 0; i_28 < 23; i_28 += 4) /* same iter space */
            {
                var_45 += ((/* implicit */unsigned int) ((((/* implicit */long long int) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_13))))) / (8156883995934287346LL)));
                /* LoopSeq 1 */
                for (unsigned char i_29 = 0; i_29 < 23; i_29 += 4) 
                {
                    var_46 = (-(((/* implicit */int) arr_38 [i_3 + 2] [i_3 - 1] [i_3 - 2])));
                    var_47 = ((/* implicit */unsigned int) ((max((((/* implicit */int) var_0)), (1961594642))) << (((((/* implicit */int) ((_Bool) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) - (1)))));
                }
                arr_114 [i_3] [i_8] [i_28] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (arr_10 [i_3])))) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_10)))), ((+((+(251829112)))))));
            }
            /* vectorizable */
            for (int i_30 = 0; i_30 < 23; i_30 += 4) /* same iter space */
            {
                arr_117 [i_3] [i_8] [i_8] [i_30] = ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 1961594645)));
                arr_118 [i_3 - 1] [i_8] [i_8] = ((/* implicit */int) (~(1245033078U)));
            }
            /* LoopSeq 1 */
            for (unsigned short i_31 = 0; i_31 < 23; i_31 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_32 = 0; i_32 < 23; i_32 += 3) 
                {
                    for (unsigned short i_33 = 0; i_33 < 23; i_33 += 1) 
                    {
                        {
                            var_48 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4))))) >= (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_31 [i_3 + 2])))))));
                            var_49 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-20))))) & (13)));
                            arr_129 [i_3] [i_3] [i_8] [i_3] [i_32] [i_33] [i_31] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) 622320795U)) ? (((/* implicit */unsigned long long int) -9)) : (7374030707123617486ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) max((((/* implicit */short) var_14)), (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-29058)))))));
                            var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4233))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_34 = 0; i_34 < 0; i_34 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_35 = 0; i_35 < 23; i_35 += 3) 
                    {
                        var_51 += ((/* implicit */short) ((max((var_9), (((/* implicit */long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_12))))))) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)97)))))));
                        arr_134 [i_31] [i_8] [(short)3] [i_8] [i_35] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_73 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_34 + 1] [i_3 - 1] [i_35] [i_35])) : (var_9))));
                        arr_135 [i_35] [i_8] [i_31] [i_34 + 1] [i_3] [i_31] [i_35] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_8))))) <= (10777431736465916920ULL))) ? (((/* implicit */unsigned int) ((int) -7202645410270902551LL))) : (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (short)29121)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-29120)) | (((/* implicit */int) var_14)))))))));
                    }
                    var_52 = ((/* implicit */int) var_3);
                    var_53 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)35))))))))));
                    var_54 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(var_6)))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))) / (1287442073)));
                }
                /* vectorizable */
                for (unsigned int i_36 = 1; i_36 < 21; i_36 += 1) 
                {
                    arr_138 [i_3] [i_8] [i_31] [i_8] |= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))));
                    var_55 = ((/* implicit */short) ((((/* implicit */int) var_4)) << (((/* implicit */int) arr_47 [i_31] [i_3 + 2]))));
                }
            }
        }
    }
    for (unsigned short i_37 = 0; i_37 < 23; i_37 += 3) 
    {
        /* LoopNest 2 */
        for (short i_38 = 0; i_38 < 23; i_38 += 4) 
        {
            for (short i_39 = 0; i_39 < 23; i_39 += 2) 
            {
                {
                    var_56 = ((/* implicit */int) max((var_56), (((/* implicit */int) max((((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))))))), (((/* implicit */unsigned int) var_13)))))));
                    var_57 *= ((/* implicit */short) var_12);
                }
            } 
        } 
        arr_146 [i_37] = ((/* implicit */signed char) ((long long int) var_1));
    }
}
