/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217945
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
    var_13 = (!(((/* implicit */_Bool) 2358420529U)));
    var_14 = (~(((int) var_12)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [2])) ? (((((/* implicit */_Bool) (short)10385)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32399))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2113691954U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)21777)))))));
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))));
        arr_5 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */short) arr_6 [i_1] [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1]);
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) -777632145);
                    arr_14 [i_2] [14U] = ((/* implicit */unsigned int) var_6);
                    var_17 ^= 8390505267004781622LL;
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
    {
        var_18 = ((/* implicit */long long int) arr_18 [i_4 + 2]);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)65535)))))));
    }
    /* LoopSeq 2 */
    for (short i_5 = 2; i_5 < 8; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (((unsigned long long int) 2358420538U)) : (((/* implicit */unsigned long long int) var_7))));
        var_21 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) (+(777632129)))) : (((((/* implicit */_Bool) (short)22088)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15417))) : (2181275341U)))))), (((((/* implicit */_Bool) arr_0 [i_5 + 3])) ? (((/* implicit */unsigned long long int) arr_0 [i_5 + 4])) : (var_6))));
        arr_21 [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-6644)), ((unsigned short)31825)))) : (((/* implicit */int) ((((/* implicit */_Bool) 17003144060117844122ULL)) || (((/* implicit */_Bool) arr_0 [i_5]))))))) + (((/* implicit */int) max(((short)32767), (((/* implicit */short) (_Bool)0)))))));
    }
    for (short i_6 = 2; i_6 < 8; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            for (short i_8 = 4; i_8 < 10; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_22 += (((!(((/* implicit */_Bool) (short)-17857)))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))) : (((/* implicit */int) arr_26 [i_6 - 2] [i_8 + 1] [i_10])));
                                arr_36 [i_6] [i_9] [i_8] [i_9] = ((/* implicit */_Bool) min((((/* implicit */int) var_8)), ((((!(((/* implicit */_Bool) 8390505267004781636LL)))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)26968)))) : (((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) -137077640)) ? ((~(((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) (short)-21474)), (min((((/* implicit */int) (unsigned char)252)), (arr_13 [(_Bool)1]))))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_40 [i_6] [1] [(_Bool)1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_33 [8ULL] [8ULL] [i_11] [(unsigned short)4] [8ULL] [i_6 + 3])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_6 + 1] [12ULL])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_7] [i_7] [i_8] [i_8 - 2] [i_8 - 4] [i_8])))))));
                        var_24 ^= ((/* implicit */_Bool) var_10);
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_6])) != (((/* implicit */int) arr_17 [i_8 + 1]))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) 1162226077U)))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((-6987417004126828138LL), (((/* implicit */long long int) (_Bool)1)))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) var_3);
                        var_29 = ((/* implicit */short) ((min((((var_2) ? (1346381152U) : (1020849722U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))) >= ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6 + 3] [i_12]))) : (arr_2 [i_6])))));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) arr_12 [0ULL] [0ULL]))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                    {
                        arr_46 [i_6] [i_7] [i_8] [i_13] = ((/* implicit */short) var_1);
                        arr_47 [i_6 + 2] [i_13] [i_7] [i_13] = (~(((/* implicit */int) arr_26 [i_6 + 2] [i_6 + 3] [i_8 - 4])));
                        var_31 = ((/* implicit */short) ((long long int) (short)-29112));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (3255340743U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [i_7] [i_7] [i_8] [i_13] [i_8] [i_6 - 2]))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) (unsigned char)249)), ((short)32512)))), (((((/* implicit */_Bool) (short)-22913)) ? (var_9) : (((/* implicit */int) var_8)))))))));
                        arr_51 [i_8] [i_7] [i_7] [i_8] = ((/* implicit */short) 10U);
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        arr_54 [i_6 - 1] [i_15] [10U] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) var_9)) > (9193786792506253227ULL)))), (arr_11 [i_8 - 1] [i_7]))))) >= (2948586144U)));
                        var_34 = ((/* implicit */short) min(((((_Bool)1) ? (((((/* implicit */long long int) ((/* implicit */int) (short)28216))) | (908946288471266387LL))) : (((/* implicit */long long int) max((1936546768U), (((/* implicit */unsigned int) 945131118))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39308)) ? (-945131118) : (((/* implicit */int) (_Bool)1))))))))));
                    }
                    for (short i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_17 = 4; i_17 < 10; i_17 += 1) 
                        {
                            arr_60 [i_17] [i_7] [i_8] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (short)24473)), (1054466885U))), (((/* implicit */unsigned int) arr_53 [i_17] [i_16] [i_8] [6] [i_17]))))) ? (((((/* implicit */_Bool) arr_17 [i_6])) ? (min((((/* implicit */unsigned int) var_0)), (2601548302U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!((_Bool)1)))))))));
                            arr_61 [4U] [i_7] [i_8] [i_8] [6ULL] &= ((/* implicit */short) max(((unsigned short)5), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((unsigned short)39319), (((/* implicit */unsigned short) (short)-24473))))))))));
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) min(((short)32763), (((/* implicit */short) ((((/* implicit */_Bool) 1149630690U)) || ((_Bool)0)))))))));
                            var_36 = ((((/* implicit */_Bool) 33030144U)) ? ((~(1006632960U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))));
                        }
                        arr_62 [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((int) (_Bool)1))) | (min((4101584447521162295LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)30137)))))))));
                        /* LoopSeq 2 */
                        for (int i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            arr_65 [i_6 + 3] [i_6 + 3] [i_7] [i_6 + 3] [i_16] [i_16] [(short)10] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)18))));
                            arr_66 [i_6] [i_6] [i_7] [i_6] [i_18] = ((/* implicit */unsigned int) (unsigned short)26249);
                        }
                        for (int i_19 = 0; i_19 < 12; i_19 += 4) 
                        {
                            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (+(-4101584447521162295LL)))) ? (max((var_6), (((/* implicit */unsigned long long int) arr_19 [i_19])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_8 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_69 [i_6] [i_7] [i_19] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 1482340961)) || (((/* implicit */_Bool) 4231272193U))));
                            arr_70 [i_6 + 1] [i_7] [i_8 - 2] [i_8 - 2] [i_6] [11] [i_7] = ((/* implicit */int) var_12);
                        }
                        arr_71 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 268369920)) ? (10271620719946717590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_38 = max((((/* implicit */long long int) arr_17 [i_16])), (3751781526378981399LL));
                    }
                    for (unsigned int i_20 = 3; i_20 < 10; i_20 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-1109)) ? (((/* implicit */int) arr_55 [i_7] [i_7] [i_7] [i_7] [(unsigned char)3] [i_7])) : (((/* implicit */int) arr_67 [i_6 + 4] [i_7]))))))) ? (-1603770344921232503LL) : (((/* implicit */long long int) ((arr_53 [i_20] [i_7] [i_8] [i_20] [i_7]) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_44 [6LL])) + (((/* implicit */int) arr_43 [i_21] [(unsigned short)7] [i_8] [i_7] [(unsigned short)7])))))))));
                            arr_78 [i_20] [i_8] [i_6] [i_20] = ((/* implicit */unsigned char) (short)1105);
                            arr_79 [i_20] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_6 + 1] [i_20])) / (((/* implicit */int) (short)-64))));
                        }
                        for (int i_22 = 0; i_22 < 12; i_22 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_7), (-457269663)))), (2793764342U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_22] [i_20] [i_6] [i_7] [i_20] [i_6]))) : ((((+(-985268930101873056LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_6] [i_6] [i_8] [i_8])))))));
                            var_41 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-16321)))) ? (((((/* implicit */_Bool) (short)-128)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))) : (17U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25699)))));
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_42 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_35 [i_6] [i_6 + 4] [i_8 - 2] [i_20] [i_20] [9] [5U])))) != (((((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_8 - 4])) + (2147483647))) >> (((-1585197326) + (1585197335)))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)24653), (((/* implicit */short) (unsigned char)221))))))))));
                            arr_88 [i_6] [i_6] [i_6] [i_8 + 1] [i_20 - 3] [i_20] = var_12;
                        }
                        /* vectorizable */
                        for (short i_24 = 0; i_24 < 12; i_24 += 4) 
                        {
                            arr_91 [(_Bool)1] [i_20] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 268369926)) ? (3379510559U) : (1073733632U))) : (2918839738U)));
                            arr_92 [i_6] [i_7] [(short)4] [i_20 + 1] [i_20] [i_7] [i_8] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_26 [9LL] [i_20] [9LL]))))));
                            arr_93 [i_20] [i_20 + 1] [8U] [i_8] [(_Bool)1] [i_20] = ((/* implicit */_Bool) ((short) -2055274044));
                            var_43 = ((/* implicit */_Bool) ((arr_26 [i_6] [i_8 - 1] [i_8 - 2]) ? (((/* implicit */int) arr_26 [i_24] [i_7] [i_6])) : (((/* implicit */int) (_Bool)1))));
                        }
                        arr_94 [i_6] [i_6] [i_8 + 2] [i_20] = ((/* implicit */unsigned short) arr_81 [i_8] [i_20 - 1] [i_20 + 2] [i_20] [i_20 + 2]);
                    }
                    arr_95 [(_Bool)1] [i_8] |= ((/* implicit */short) 7384077815802537225ULL);
                }
            } 
        } 
        arr_96 [(_Bool)1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_84 [i_6 + 2] [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6 + 1]) : (((/* implicit */int) (short)20100))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((_Bool) arr_84 [i_6 + 2] [i_6 - 1] [i_6 + 4] [i_6 + 4] [i_6 + 1])))));
        /* LoopSeq 1 */
        for (unsigned int i_25 = 1; i_25 < 9; i_25 += 2) 
        {
            arr_99 [(short)2] [(short)2] [(short)2] = ((/* implicit */unsigned char) 1ULL);
            var_44 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) 820178568U)))) ? (((/* implicit */int) (short)448)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) - (((/* implicit */int) (short)-17308))));
        }
    }
}
