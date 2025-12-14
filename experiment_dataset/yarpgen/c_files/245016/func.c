/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245016
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1]))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)13518))));
                        var_12 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)13524))));
                        var_13 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1] [i_1 + 3] [i_0 + 2])) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)52018))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) - (var_6)))));
                        arr_9 [i_0] [i_1 + 2] = ((/* implicit */short) (~(arr_8 [i_0 - 2] [i_0] [i_0 + 2] [i_0] [i_0])));
                    }
                } 
            } 
        } 
        arr_10 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)13518))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                var_15 = ((/* implicit */short) max((var_15), (((short) ((((/* implicit */_Bool) (signed char)-99)) ? (arr_5 [i_0] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_4] [i_5] [i_5]))))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    var_16 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) arr_6 [i_0 + 2] [i_4] [i_5] [i_6])))));
                    var_17 &= ((/* implicit */long long int) (unsigned short)13518);
                }
                var_18 = ((/* implicit */unsigned int) min((var_18), (((unsigned int) arr_6 [i_0] [i_4 + 1] [i_0 - 1] [i_5]))));
            }
            var_19 = ((/* implicit */signed char) ((long long int) (unsigned short)20157));
            var_20 = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_0 + 2] [i_0 - 2] [i_4 - 2])) ^ (((/* implicit */int) arr_12 [i_0] [i_0 + 1] [i_4 + 1]))));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 4; i_7 < 16; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 2; i_8 < 13; i_8 += 2) /* same iter space */
                {
                    arr_22 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_8 - 1] [i_8 + 1])) || (((/* implicit */_Bool) ((arr_21 [i_8] [i_7] [i_4] [i_0]) >> (((var_4) - (754840674930619792LL))))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_0] [i_4] [i_7 - 2] [i_8])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) >> (((((/* implicit */int) (unsigned short)13523)) >> (((((/* implicit */int) arr_2 [i_4] [i_7])) - (50687))))))))));
                }
                for (signed char i_9 = 2; i_9 < 13; i_9 += 2) /* same iter space */
                {
                    arr_26 [i_0] [i_0 - 1] [i_4] [i_7 + 1] [i_7 - 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)52017)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (short)-25040))));
                    var_22 += ((/* implicit */signed char) ((short) 5960792879823023274LL));
                }
                var_23 = ((/* implicit */long long int) arr_23 [i_0 - 2] [i_4] [i_4 + 1] [i_4 + 1] [i_7]);
                var_24 -= ((/* implicit */unsigned short) ((long long int) arr_23 [i_0 - 1] [i_0] [i_0 - 1] [i_4 + 2] [i_7 + 1]));
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-14369))));
                    arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) var_5));
                    arr_30 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) (signed char)127)))));
                }
                for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    arr_34 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_4 + 2] [i_7 - 2]))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (arr_24 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0])));
                    arr_35 [i_0] [i_0 - 1] [i_4] [i_7 - 4] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) (signed char)-111))))));
                    /* LoopSeq 2 */
                    for (short i_12 = 3; i_12 < 15; i_12 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13517)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) arr_25 [i_0] [i_4 + 1] [i_4 + 1] [i_11]))))) * (-311428839277922617LL)));
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_4 + 2] [i_7] [i_11] [i_12 + 1]))));
                    }
                    for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_0 - 1] [i_4] [i_4 + 1] [i_11])) % (((/* implicit */int) arr_25 [i_0] [i_0 - 1] [i_0] [i_4 - 2]))));
                        arr_43 [(short)4] [i_4] [i_7 - 2] [(short)4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_32 [11U] [11U] [i_7 - 2] [i_7 + 1] [i_7 - 2]))));
                    }
                }
            }
        }
    }
    for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */long long int) 518016098U)) < (16383LL))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-50))) < (3769226845308767479LL))) ? (((/* implicit */int) arr_44 [i_14])) : (((((/* implicit */_Bool) -16377LL)) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) (unsigned char)35)))))) : (((/* implicit */int) arr_44 [i_14]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            var_31 = ((/* implicit */signed char) arr_47 [i_14] [i_15]);
            var_32 = ((short) arr_45 [i_14] [i_15]);
            var_33 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_0)))));
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                arr_53 [i_14] [(unsigned short)12] [i_16] = ((/* implicit */signed char) ((-16384LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)124)))));
                /* LoopNest 2 */
                for (signed char i_17 = 1; i_17 < 21; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        {
                            arr_58 [i_14] [i_15] [i_16] [i_15] [(signed char)0] = ((/* implicit */long long int) ((((/* implicit */int) arr_56 [i_17] [i_17] [i_17] [i_17 + 1] [i_17] [i_17 - 1])) - (((/* implicit */int) arr_57 [i_14] [i_18]))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) >> (((((/* implicit */int) (signed char)108)) - (86)))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */long long int) min((var_35), ((-(arr_51 [i_14] [i_14] [i_16] [15U])))));
            }
        }
        /* vectorizable */
        for (unsigned int i_19 = 2; i_19 < 19; i_19 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_20 = 2; i_20 < 21; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    {
                        var_36 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) * (((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (unsigned short)13517))))));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_45 [i_19] [i_19])) % (arr_46 [21U])))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_65 [i_14] [i_19] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-107))) : (arr_49 [i_14] [i_19] [i_20] [i_21]))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_22 = 2; i_22 < 21; i_22 += 2) 
            {
                for (long long int i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    for (unsigned short i_24 = 1; i_24 < 21; i_24 += 3) 
                    {
                        {
                            var_39 -= ((((/* implicit */_Bool) -16377LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : (-4LL));
                            arr_76 [i_24 + 1] [i_23] [i_23] [i_22] [i_19] [i_14] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1483))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 882149172U)))))) : ((-(2230044703U))));
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_25 = 0; i_25 < 18; i_25 += 1) 
    {
        var_40 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-26823))));
        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) arr_62 [i_25] [i_25])) ? (((/* implicit */int) arr_69 [i_25] [i_25] [i_25] [9LL])) : (((/* implicit */int) arr_75 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25])))) >> ((-(((/* implicit */int) arr_56 [i_25] [i_25] [i_25] [(short)17] [i_25] [(short)14])))))))))));
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) >> (((((((/* implicit */_Bool) arr_73 [i_25] [i_25] [i_25] [(unsigned short)13] [i_25] [i_25])) ? (((/* implicit */int) (short)12994)) : (((/* implicit */int) (signed char)110)))) - (12979)))))) ? (((((var_4) != (var_4))) ? (((/* implicit */int) ((unsigned short) arr_56 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)208))))))) : (((/* implicit */int) (unsigned short)52034))));
    }
    /* vectorizable */
    for (short i_26 = 0; i_26 < 22; i_26 += 4) 
    {
        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_26] [i_26])) ? (4060024879U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_26] [i_26])))))) ? (((/* implicit */int) arr_60 [i_26])) : (((/* implicit */int) ((signed char) arr_69 [i_26] [i_26] [7U] [(short)3]))))))));
        var_44 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_54 [i_26] [i_26] [i_26] [i_26])) && (((/* implicit */_Bool) arr_65 [i_26] [i_26] [i_26])))) || (((((/* implicit */_Bool) arr_73 [i_26] [i_26] [i_26] [(unsigned short)5] [i_26] [i_26])) || (((/* implicit */_Bool) 0U))))));
        /* LoopNest 3 */
        for (unsigned int i_27 = 0; i_27 < 22; i_27 += 2) 
        {
            for (signed char i_28 = 0; i_28 < 22; i_28 += 1) 
            {
                for (unsigned char i_29 = 0; i_29 < 22; i_29 += 2) 
                {
                    {
                        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_27] [i_26]))) <= (arr_63 [i_28] [i_28] [i_28]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15))))) : (((/* implicit */int) (signed char)-110)))))));
                        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 882149172U)) ? (16381LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11098)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-126)) <= (((/* implicit */int) arr_65 [i_26] [i_26] [i_26])))))) : (arr_45 [i_29] [i_29])));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_30 = 0; i_30 < 18; i_30 += 4) 
    {
        for (long long int i_31 = 0; i_31 < 18; i_31 += 3) 
        {
            {
                var_47 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_30] [i_31] [i_30] [i_31] [(short)8] [i_30])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_71 [i_30] [i_31] [i_31] [i_30] [i_30] [i_30])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_30] [i_30] [i_31] [i_30] [i_30] [i_31])) || (((/* implicit */_Bool) arr_71 [i_30] [i_31] [i_31] [i_31] [i_30] [i_30])))))) : (((((/* implicit */_Bool) 3616889044595531385LL)) ? (arr_71 [i_30] [i_30] [i_30] [(signed char)10] [i_31] [i_31]) : (arr_71 [i_30] [i_30] [4LL] [4LL] [i_30] [4LL])))));
                arr_94 [1LL] [i_31] [i_31] = ((/* implicit */short) var_5);
                arr_95 [i_31] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (signed char)127)), (-6183463307560735483LL)));
                arr_96 [i_30] [i_31] = ((/* implicit */short) ((signed char) (signed char)125));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_32 = 3; i_32 < 18; i_32 += 2) 
    {
        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((805306368U) % (((/* implicit */unsigned int) (+(((/* implicit */int) (short)27281)))))))) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (short)-1))));
        var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) (signed char)96))));
    }
    for (unsigned int i_33 = 0; i_33 < 13; i_33 += 2) 
    {
        arr_102 [i_33] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_72 [i_33] [i_33] [i_33]))));
        /* LoopNest 3 */
        for (unsigned short i_34 = 0; i_34 < 13; i_34 += 2) 
        {
            for (unsigned char i_35 = 4; i_35 < 11; i_35 += 4) 
            {
                for (long long int i_36 = 0; i_36 < 13; i_36 += 2) 
                {
                    {
                        var_50 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                        /* LoopSeq 2 */
                        for (short i_37 = 4; i_37 < 10; i_37 += 2) 
                        {
                            arr_112 [i_33] &= ((/* implicit */long long int) ((max((((/* implicit */long long int) ((3412818123U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87)))))), ((-(1152921504606846976LL))))) != (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_33] [i_34] [i_35 + 2] [i_36] [i_37 + 2])) << (((166652533U) - (166652531U))))))));
                            arr_113 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36] [i_36] = ((/* implicit */signed char) arr_97 [i_34]);
                            arr_114 [i_33] [i_34] [i_35] [i_34] [i_36] [i_37] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_101 [i_35 - 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_35 + 2] [i_35] [i_35 - 1] [i_35 + 2]))))) : (((/* implicit */int) (unsigned char)115))));
                        }
                        for (unsigned short i_38 = 0; i_38 < 13; i_38 += 2) 
                        {
                            var_51 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_54 [i_33] [i_33] [i_35] [i_35 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned char)182))))))) : ((-(((((/* implicit */_Bool) arr_85 [i_35 + 2] [i_36] [i_36])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41765))) : (1099511627775LL))))));
                            arr_117 [i_33] [i_33] [i_34] [i_35] [i_33] [i_38] = ((/* implicit */long long int) ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) != (((/* implicit */int) arr_116 [i_33] [10LL] [i_35] [i_33] [i_38] [i_33] [i_33])))));
                            arr_118 [i_34] = ((/* implicit */long long int) ((((/* implicit */int) (short)21526)) & (((/* implicit */int) arr_23 [(short)9] [i_33] [i_33] [i_35 - 3] [(unsigned char)0]))));
                        }
                    }
                } 
            } 
        } 
        arr_119 [i_33] [(unsigned short)6] = ((/* implicit */short) (+(arr_46 [i_33])));
    }
    var_52 = ((/* implicit */signed char) var_2);
    var_53 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) (short)13376))) & (((((/* implicit */_Bool) (short)13000)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) : (4350241262496194158LL))))), (((/* implicit */long long int) (signed char)-122))));
}
