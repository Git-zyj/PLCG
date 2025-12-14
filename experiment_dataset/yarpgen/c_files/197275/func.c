/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197275
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) (_Bool)1);
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned short) (-((-(((/* implicit */int) (unsigned short)54523))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    var_22 += arr_1 [(_Bool)1];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_10 [i_3] [i_2 + 2] [i_1 + 1] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 3U)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)54523)) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_17))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 3078909800U);
                        arr_12 [15U] [i_2 + 1] [i_1] [i_0] = ((/* implicit */short) arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_2 + 3]);
                    }
                }
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_17 [i_1] [i_5] |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_5] [i_4] [6ULL] [12ULL] [9U])) <= (((/* implicit */int) arr_2 [(_Bool)1] [i_4])))))) < (((((/* implicit */_Bool) 308132478U)) ? (416323115391880419ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3182))))))))));
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (416323115391880426ULL))) ? (((arr_0 [i_0]) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_8 [(unsigned short)7])) : (17360490346794483366ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31226)) ? (((/* implicit */int) (unsigned short)2875)) : (((/* implicit */int) (unsigned short)11012))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_24 ^= (short)-2935;
                        var_25 *= ((/* implicit */_Bool) arr_14 [i_0] [i_1] [(unsigned short)5] [i_6]);
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 13869374715434657917ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7859))));
                        var_27 = ((/* implicit */unsigned short) 20U);
                        var_28 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (2958729498419484943ULL)));
                    }
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) max((567971406U), (4194303U))))));
                        var_30 = ((/* implicit */unsigned int) max(((+(max((arr_9 [i_1] [i_4] [(short)5]), (((/* implicit */unsigned long long int) 308132495U)))))), (((/* implicit */unsigned long long int) ((var_1) || (((/* implicit */_Bool) (unsigned short)22)))))));
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 1409438774U)) : (18446744073709551615ULL))))));
                        arr_25 [i_7] [i_4] [i_1 + 1] [7ULL] = ((/* implicit */unsigned short) min((2199023255552ULL), (((/* implicit */unsigned long long int) (unsigned short)988))));
                        var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 7647631186717348918ULL))) ? ((+(arr_8 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1 + 1] [(short)13] [i_7])))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_33 = ((/* implicit */short) 3078909800U);
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (unsigned short)59739))));
                        var_35 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_10)))));
                    }
                }
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16252928U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54523))) : (2096640U)))) / (((15460159382877072454ULL) | (((/* implicit */unsigned long long int) 1564604539U))))))) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_1 - 1] [i_1 + 1]))));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        arr_36 [(short)10] [i_0] [i_1] [i_9] [i_9] [i_0] = ((/* implicit */short) (((+(arr_26 [i_9] [i_9]))) << (((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 0U)) : (985162418487296ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((var_19) ? (arr_3 [i_0] [i_1] [i_9]) : (var_16))))) - (9708799553314905526ULL)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 1; i_11 < 13; i_11 += 3) 
                        {
                            var_37 -= ((/* implicit */short) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (var_6) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_11 + 3])) ? (1048574U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) ((max((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) var_8)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (_Bool)1))));
                            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) 626195730U))));
                            arr_40 [i_0] |= ((/* implicit */unsigned short) (short)32767);
                            arr_41 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_10] [i_0] |= 696299176U;
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned short) 2096640U);
                            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647ULL)) ? (((/* implicit */int) (unsigned short)11027)) : (((/* implicit */int) (short)-6130))));
                        }
                        for (short i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            var_42 *= ((/* implicit */short) arr_5 [i_0] [i_9] [i_13]);
                            var_43 = max(((((_Bool)1) ? (((/* implicit */unsigned long long int) 3361359573U)) : (((((/* implicit */_Bool) 1073676288U)) ? (2986584690832479164ULL) : (((/* implicit */unsigned long long int) 4294967295U)))))), (((/* implicit */unsigned long long int) 3078909806U)));
                            var_44 = (+(((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9767))) : (((var_19) ? (arr_34 [i_0] [i_1] [i_0] [i_10] [7ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_0] [i_9] [i_9] [i_13]))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            {
                                arr_54 [i_9] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3609767560U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_9]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0] [i_0] [i_0])) * (((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) (short)30720)) ? (((/* implicit */unsigned long long int) 3078909800U)) : (15460159382877072454ULL))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) 15282233143687218275ULL))))))));
                                var_45 *= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) 0U)) / (68719476736ULL)))));
                            }
                        } 
                    } 
                    var_46 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) (short)-4))));
                    var_47 -= ((/* implicit */unsigned short) max((942688923U), (16384U)));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_16 = 1; i_16 < 20; i_16 += 4) 
    {
        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            {
                var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_56 [i_16 - 1] [i_16 + 1]))))) ? (((arr_56 [i_16 + 1] [i_16 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_16 + 1] [i_16 - 1]))) : (11299338168752799986ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3380212402U)) ? (((/* implicit */int) arr_56 [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) arr_56 [i_16 - 1] [i_16 - 1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    for (unsigned int i_19 = 2; i_19 < 20; i_19 += 1) 
                    {
                        {
                            var_49 = ((/* implicit */_Bool) min((var_49), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_16 + 2] [i_19 + 2] [i_19 - 1] [i_19 + 1]))) > ((-(9417087394838846460ULL))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41703))) >= (3188912441U)))))));
                            var_50 = ((/* implicit */unsigned short) (+((((_Bool)1) ? (((/* implicit */int) max((arr_59 [i_16]), (((/* implicit */unsigned short) (short)-32760))))) : (((/* implicit */int) arr_56 [i_16 + 2] [i_16]))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 1) 
                            {
                                arr_66 [(unsigned short)14] [(unsigned short)14] [i_18] [i_19] [i_20] [i_16] [i_17] = ((/* implicit */unsigned long long int) ((arr_57 [i_16]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_16]))) : (arr_61 [i_16] [16ULL] [i_16 + 2] [i_19 - 2])));
                                var_51 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_67 [i_16] [i_16] [(short)21] [i_19] [(_Bool)1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)11031))));
                            }
                            for (unsigned long long int i_21 = 3; i_21 < 19; i_21 += 4) 
                            {
                                var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) ((unsigned int) 7U)))));
                                var_53 = ((/* implicit */unsigned short) arr_68 [i_16] [i_17] [i_18] [i_16] [18ULL]);
                                var_54 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_62 [i_16] [i_16] [i_16 + 1] [i_16 + 1])) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1324151002U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)0)))))));
                            }
                            /* vectorizable */
                            for (short i_22 = 0; i_22 < 22; i_22 += 1) 
                            {
                                var_55 ^= ((/* implicit */_Bool) ((arr_57 [i_18]) ? (((/* implicit */int) (unsigned short)19)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_8))))));
                                var_56 += ((/* implicit */unsigned int) ((unsigned short) arr_72 [i_18]));
                                var_57 -= ((/* implicit */unsigned long long int) 4294950928U);
                            }
                        }
                    } 
                } 
                var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (unsigned short)65066)) : (((/* implicit */int) (short)-32759)))) ^ (((/* implicit */int) var_18))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9)))))));
            }
        } 
    } 
    var_59 = ((/* implicit */short) (((_Bool)1) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_60 |= ((/* implicit */unsigned long long int) (short)10200);
}
