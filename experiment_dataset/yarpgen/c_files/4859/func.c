/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4859
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-39))));
        arr_3 [i_0] = min((((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))), (max((arr_1 [i_0]), (8386560))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            var_19 |= ((((/* implicit */_Bool) arr_4 [i_1 - 4])) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) 8386560)) ? (((/* implicit */int) (unsigned short)60736)) : (((/* implicit */int) (_Bool)1)))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_4 [i_1 + 2]) - (arr_1 [i_1 - 2])));
        }
    }
    /* LoopSeq 4 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) ((int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-30915)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (unsigned short)65535))))), ((+(arr_8 [20U] [13LL]))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            arr_14 [9U] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((arr_13 [i_3 - 1] [i_3] [i_3 - 2]), (arr_13 [i_3 - 1] [i_3 - 2] [i_3 - 2])))), (((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 - 2])) ? (max((arr_12 [1] [i_3 - 1] [i_3 - 2]), (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) arr_13 [i_3 + 2] [i_3 - 1] [i_3 - 2]))))));
            arr_15 [i_2] = ((/* implicit */unsigned short) (-(arr_8 [i_3] [i_2])));
        }
    }
    for (signed char i_4 = 3; i_4 < 10; i_4 += 3) 
    {
        arr_19 [i_4 - 3] = ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4 - 3] [i_4 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_8 [i_4] [i_4])))), (((unsigned long long int) arr_16 [i_4])))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_4 - 3] [i_4 - 3] [i_4])) ? (((/* implicit */int) arr_18 [i_4])) : (arr_13 [i_4 - 3] [i_4 - 3] [i_4 - 3]))), (((((/* implicit */int) (signed char)96)) - (((/* implicit */int) (signed char)-72))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_22 [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)51885)) : (((/* implicit */int) (signed char)50))))) == ((-(10408408777397027813ULL)))));
            var_20 += ((/* implicit */short) arr_12 [i_4 + 2] [i_4 - 2] [i_4 - 1]);
            arr_23 [i_5] [i_5] = ((/* implicit */unsigned short) var_11);
            var_21 *= ((/* implicit */signed char) (~((-(var_7)))));
            arr_24 [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)116))));
        }
        for (short i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_21 [i_4] [i_6]), (((/* implicit */unsigned int) var_10))))) - (min((((/* implicit */unsigned long long int) arr_16 [i_4])), (8038335296312523808ULL)))))) ? (((((/* implicit */_Bool) (short)-29961)) ? (((/* implicit */int) arr_17 [i_4 + 1] [(signed char)10])) : (((/* implicit */int) max(((unsigned short)10), ((unsigned short)62139)))))) : (((/* implicit */int) arr_20 [i_4 + 2] [12U]))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [i_6 + 1] [i_4 - 2])) ? (3213223941322509733ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                var_24 = ((/* implicit */_Bool) arr_21 [i_4] [(short)9]);
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_37 [i_7] [i_6] &= ((unsigned char) ((((/* implicit */_Bool) 2147483648U)) ? (9078238906628051405LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5630)))));
                            arr_38 [i_4 - 3] [i_6] [i_7] [i_8] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_8] [i_7])) ? (((unsigned int) 1)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -214494513861845754LL)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-91)))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                arr_41 [i_10] [i_10] [i_4 + 1] [i_4 + 1] = ((/* implicit */int) min((2131739847U), (((/* implicit */unsigned int) (signed char)73))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 10; i_11 += 3) 
                {
                    for (unsigned int i_12 = 3; i_12 < 9; i_12 += 1) 
                    {
                        {
                            arr_48 [(unsigned short)9] [(short)10] [i_10] [(short)10] [i_12] = ((/* implicit */short) (+((+(arr_10 [i_6 + 1])))));
                            var_25 *= ((/* implicit */short) (+((~(((/* implicit */int) var_14))))));
                            arr_49 [i_11] [i_11] [i_10] [i_11 - 1] [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((14948914075671511007ULL), (((/* implicit */unsigned long long int) (signed char)125))))) ? (((/* implicit */int) ((short) -750043217))) : (((((/* implicit */_Bool) arr_13 [(short)10] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-32611)))))), (((/* implicit */int) (unsigned char)71))));
                            arr_50 [i_4] [i_6] [i_10] [i_11 + 1] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((-(arr_39 [i_6] [i_6] [i_10] [i_12 + 2]))), (((/* implicit */int) arr_17 [i_4] [i_6 - 1])))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_16 [i_4 - 1]) ? (((/* implicit */int) arr_40 [i_4 + 1] [i_4] [i_6 + 1] [i_6 + 2])) : (((/* implicit */int) ((((/* implicit */_Bool) -8101436972348665245LL)) && (((/* implicit */_Bool) arr_10 [i_10]))))))))));
            }
            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_28 [12LL] [i_6] [i_4 + 2] [i_4])) ? (716493632) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_52 [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_13] [i_13])))))), (((/* implicit */int) arr_30 [i_13]))));
                var_28 += ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_10 [i_6 - 1]) | (arr_10 [i_6 + 1])))), (((((/* implicit */_Bool) 14948914075671511010ULL)) ? (((((/* implicit */_Bool) (signed char)-38)) ? (2668831582U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))) : (((/* implicit */unsigned int) 802266095))))));
            }
        }
        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_29 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_17 [i_4] [i_4 + 3])) ? (((/* implicit */int) arr_17 [i_4] [i_4 - 3])) : (((/* implicit */int) arr_17 [(unsigned short)2] [i_4 - 1])))), ((-(((/* implicit */int) arr_17 [i_4] [i_4 - 1]))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    arr_60 [i_16] [i_4] [i_14] [i_14] [i_4] [9U] = ((/* implicit */short) arr_26 [i_4 - 1]);
                    arr_61 [i_16] [i_15] [i_14] [i_4] [i_16] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_26 [i_4 + 1]))));
                }
                arr_62 [i_4] [i_14] [i_15] = ((/* implicit */unsigned short) ((arr_8 [i_4 + 2] [i_15]) / (((/* implicit */long long int) arr_39 [i_4] [i_14] [i_15] [i_4 + 3]))));
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_4 + 1] [i_4 + 1] [i_4 + 1] [7ULL] [i_4 - 3])) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) arr_54 [i_4 + 3] [i_14]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-77)))) : (((((/* implicit */long long int) var_2)) / (arr_57 [i_4] [i_14] [i_15] [i_17] [i_14] [i_15])))));
                    arr_65 [5] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_55 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15603))) : (arr_35 [(short)9] [(short)9])))));
                    var_31 &= ((/* implicit */short) arr_40 [i_17] [i_15] [i_14] [i_4]);
                }
                for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    arr_68 [i_18] [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) arr_10 [i_15]);
                    arr_69 [i_4] [i_4 - 3] [i_14] [i_15] [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))));
                    var_32 = ((/* implicit */signed char) ((int) (-(arr_39 [(_Bool)1] [i_18] [i_4] [(unsigned short)0]))));
                }
                var_33 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) var_12)))));
            }
            for (short i_19 = 3; i_19 < 11; i_19 += 1) 
            {
                arr_73 [(unsigned short)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1883813779)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) arr_42 [i_4] [i_4] [i_4] [i_14] [i_19]))))) ? (((((/* implicit */_Bool) 9988739575086288144ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) : (9078238906628051415LL))) : (((/* implicit */long long int) ((int) -802266087)))));
                arr_74 [i_4] [i_14] [i_19 - 2] = ((/* implicit */long long int) arr_29 [(_Bool)1] [i_19 - 3] [i_14]);
                arr_75 [i_4] [i_4] [i_14] [i_19 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_11)), (arr_63 [i_4] [i_4] [11ULL] [11ULL] [(short)4]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_4] [i_14] [(signed char)12] [i_4])) ? (((/* implicit */int) arr_44 [i_4] [i_14] [i_4] [i_14])) : (((/* implicit */int) arr_20 [(signed char)6] [(signed char)6])))))))) ? ((((!(((/* implicit */_Bool) (short)-15)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_4 + 1] [i_14]))) : (((((/* implicit */_Bool) arr_43 [i_4])) ? (arr_43 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_4]))))))) : (((/* implicit */long long int) max((arr_12 [i_4 - 1] [i_4 - 3] [1LL]), (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) << (((((/* implicit */int) (unsigned short)60742)) - (60732)))))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_20 = 2; i_20 < 10; i_20 += 1) 
            {
                var_34 += ((/* implicit */int) arr_17 [i_4 - 3] [i_14]);
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7810263742108831793LL)) ? (((/* implicit */int) (unsigned short)8923)) : (((/* implicit */int) (short)-32611))));
            }
        }
        for (signed char i_21 = 2; i_21 < 12; i_21 += 4) 
        {
            arr_82 [i_4] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_70 [i_4 + 2] [i_4] [i_4]) ? (((/* implicit */int) arr_80 [(short)7] [(unsigned short)5])) : (((/* implicit */int) arr_42 [i_4] [i_21 + 1] [i_21] [i_21] [i_21]))))) && (arr_36 [i_21 - 1] [i_4 + 3] [i_4 - 2] [i_4 + 1] [i_4] [i_4]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_4 - 3] [i_4 - 3] [i_4 - 3])) ? (((((/* implicit */_Bool) arr_57 [i_4] [6U] [i_21] [i_21] [i_21] [i_21 - 2])) ? (((/* implicit */int) arr_70 [i_4] [i_4] [i_21 + 1])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_21 - 2] [(short)4] [i_4 - 2] [i_4 - 2])) || (((/* implicit */_Bool) arr_56 [i_21] [i_4] [i_4]))))))))));
            arr_83 [i_21 + 1] [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_57 [i_4 + 1] [i_21 - 2] [i_21] [i_21] [i_21 - 2] [i_21 - 2])) ? (((/* implicit */int) arr_47 [i_4 - 1] [i_21 - 2] [i_21 - 2] [i_4] [i_4 - 3])) : (((/* implicit */int) arr_47 [i_4] [8] [i_4] [i_21] [i_21 + 1]))))));
        }
        var_36 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (short)22428))))) ? (min((((/* implicit */unsigned int) ((arr_36 [i_4] [i_4 - 3] [i_4 + 3] [i_4] [i_4 - 3] [i_4]) || (((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_4 - 2])) ? (var_1) : (((/* implicit */unsigned int) 750043194)))))) : (((/* implicit */unsigned int) max(((~(-802266101))), (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_22 = 1; i_22 < 7; i_22 += 1) 
    {
        var_37 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) : (arr_35 [i_22] [1LL]))))) ? (((((/* implicit */_Bool) arr_80 [i_22 + 3] [i_22 + 2])) ? (((/* implicit */int) arr_80 [i_22 + 3] [i_22 + 2])) : (((/* implicit */int) arr_80 [i_22 + 3] [i_22 + 2])))) : (arr_39 [7ULL] [i_22] [i_22] [i_22 - 1])));
        arr_86 [i_22 + 3] = ((((/* implicit */_Bool) arr_66 [i_22] [i_22] [i_22] [3LL])) ? (((((/* implicit */_Bool) arr_85 [i_22])) ? (((/* implicit */int) arr_85 [i_22 + 1])) : (((/* implicit */int) arr_85 [i_22 + 1])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_80 [i_22] [i_22 + 2]))))) ? (((/* implicit */int) arr_55 [i_22 + 2])) : (((/* implicit */int) (_Bool)1)))));
        arr_87 [i_22 - 1] [i_22 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_22] [i_22 + 3] [i_22] [i_22])) ? (((((/* implicit */_Bool) var_1)) ? (arr_77 [i_22]) : (9078238906628051399LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_80 [i_22] [i_22])) ? (((/* implicit */int) arr_54 [i_22] [i_22])) : (((/* implicit */int) var_4)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) 1920899734U))), (max((arr_47 [i_22] [i_22 + 3] [i_22] [i_22] [i_22]), (arr_2 [i_22 - 1]))))))));
    }
    /* vectorizable */
    for (unsigned short i_23 = 2; i_23 < 18; i_23 += 3) 
    {
        arr_92 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_88 [i_23 + 1] [i_23 - 1])) >= (((/* implicit */int) arr_88 [i_23 + 2] [i_23 + 2]))));
        arr_93 [i_23] [i_23] = ((/* implicit */int) (((((_Bool)1) ? (9078238906628051417LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9632))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)321)))));
        var_38 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_90 [i_23 + 2]))));
    }
}
