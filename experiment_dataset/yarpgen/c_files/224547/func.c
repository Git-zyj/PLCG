/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224547
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
    var_13 = ((/* implicit */_Bool) (signed char)-47);
    var_14 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 -= ((/* implicit */unsigned long long int) arr_5 [i_2]);
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) min((min((arr_1 [i_2] [i_1]), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))), ((~(((/* implicit */int) arr_5 [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) | (((((/* implicit */unsigned int) max((arr_17 [i_3] [i_4]), (2047)))) & ((~(3528679429U))))))))));
                        arr_26 [(signed char)13] [i_3] [i_3] [(signed char)13] = ((/* implicit */short) -1313904900);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            var_17 -= ((/* implicit */signed char) 3528658769U);
            var_18 -= ((/* implicit */unsigned int) min((-390704198), (((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3])) ? (((/* implicit */int) max((var_11), (((/* implicit */short) var_9))))) : (((/* implicit */int) arr_13 [i_7] [8LL]))))));
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)47))));
            var_20 = arr_16 [i_3];
        }
    }
    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (-2046840504852257669LL) : (((/* implicit */long long int) var_7)))) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))))))) : (((unsigned int) (((_Bool)0) ? (var_0) : (-542528012))))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(3134616222828380024LL)))) ? (max(((-(-2571484828838769956LL))), (((/* implicit */long long int) arr_17 [i_12] [i_11])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1710053443U)) ? ((-(((/* implicit */int) (short)-20393)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)59)), ((short)-7281)))))))));
                                var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((int) (short)-902)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) > (691356314U)))))), ((-(((/* implicit */int) arr_23 [i_8]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((min((((/* implicit */unsigned int) arr_20 [i_8] [i_13] [i_14])), (arr_2 [i_9] [i_9]))), (max((((/* implicit */unsigned int) arr_20 [(unsigned char)10] [i_13] [i_9])), (arr_2 [i_8] [i_8]))))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -2571484828838769970LL)) || (((/* implicit */_Bool) 1617782094))))) : (((/* implicit */int) (unsigned char)236))))) ? ((-(((((/* implicit */_Bool) (signed char)-1)) ? (arr_2 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_10]))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) 
                        {
                            arr_52 [i_9] [(short)0] [i_9] [(_Bool)1] [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) (unsigned char)4)) ? (1658366961U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8]))));
                            arr_53 [i_15] [i_9] [i_9] [i_15] [i_15] = ((/* implicit */signed char) (~(var_7)));
                            arr_54 [i_10] [(unsigned char)5] [(unsigned char)8] [i_13] [(unsigned char)5] = ((/* implicit */unsigned char) (_Bool)0);
                            var_26 = var_3;
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8] [i_9])) ? (arr_17 [i_8] [i_8]) : (((/* implicit */int) var_3))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            arr_57 [(signed char)10] [i_8] [i_8] [(signed char)7] [i_10] [(signed char)7] [10U] = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_8] [i_8] [i_8])) >= (((((/* implicit */_Bool) arr_7 [i_8] [i_9] [i_10] [i_8])) ? (1708760385) : (arr_7 [i_8] [i_8] [i_8] [i_9])))));
                            var_28 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                        }
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_62 [i_8] [10] [i_9] [i_10] [i_13] [i_17] [i_10] = arr_11 [i_8];
                            var_29 = ((/* implicit */_Bool) 8094222262260516916LL);
                        }
                        arr_63 [i_8] = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_13])) ? (((/* implicit */int) var_11)) : (var_0))))) - (max(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) -1839816280)) ? (-194464863) : (((/* implicit */int) arr_27 [i_8] [i_9] [i_8]))))))));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_49 [i_8] [i_9] [i_10] [i_9] [i_10] [i_9] [i_8]) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) arr_49 [i_9] [i_9] [i_8] [i_13] [i_10] [i_10] [i_8]))))) ? (((/* implicit */int) (unsigned char)116)) : (max((((((/* implicit */_Bool) (signed char)73)) ? (arr_9 [7U]) : (var_4))), (194464865))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_31 = ((/* implicit */int) max((var_31), ((-(((/* implicit */int) ((_Bool) arr_12 [i_8])))))));
                            arr_66 [i_8] [i_9] [i_10] [i_13] [i_18] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)202)), (min((((((/* implicit */_Bool) arr_2 [(short)8] [i_9])) ? (var_10) : (((/* implicit */unsigned int) 2147483641)))), (min((((/* implicit */unsigned int) var_1)), (3512950505U)))))));
                        }
                        /* vectorizable */
                        for (short i_19 = 0; i_19 < 12; i_19 += 4) 
                        {
                            var_32 = ((/* implicit */int) 3512950505U);
                            var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (3732637151U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_10] [i_9] [i_10]))))))));
                        }
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 3) 
                    {
                        arr_73 [i_9] [8U] [i_9] = (((((~(((/* implicit */int) var_9)))) + (2147483647))) << (((((((/* implicit */_Bool) -3443117778068102388LL)) ? (var_4) : (((/* implicit */int) arr_21 [i_10] [22] [i_9] [i_20])))) - (1878513707))));
                        var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_10)))) ? ((-(arr_60 [i_20] [i_9] [i_20] [i_20] [(unsigned char)6] [i_9] [(unsigned char)6]))) : (((((arr_60 [i_8] [i_8] [i_10] [i_10] [i_10] [i_20] [i_20]) + (2147483647))) >> (((var_1) + (1728968201)))))));
                        /* LoopSeq 1 */
                        for (signed char i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_8] [i_8]))))) ? (((((/* implicit */_Bool) arr_30 [i_10])) ? (((/* implicit */int) var_2)) : (var_5))) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_11))));
                            arr_76 [3LL] [i_20] [i_20] = ((/* implicit */unsigned short) ((((unsigned int) (_Bool)1)) * (max((arr_3 [21LL] [i_9] [i_9]), (((/* implicit */unsigned int) var_9))))));
                            var_36 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8])) ? (((((/* implicit */unsigned int) var_1)) & (3638746175U))) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) arr_40 [i_20] [i_10] [3ULL] [i_8])) : (((/* implicit */int) arr_30 [i_21]))))))), (((/* implicit */unsigned int) ((arr_32 [i_10] [i_20] [(unsigned char)0]) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_6)))))));
                        }
                        /* LoopSeq 4 */
                        for (int i_22 = 0; i_22 < 12; i_22 += 2) 
                        {
                            var_37 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (signed char)52)))));
                            arr_81 [i_8] [i_9] [i_9] [i_20] [i_22] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_11)), (var_5))))));
                            var_38 = ((/* implicit */_Bool) min((((((/* implicit */int) min((arr_23 [i_22]), (((/* implicit */unsigned char) var_3))))) + (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) arr_6 [i_8] [i_9] [i_9])) : (((/* implicit */int) arr_13 [i_9] [i_9])))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_10] [i_8] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (11806411171609035639ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8] [(_Bool)0]))))))));
                            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)3737)) ? (((arr_75 [i_8] [i_9] [i_10] [i_9] [i_22] [i_9]) ? (((/* implicit */int) arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) (signed char)-45)))) : (((/* implicit */int) var_6)))))));
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_40 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min(((~(var_5))), (((/* implicit */int) (signed char)126))))), (((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_10] [(unsigned char)20])) ? (min((((/* implicit */unsigned int) var_2)), (3973098768U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_78 [i_8] [7U] [i_23])))))))));
                            arr_84 [(signed char)7] [i_9] [11] [i_9] [i_9] [7U] [i_20] = ((/* implicit */unsigned int) (~(var_5)));
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (~((~(var_12))))))));
                        }
                        for (unsigned int i_24 = 0; i_24 < 12; i_24 += 2) 
                        {
                            var_42 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [7] [7] [i_10] [i_20] [i_20]))) >= (var_10)))) > (((/* implicit */int) arr_58 [i_10] [i_9] [i_24] [i_8] [i_24] [i_9]))));
                            var_43 = var_4;
                            arr_88 [i_24] [i_24] [i_24] [5LL] [i_24] [i_24] [i_24] = ((/* implicit */long long int) arr_70 [i_8] [i_8] [i_8] [i_20] [(_Bool)1] [(_Bool)1]);
                            var_44 = -2147483644;
                        }
                        for (int i_25 = 0; i_25 < 12; i_25 += 1) 
                        {
                            var_45 = var_0;
                            var_46 = ((/* implicit */long long int) ((min((arr_32 [2ULL] [i_9] [i_25]), (arr_32 [i_8] [i_10] [i_25]))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_32 [i_9] [i_20] [i_20])) : (((/* implicit */int) arr_32 [i_9] [i_10] [i_20]))))));
                            var_47 = ((/* implicit */int) arr_46 [8LL] [i_9] [i_20] [i_25]);
                            var_48 = ((/* implicit */short) 9223372036854775807LL);
                            var_49 -= ((/* implicit */unsigned long long int) min(((~(2924770019U))), (((/* implicit */unsigned int) ((_Bool) var_7)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_26 = 0; i_26 < 12; i_26 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-30247)) & (((/* implicit */int) arr_64 [i_10] [i_9] [i_9] [i_26] [i_26] [i_9] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50302)) && (((/* implicit */_Bool) (signed char)-55)))))) : (arr_74 [i_8] [i_10] [8LL] [i_26] [i_9] [i_9])));
                        arr_95 [i_8] [i_10] [i_9] [i_9] = ((/* implicit */unsigned int) ((short) arr_65 [i_8] [i_8] [i_8] [i_8] [i_8]));
                    }
                }
            } 
        } 
        arr_96 [i_8] &= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_93 [(signed char)2] [i_8] [i_8] [i_8] [5LL])) ? (1313904899) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8] [i_8])))))));
        var_51 *= ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_21 [i_8] [(signed char)16] [i_8] [i_8]), (arr_21 [i_8] [i_8] [i_8] [i_8])))) * (((/* implicit */int) min((arr_21 [i_8] [i_8] [i_8] [i_8]), (var_6))))));
    }
    for (unsigned short i_27 = 0; i_27 < 17; i_27 += 3) 
    {
        var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) var_11))));
        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [16])))) : (((/* implicit */int) ((unsigned char) arr_27 [i_27] [i_27] [i_27])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2723296671U)))) - (arr_3 [i_27] [i_27] [i_27]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50302)) ? (var_4) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (-(var_1)))) : ((-(var_7)))))));
    }
    for (unsigned int i_28 = 0; i_28 < 10; i_28 += 4) 
    {
        arr_102 [i_28] = ((((/* implicit */_Bool) ((((((/* implicit */long long int) var_1)) > (arr_94 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]))) ? (((/* implicit */unsigned int) max((var_0), (arr_39 [i_28] [i_28] [i_28] [i_28] [i_28])))) : (var_12)))) ? (var_5) : ((-(min((253952), (((/* implicit */int) arr_11 [i_28])))))));
        var_54 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_69 [i_28] [i_28] [i_28] [i_28] [i_28]))))), (((0U) - (((/* implicit */unsigned int) (-(-1827162060)))))));
        var_55 = ((/* implicit */long long int) ((arr_38 [i_28]) > (((/* implicit */int) ((signed char) var_10)))));
        var_56 = ((short) ((var_9) && (((/* implicit */_Bool) (unsigned char)116))));
    }
}
