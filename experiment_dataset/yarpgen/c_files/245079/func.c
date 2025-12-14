/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245079
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
    var_16 = ((/* implicit */unsigned long long int) var_10);
    var_17 = ((/* implicit */short) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) (_Bool)1))))) || (((/* implicit */_Bool) var_10)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) 8626869039843963967ULL);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] = ((((/* implicit */_Bool) 9819875033865587655ULL)) ? (4124630230492887428ULL) : (9819875033865587648ULL));
                        arr_12 [i_1] [i_1] [(short)8] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) var_14);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned int i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((unsigned int) var_8)) > (var_8)))), (var_9)));
                    var_19 = ((/* implicit */short) min((((9819875033865587648ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)253)), (arr_6 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 + 1]))))));
                    var_20 -= ((/* implicit */short) arr_6 [i_0] [i_4] [i_5] [i_5 - 1]);
                    arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_6 [i_0] [i_5 + 1] [i_5 - 1] [i_5]))))), (((((/* implicit */_Bool) arr_6 [i_5] [i_5 + 1] [i_5 + 1] [i_5])) ? (arr_6 [i_0] [i_5 - 2] [i_5 - 2] [i_5 - 2]) : (arr_6 [i_0] [i_5 + 1] [i_5 - 1] [i_5])))));
                    arr_18 [i_0] [i_4] = ((/* implicit */long long int) ((unsigned short) max((arr_10 [i_0] [i_4] [i_4] [i_0]), (arr_1 [6ULL] [i_4]))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_13 [i_0] [i_0])))) << ((((~(((/* implicit */int) (!(arr_7 [i_0])))))) + (19)))));
        arr_20 [i_0] = ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) var_0);
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_8)) > (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(short)8]))) : (16338865072525102737ULL))))) ? ((-(arr_21 [i_6]))) : (3618424790U))))));
        var_23 = ((/* implicit */unsigned int) (((-(arr_21 [i_6]))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 3; i_10 < 20; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) arr_21 [i_6]))))) && (((/* implicit */_Bool) max((arr_26 [i_6] [5U]), (arr_26 [i_6] [i_7]))))));
                            arr_37 [i_6] [i_7] [7U] [i_9] = ((/* implicit */unsigned short) 4024757926U);
                            var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_28 [i_6] [i_10 - 3] [15U] [i_7])) << (((((arr_26 [i_6] [i_10 + 2]) + (4183421464384206531LL))) - (16LL)))))));
                        }
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            arr_41 [i_6] [i_7] [i_7] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) 2107879001184448869ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))) : (16338865072525102743ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6])))));
                            var_26 = ((/* implicit */unsigned char) ((unsigned int) (-(var_3))));
                        }
                        var_27 -= ((/* implicit */short) ((int) ((9162755274511356692ULL) + (((/* implicit */unsigned long long int) min((arr_26 [i_6] [i_7]), (((/* implicit */long long int) var_6))))))));
                        arr_42 [i_6] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) var_7);
                    }
                } 
            } 
        } 
        arr_43 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_14);
    }
    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        arr_47 [i_12] = ((/* implicit */unsigned int) max((17750929318494351233ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)47817)) * (((/* implicit */int) arr_45 [i_12])))))));
        arr_48 [i_12] = ((/* implicit */int) arr_44 [i_12] [i_12]);
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_51 [i_12] = ((/* implicit */long long int) (~(var_3)));
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_44 [2ULL] [i_13]))) < (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))))));
                        /* LoopSeq 3 */
                        for (signed char i_16 = 0; i_16 < 24; i_16 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (arr_52 [i_12] [i_12] [i_15] [i_12]) : (((/* implicit */int) var_14))))), (var_8)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_50 [i_12] [i_13]) : (((/* implicit */unsigned long long int) 2245074553U))))) ? (((unsigned int) var_6)) : ((-(var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 16338865072525102737ULL)) && (((/* implicit */_Bool) (signed char)19))))))));
                            arr_58 [i_12] [i_12] [i_13] [i_12] [i_16] [i_13] [i_13] = ((/* implicit */int) (signed char)-121);
                            arr_59 [i_12] [i_12] [i_14] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((signed char) var_14));
                        }
                        for (int i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) arr_56 [i_12] [20] [i_14] [i_14] [i_12])), (var_15))), (((/* implicit */unsigned long long int) arr_56 [i_12] [i_15] [i_14] [(short)21] [i_12]))));
                            arr_64 [(_Bool)1] [(unsigned short)14] [i_14] [i_17] [i_12] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) 1238799388U)) && (((/* implicit */_Bool) (signed char)27)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_12] [i_12] [i_14] [i_15] [i_17]))) : (max((((/* implicit */long long int) arr_56 [i_12] [i_13] [i_13] [i_12] [i_17])), (arr_61 [i_12] [i_13] [i_14] [i_15] [i_17] [i_12] [i_17])))));
                            arr_65 [i_12] [i_13] [i_14] [i_12] [i_13] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_56 [i_12] [i_14] [21] [21] [i_12])) ? (((/* implicit */int) (unsigned short)5795)) : (((/* implicit */int) (unsigned short)17719)))), (((/* implicit */int) (signed char)114))));
                        }
                        for (unsigned char i_18 = 4; i_18 < 23; i_18 += 1) 
                        {
                            var_31 -= ((/* implicit */unsigned long long int) (-(-321820906)));
                            arr_70 [2] [i_13] [12ULL] [(unsigned char)18] [12ULL] [(short)14] &= ((/* implicit */int) ((max((((/* implicit */unsigned int) ((arr_54 [(unsigned short)2] [8ULL] [i_15]) >= (arr_54 [14ULL] [(_Bool)1] [i_18])))), (((((/* implicit */_Bool) var_11)) ? (var_8) : (var_12))))) > ((((_Bool)1) ? (arr_69 [i_18 - 3]) : (arr_69 [i_18 - 4])))));
                            arr_71 [i_12] [i_13] [i_14] [i_15] [i_18 - 1] [20ULL] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) 11455966625629739725ULL)))))), ((unsigned short)17727)));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_1)), (arr_69 [i_13]))))));
                            arr_72 [i_13] [i_13] [i_14] [i_15] [i_12] [i_12] [16ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1805378133)) ? (((/* implicit */unsigned long long int) var_8)) : (9162755274511356694ULL)))) ? (((/* implicit */unsigned int) arr_52 [i_12] [i_18 + 1] [i_18] [i_15])) : (((((/* implicit */_Bool) 16338865072525102737ULL)) ? (4024757921U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) < (((/* implicit */unsigned int) arr_52 [i_12] [i_18] [i_12] [(short)22]))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 24; i_19 += 2) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_80 [i_12] [i_13] [i_12] [i_20] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        arr_81 [i_12] [i_13] [i_19] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7143520818657745615ULL)) ? (695814755215200370ULL) : (((/* implicit */unsigned long long int) 2085475333))));
                    }
                } 
            } 
        }
        var_33 += ((/* implicit */unsigned short) 9283988799198194943ULL);
    }
    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18446744073709551612ULL)))) ? (((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))))) && (((/* implicit */_Bool) max((((signed char) var_14)), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || ((_Bool)1)))))))));
    /* LoopNest 3 */
    for (short i_21 = 0; i_21 < 19; i_21 += 2) 
    {
        for (signed char i_22 = 0; i_22 < 19; i_22 += 1) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                {
                    arr_90 [i_21] [(signed char)5] [i_23] [i_23] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-54))));
                    /* LoopNest 2 */
                    for (signed char i_24 = 0; i_24 < 19; i_24 += 1) 
                    {
                        for (long long int i_25 = 4; i_25 < 17; i_25 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */int) ((_Bool) (!((_Bool)1))))) - (((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                                arr_97 [12LL] [i_23] [i_24] [i_24] [i_25] [i_25] = ((/* implicit */signed char) arr_33 [(_Bool)1] [i_22]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_26 = 3; i_26 < 16; i_26 += 1) 
                    {
                        for (int i_27 = 0; i_27 < 19; i_27 += 1) 
                        {
                            {
                                var_36 += ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_66 [i_21] [(_Bool)1] [i_23] [(_Bool)1] [i_27])), (arr_61 [i_21] [i_22] [i_23] [i_26] [i_21] [i_23] [i_27])))) != (4593691760907211626ULL))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-(min((2628724341145783578LL), (((/* implicit */long long int) (unsigned char)17))))))));
                                arr_102 [i_27] [i_27] [i_27] [i_26 - 3] = var_3;
                                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 2171868968U)) ? (arr_61 [i_26 - 3] [i_22] [i_26 - 3] [i_26] [i_27] [i_26] [i_26]) : (arr_61 [i_26 - 2] [i_26 - 2] [i_27] [i_26 - 2] [i_27] [i_21] [i_27])))))));
                                arr_103 [i_21] [i_22] [18ULL] [i_22] [i_23] [i_22] [i_27] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_92 [i_27])) ? (((/* implicit */unsigned long long int) 1136443034U)) : (var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (min((var_4), (((/* implicit */long long int) (signed char)30)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
