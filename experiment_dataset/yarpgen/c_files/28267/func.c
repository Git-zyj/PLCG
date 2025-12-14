/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28267
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_0 [i_1])) : (arr_4 [i_0]))))));
            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11)))))))));
        }
        var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_2])) << (((/* implicit */int) arr_6 [i_2]))));
        arr_7 [6] [(_Bool)1] |= ((/* implicit */unsigned int) (-(18446744073709551615ULL)));
        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_2]))));
        arr_8 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-17761)) && (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */int) ((2080170617) != (((/* implicit */int) (short)-23450))))) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_3 - 1]))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                        var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_3 - 1]))));
                        arr_20 [i_2] [i_2] [i_4] [i_5] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
                        arr_21 [i_5] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned short i_6 = 3; i_6 < 19; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_27 = ((/* implicit */int) var_5);
                    arr_30 [i_6] [i_7] [6LL] [i_6] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_9)) | (((/* implicit */int) var_15)))))))));
                    var_28 = ((/* implicit */unsigned long long int) (+(((unsigned int) ((((/* implicit */_Bool) 1073741823ULL)) ? (2096142377) : (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 2; i_10 < 19; i_10 += 2) 
            {
                {
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((short) var_9)))));
                    arr_36 [i_6] [i_9] [(short)11] = ((/* implicit */_Bool) min((1073741804ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)57659)) : (((/* implicit */int) (short)23450)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned char) (_Bool)1);
                        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(min(((_Bool)1), ((_Bool)1))))))) < (((((/* implicit */_Bool) arr_28 [i_6])) ? ((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) arr_33 [i_6]))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_13 = 3; i_13 < 19; i_13 += 2) /* same iter space */
                        {
                            arr_45 [i_13] [(_Bool)1] [i_6] [i_6] [i_9] [(_Bool)1] = ((/* implicit */unsigned char) min((arr_39 [i_6] [10] [4ULL] [i_6]), (var_13)));
                            var_32 *= ((/* implicit */unsigned long long int) ((((var_10) ? ((+(((/* implicit */int) arr_38 [i_13] [i_12] [i_10] [i_9])))) : (((((/* implicit */_Bool) 7690799312458145526LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))))) != (((/* implicit */int) (!((!((_Bool)1))))))));
                            arr_46 [0ULL] [i_6] [(signed char)7] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_34 [i_10 + 1] [i_6 - 3]))) * (((arr_31 [i_6]) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((_Bool) arr_24 [i_6])))))));
                            arr_47 [i_6] [i_13] [16] [i_10] [(unsigned short)16] [i_6] = var_7;
                        }
                        for (int i_14 = 3; i_14 < 19; i_14 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_6])) * (min((1938617763), ((~(((/* implicit */int) (short)-22427))))))));
                            arr_50 [i_6] [i_6] [i_6] [6ULL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned long long int) var_6)) / (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_10 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))));
                            arr_51 [i_6] [i_6] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) 18446744072635809833ULL)) ? (((/* implicit */int) arr_38 [i_6] [(unsigned short)16] [i_10] [i_12])) : (((((/* implicit */_Bool) (short)-24469)) ? (((/* implicit */int) (short)22427)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) arr_40 [i_6])) : ((~(((/* implicit */int) var_5))))));
                            arr_52 [i_6 - 2] [i_9] [i_10] [i_6] [i_14 - 1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_24 [i_6]), (((/* implicit */unsigned short) var_5)))))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((_Bool) ((var_18) ? (((/* implicit */int) arr_26 [i_6])) : (((/* implicit */int) (unsigned short)65535))))))));
                            arr_53 [i_6] [i_6] [i_10] [i_12] [i_14] [i_9] = ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) ((_Bool) arr_28 [i_6]))) : (((var_13) ? (arr_23 [i_6]) : (arr_23 [i_6])))));
                        }
                        for (int i_15 = 3; i_15 < 19; i_15 += 2) /* same iter space */
                        {
                            var_34 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_37 [i_6] [(_Bool)1] [i_6] [i_12] [18])), ((-(((((/* implicit */_Bool) (short)-23450)) ? (((/* implicit */unsigned long long int) arr_42 [i_6] [i_9] [i_6] [i_10 - 1] [i_12] [i_15])) : (arr_49 [i_6] [i_15])))))));
                            arr_56 [i_6] [i_10] = ((/* implicit */int) var_16);
                            var_35 = ((/* implicit */signed char) ((unsigned short) ((min((arr_23 [i_6]), (((/* implicit */int) var_16)))) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (arr_42 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_12] [19U]))))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13476388654502376572ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((-(max((var_12), (((/* implicit */unsigned long long int) arr_28 [i_6]))))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_37 = var_7;
                            arr_59 [4U] [i_9] [(unsigned char)6] [i_6] [i_12] [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) arr_55 [9] [(_Bool)1] [(signed char)3] [1U] [(signed char)0]))));
                        }
                        var_38 = var_1;
                        arr_60 [i_6] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_3)), (var_11)))));
                    }
                    var_39 -= ((/* implicit */signed char) ((min(((+(((/* implicit */int) arr_22 [i_9])))), (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (short)-29273)) + (29278))))))) + (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_39 [i_10] [(unsigned short)14] [i_9] [i_10]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_66 [i_6 - 1] [i_9] [i_17] [i_17] [i_18] [i_6] [i_17] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> ((((~(((/* implicit */int) (_Bool)1)))) + (8)))));
                            arr_67 [(_Bool)1] [15] [(unsigned char)16] [i_10] [i_17] [(_Bool)1] [i_6] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_4))))));
                        }
                        var_40 = ((/* implicit */_Bool) var_14);
                        var_41 = ((/* implicit */signed char) (-(arr_32 [i_6 - 1] [i_6])));
                        var_42 *= ((/* implicit */unsigned char) var_6);
                    }
                }
            } 
        } 
        var_43 = var_7;
        arr_68 [i_6] = (i_6 % 2 == 0) ? (((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_17)))) == (((((((/* implicit */int) arr_63 [i_6] [17ULL] [i_6] [i_6])) + (2147483647))) >> (((/* implicit */int) arr_41 [i_6 - 2] [i_6] [i_6] [i_6])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)0))))), ((-(1073741804ULL)))))))) : (((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_17)))) == (((((((((/* implicit */int) arr_63 [i_6] [17ULL] [i_6] [i_6])) - (2147483647))) + (2147483647))) >> (((/* implicit */int) arr_41 [i_6 - 2] [i_6] [i_6] [i_6])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)0))))), ((-(1073741804ULL))))))));
        arr_69 [i_6] [i_6] = ((/* implicit */unsigned short) (~((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) : (1073741823ULL)))));
    }
    /* LoopSeq 2 */
    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
    {
        arr_73 [i_19] = ((/* implicit */int) (_Bool)0);
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 22; i_20 += 2) 
        {
            for (unsigned int i_21 = 2; i_21 < 19; i_21 += 2) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    {
                        var_44 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) (unsigned short)4858)))));
                        arr_82 [(unsigned short)7] [i_19] [i_19] [i_20] [i_21] [(_Bool)1] = ((((arr_72 [i_19]) ? (max((((/* implicit */unsigned long long int) var_0)), (18446744073709551615ULL))) : (((((/* implicit */_Bool) var_4)) ? (8221114454900820312ULL) : (arr_77 [i_19] [20LL]))))) * (arr_75 [i_19]));
                        arr_83 [(unsigned short)19] [i_19] [i_21] [i_19] [(_Bool)1] = var_12;
                        arr_84 [i_19] [i_20] [i_20] [i_19] [i_19] = (!((_Bool)1));
                    }
                } 
            } 
        } 
        arr_85 [i_19] = ((/* implicit */int) min((((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1)))), (min((((/* implicit */unsigned short) arr_72 [i_19])), (var_8)))));
    }
    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
    {
        arr_90 [i_23] [i_23] = (-(((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_31 [i_23])) : (((/* implicit */int) arr_40 [i_23])))));
        var_45 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
        var_46 = ((/* implicit */short) max((((((/* implicit */_Bool) (-(-1)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (((unsigned int) var_9)))), (((/* implicit */unsigned int) ((arr_25 [i_23 - 1] [i_23] [i_23]) ? (((/* implicit */int) ((short) (unsigned short)0))) : (((/* implicit */int) var_0)))))));
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_80 [i_23] [i_23]))) >> (((((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_23] [i_23] [i_23]))) : (((var_16) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))) - (8674876485257713189LL)))));
    }
    var_48 |= ((/* implicit */unsigned long long int) var_2);
}
