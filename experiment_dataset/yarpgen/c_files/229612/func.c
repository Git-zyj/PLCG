/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229612
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 754097456)) : (arr_12 [i_4] [i_3] [i_2] [i_3] [i_0]))), (((/* implicit */unsigned int) arr_6 [i_4] [i_3] [12] [(unsigned char)2]))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 707701373180805147LL)))), (((((/* implicit */int) arr_8 [i_3] [20ULL] [i_3])) >= (((/* implicit */int) (_Bool)0)))))))) : (-707701373180805148LL)));
                                var_21 *= ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -707701373180805147LL)) ? (((/* implicit */int) (unsigned short)58894)) : (arr_10 [12] [i_1] [12] [i_3] [i_1])))))));
                                var_22 = ((/* implicit */short) arr_6 [i_0] [(_Bool)1] [(unsigned char)20] [(_Bool)1]);
                            }
                        } 
                    } 
                } 
                var_23 = ((unsigned char) (((!(((/* implicit */_Bool) (unsigned char)115)))) ? (min((707701373180805147LL), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (-(var_15))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (long long int i_7 = 2; i_7 < 9; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            arr_27 [3U] [3U] [i_5] [3U] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((short) (_Bool)1))) < (((/* implicit */int) (unsigned short)6641))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-9250)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_19)), (var_12)))) : (((((/* implicit */_Bool) var_14)) ? (var_7) : (var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5] [i_6])) * (((/* implicit */int) (unsigned char)174))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned char)4])) - (((/* implicit */int) arr_8 [i_5] [i_7 + 1] [i_5]))))) : (6322499595395212368LL)))));
                        }
                        var_25 = ((/* implicit */unsigned short) 536346624ULL);
                        /* LoopSeq 1 */
                        for (long long int i_10 = 1; i_10 < 8; i_10 += 3) 
                        {
                            arr_30 [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) ((short) ((int) min((((/* implicit */long long int) var_6)), (var_16)))));
                            var_26 = ((/* implicit */unsigned long long int) ((unsigned int) ((-707701373180805147LL) - ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) -1166669124)))))));
                            arr_31 [i_5] [3LL] [i_5] [5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_21 [i_10 + 1]))) ? (max((((/* implicit */unsigned int) var_2)), (2575461359U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9712901210315789208ULL))))))));
                            arr_32 [i_5] [i_6] [i_6] [(unsigned char)5] = ((/* implicit */unsigned int) (~(2185264252377408745ULL)));
                            arr_33 [i_10] [i_5] [i_7] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4849731917335630310ULL))))), (min((min((((/* implicit */unsigned int) 1239274208)), (2037527452U))), (((/* implicit */unsigned int) var_17))))));
                        }
                        var_27 = ((/* implicit */int) min((var_27), (var_15)));
                    }
                } 
            } 
        } 
        arr_34 [i_5] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (unsigned char)141)), (min((9712901210315789208ULL), (((/* implicit */unsigned long long int) (short)29435)))))), (((/* implicit */unsigned long long int) (-(4294967295U))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 8; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_28 &= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)246))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2791920375U))));
                            var_30 = (-(((/* implicit */int) (unsigned short)52360)));
                            var_31 = ((/* implicit */int) ((long long int) 0));
                        }
                        for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            arr_46 [i_12] [i_11] [i_12] [0U] [i_5] = ((/* implicit */short) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_32 = ((/* implicit */int) ((unsigned int) var_18));
                        }
                    }
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1433755126U)) >= (18446744073173204991ULL))))) : (9712901210315789208ULL)))) ? (min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((-707701373180805148LL) + (707701373180805166LL)))))), (((5231751554383062033LL) / (((/* implicit */long long int) var_14)))))) : (((((/* implicit */long long int) ((/* implicit */int) ((var_16) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) ^ (arr_25 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_5 - 1] [i_5 + 3] [(unsigned char)5])))))));
                    arr_47 [i_12] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (-(((7857522128765034783ULL) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))))));
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        arr_50 [i_5] [i_11] [i_5] [i_16] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (unsigned char)255))) ? ((+(arr_13 [i_5 + 3] [i_16] [i_5 + 3] [i_16] [i_16] [i_16] [i_16]))) : (((/* implicit */long long int) var_7))));
                        var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((signed char) (unsigned char)15)), (((signed char) var_11)))))));
                        arr_51 [i_16] [i_5] [i_5] [8LL] = ((int) ((((/* implicit */unsigned long long int) arr_13 [i_16] [i_12] [i_12] [i_11] [i_11 + 1] [i_11] [i_5])) ^ (((((/* implicit */_Bool) (unsigned short)33552)) ? (7857522128765034783ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
                    }
                    for (long long int i_17 = 1; i_17 < 10; i_17 += 3) 
                    {
                        var_35 = ((/* implicit */short) ((unsigned short) var_5));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 4; i_18 < 10; i_18 += 2) 
                        {
                            var_36 = ((/* implicit */int) arr_4 [i_17 - 1]);
                            var_37 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [(short)20] [i_18] [i_18] [(short)16])) ? (13597012156373921305ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (11668521961469197599ULL)))))))));
                        }
                        for (short i_19 = 0; i_19 < 12; i_19 += 1) 
                        {
                            var_38 *= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-41))));
                            arr_62 [i_5] [5ULL] [i_12] [i_17] [i_17] = ((((/* implicit */int) arr_37 [i_5] [i_11] [(unsigned char)9])) ^ ((+((~(-1239274220))))));
                        }
                    }
                }
            } 
        } 
    }
    for (int i_20 = 0; i_20 < 13; i_20 += 2) 
    {
        var_39 = ((/* implicit */unsigned int) (short)-4685);
        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((unsigned int) arr_0 [i_20] [i_20]))))) ? (((unsigned long long int) -2682130078016402208LL)) : (((/* implicit */unsigned long long int) 3452710557666373300LL))));
        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1239274229)) | (8464312812187681564ULL)))) ? (((/* implicit */int) ((short) var_16))) : ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_20] [11U] [i_20] [i_20])) : (((/* implicit */int) var_0))))));
    }
    /* LoopNest 2 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        for (long long int i_22 = 0; i_22 < 18; i_22 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_23 = 3; i_23 < 16; i_23 += 3) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 4) 
                    {
                        {
                            arr_76 [(_Bool)1] [i_23] [i_22] [i_21] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-127))));
                            arr_77 [9ULL] [i_22] [i_23 - 2] [i_24] [9ULL] [9ULL] = (+(((unsigned long long int) (_Bool)1)));
                            /* LoopSeq 1 */
                            for (short i_25 = 0; i_25 < 18; i_25 += 1) 
                            {
                                arr_80 [17] [17] [17] [(short)13] [i_25] = ((/* implicit */unsigned long long int) (unsigned char)246);
                                arr_81 [i_21] [(unsigned short)15] [(_Bool)1] [i_24] [(unsigned short)15] = ((/* implicit */unsigned char) -1250255990);
                                arr_82 [i_21] = ((/* implicit */int) ((short) min((9712901210315789204ULL), (((/* implicit */unsigned long long int) (signed char)-70)))));
                                arr_83 [i_21] [i_22] [(unsigned short)13] [i_24] [i_25] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_74 [i_22] [6U] [i_24] [i_25])), ((-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_0))))))));
                            }
                            arr_84 [0LL] [i_22] [(unsigned char)13] [i_22] = ((/* implicit */_Bool) 14208444586019367899ULL);
                            var_42 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (_Bool)1)), (1433755126U)));
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned long long int) max((((unsigned char) min((var_8), (((/* implicit */unsigned long long int) -1239274220))))), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_21] [i_21])))))) == (arr_3 [i_21] [i_21] [(short)4]))))));
                var_44 = ((/* implicit */unsigned int) 1105267754);
            }
        } 
    } 
}
