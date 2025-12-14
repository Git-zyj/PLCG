/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234584
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = max((((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-34)), (var_2))))) & (((var_14) >> (((((/* implicit */int) var_12)) - (12975))))))), (((/* implicit */unsigned int) min((arr_0 [i_0] [i_0]), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_0)))))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) 2425813861U)) ? (((/* implicit */int) (signed char)36)) : (1472134840))))));
        var_18 = (((((~(((/* implicit */int) arr_1 [i_0])))) + (2147483647))) << (((((((((((/* implicit */int) (signed char)-37)) / (((/* implicit */int) (short)-20217)))) ^ (((/* implicit */int) var_5)))) + (21))) - (17))));
        var_19 *= ((/* implicit */int) ((unsigned int) ((-470388292) != (((/* implicit */int) arr_1 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    arr_10 [i_1] [i_2] [i_3] &= ((/* implicit */int) ((((/* implicit */_Bool) (short)20223)) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)2)) ^ (((/* implicit */int) arr_6 [(unsigned char)16]))))))) : (((((/* implicit */_Bool) max(((unsigned char)143), (var_16)))) ? (arr_9 [i_2 + 1] [i_2 + 3] [i_2 - 1]) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_1])), (arr_4 [i_1]))))))));
                    arr_11 [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) -368491508)), (arr_9 [i_2] [i_2] [i_2 - 1]))) & (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_9 [i_3] [(unsigned char)8] [i_2 - 1])))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_14 [i_2 + 3] = ((/* implicit */short) ((int) var_12));
                        var_20 += ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (((/* implicit */int) (signed char)6)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 24; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (342672999U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))))) : (((/* implicit */int) ((max((-17465837), (((/* implicit */int) (short)17721)))) >= (((/* implicit */int) (signed char)-104))))));
                                arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) 290381289U);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(var_0))))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (signed char)66)))))));
            var_24 = ((/* implicit */unsigned char) min((((/* implicit */int) ((746510990U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))))), (max((((var_11) & (((/* implicit */int) (signed char)-105)))), (((/* implicit */int) arr_13 [22U] [i_7]))))));
        }
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            /* LoopSeq 4 */
            for (short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
            {
                var_25 *= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_12 [i_9] [i_8] [i_1] [i_1] [(unsigned char)16])) ^ (((/* implicit */int) max((arr_7 [i_1] [i_1] [i_8] [i_9]), (arr_6 [i_8])))))), (((arr_28 [i_8]) / (max((((/* implicit */int) (unsigned char)250)), (var_8)))))));
                var_26 *= ((/* implicit */signed char) arr_24 [i_1] [i_8] [i_1]);
                arr_29 [24U] [i_9] = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((arr_5 [(signed char)15] [i_8]) >= (((/* implicit */int) (short)31034))))))) ^ ((-(((/* implicit */int) (short)-3561))))));
            }
            for (short i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
            {
                var_27 ^= ((/* implicit */unsigned int) max((((/* implicit */int) ((short) 198707172))), (((min((368491494), (var_0))) << (((((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */int) (short)15184)))) - (1501563672)))))));
                var_28 = ((/* implicit */int) (((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) < (1873611208U)))))) > (((/* implicit */int) var_3))));
                var_29 = ((/* implicit */int) min((var_29), (max(((~(((/* implicit */int) (short)20234)))), (arr_28 [i_8])))));
            }
            /* vectorizable */
            for (short i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 1; i_12 < 23; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        {
                            var_30 *= arr_24 [i_1] [i_8] [i_12 - 1];
                            arr_40 [i_1] [i_8] [20] [(short)9] [i_13] = ((/* implicit */short) ((unsigned char) ((2209081460U) < (3337376680U))));
                            arr_41 [i_1] [i_1] [i_1] [(unsigned char)0] [i_13] = ((((/* implicit */_Bool) 1978022868U)) ? (((/* implicit */int) arr_23 [i_1] [i_12 + 2] [i_12 + 2])) : (arr_33 [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 1]));
                            var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_12 - 1] [(signed char)14] [(signed char)15] [(signed char)14])) ? (arr_27 [i_1] [i_8] [i_11] [i_12 + 2]) : (((/* implicit */int) arr_13 [i_1] [i_12 + 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_14 = 3; i_14 < 22; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        {
                            arr_47 [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_14 - 3] [i_14] [i_14 - 3] [12U]))));
                            arr_48 [i_1] [i_8] [i_11] [i_14] [i_15] [16] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((arr_26 [i_1] [(signed char)12]) + (117342612)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
            }
            for (short i_16 = 0; i_16 < 25; i_16 += 2) /* same iter space */
            {
                arr_52 [i_1] [i_8] [i_16] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)136))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)14))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (654067232))), (((((/* implicit */int) arr_37 [i_16] [23] [4] [i_8] [i_8] [i_1])) % (((/* implicit */int) (short)20247))))))) : (max((((1934785640U) >> (((((/* implicit */int) (unsigned char)97)) - (73))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) > (((/* implicit */int) (unsigned char)235)))))))));
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)115)) / (-191301083))) | (((arr_15 [i_1] [i_1] [i_1] [i_1] [(short)4] [i_1]) >> (((((/* implicit */int) var_3)) - (226)))))))) ? (min((((138204415U) >> (((((/* implicit */int) arr_50 [i_8])) - (148))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)3)) ? (var_0) : (((/* implicit */int) arr_30 [17]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))))))));
                arr_53 [i_1] [i_1] [23U] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) -1916864706)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 566391366U)) ? (((/* implicit */int) (short)3552)) : (((/* implicit */int) (short)15163))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) : (((((/* implicit */_Bool) 283101758U)) ? (2606603907U) : (((/* implicit */unsigned int) -1984001382)))))) : (((/* implicit */unsigned int) -688337277))));
                var_33 = ((/* implicit */unsigned int) max((((/* implicit */int) var_16)), (max((1984001391), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)105)), ((unsigned char)80))))))));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 23; i_17 += 3) 
                {
                    for (int i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) (+(784088882)));
                            var_35 = ((/* implicit */signed char) arr_32 [i_1] [i_8]);
                            arr_60 [(unsigned char)4] [(unsigned char)4] [5] [i_16] [i_16] = ((/* implicit */signed char) min((-1186271241), (-17465837)));
                        }
                    } 
                } 
            }
            arr_61 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (signed char)8)) ? (-1984001385) : (((/* implicit */int) (signed char)-122)));
        }
        for (int i_19 = 0; i_19 < 25; i_19 += 1) 
        {
            arr_65 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) var_2)), ((~(((/* implicit */int) (unsigned char)104))))));
            arr_66 [(short)15] [(short)15] [i_1] |= var_13;
        }
    }
    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 2) 
    {
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_13 [i_20] [i_20])), (arr_16 [i_20] [i_20] [i_20] [8])))))) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (short)-6764)))))) : (arr_25 [i_20])));
        arr_69 [i_20] &= ((/* implicit */signed char) var_11);
    }
    var_37 = ((/* implicit */int) 1934785642U);
    /* LoopSeq 2 */
    for (int i_21 = 0; i_21 < 16; i_21 += 4) 
    {
        var_38 = ((/* implicit */short) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_21]))))), ((-(1934785640U))))) >= (((((3651311308U) >> (((361632888) - (361632858))))) >> (((/* implicit */int) arr_12 [i_21] [i_21] [i_21] [i_21] [i_21]))))));
        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)194)) ? (1157489342U) : (2209081455U))))));
    }
    for (int i_22 = 0; i_22 < 18; i_22 += 4) 
    {
        var_40 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_22] [i_22] [i_22])) && (((/* implicit */_Bool) 92591900)))))));
        var_41 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)20223))) ^ (((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned int) -328469802)) : (4284381167U))))), (((/* implicit */unsigned int) (signed char)-21))));
    }
    var_42 = ((/* implicit */signed char) var_15);
}
