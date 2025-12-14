/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208763
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))) ? (max((var_1), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2] [(unsigned short)20] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_14)) & (((/* implicit */int) arr_1 [i_3 - 2])))) + (2147483647))) >> (((((var_13) ? (arr_5 [10U]) : (((/* implicit */long long int) ((/* implicit */int) (short)25275))))) - (25264LL)))))) || (((/* implicit */_Bool) ((((var_3) + (2147483647))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1] [(unsigned short)1] [21LL])), (arr_2 [i_2] [i_2])))) - (32756))))))));
                            var_19 -= ((/* implicit */unsigned char) arr_5 [i_2 + 1]);
                            arr_10 [3U] = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_1 [i_1]))))));
                            var_20 = ((/* implicit */unsigned int) 9223372036854775796LL);
                            var_21 ^= ((/* implicit */signed char) ((arr_4 [i_0] [(unsigned char)12] [i_3 + 1]) & (((/* implicit */long long int) (-(var_16))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_22 = ((/* implicit */signed char) var_12);
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) arr_2 [i_6] [i_4]);
                    arr_19 [i_4] [i_5] [i_6] = ((/* implicit */int) 3758096384U);
                    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) ? (((arr_4 [(unsigned short)11] [i_5] [i_6]) ^ (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) arr_14 [i_6]))));
                    var_25 |= ((/* implicit */short) ((arr_5 [i_4]) / (arr_5 [i_5])));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 1; i_7 < 16; i_7 += 3) 
    {
        arr_24 [(unsigned char)3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 17; i_9 += 3) 
            {
                {
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_27 [i_7 - 1] [(short)1] [(short)1] [(unsigned short)15]))))))) ? ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_22 [i_9 - 1])) : (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(var_7))))))))))));
                    var_27 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38034)) ? (((/* implicit */int) arr_23 [i_7] [i_8])) : (182203688)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_8] [i_9] [i_9])) >> (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            {
                                arr_34 [(short)17] [(signed char)5] [(unsigned short)4] [i_10] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9 - 1] [i_7 + 1])) ? (arr_26 [i_9 + 1] [i_7 + 2]) : (arr_26 [i_9 + 1] [i_7 + 2])))) ? (((((/* implicit */_Bool) arr_26 [i_9 + 1] [i_7 + 1])) ? (arr_26 [i_9 + 1] [i_7 + 2]) : (arr_26 [i_9 - 1] [i_7 - 1]))) : (min((arr_26 [i_9 + 1] [i_7 + 1]), (var_4)))));
                                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_7 - 1] [i_9 - 1] [i_9] [i_11])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 2; i_13 < 17; i_13 += 3) 
                        {
                            {
                                var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) arr_4 [i_7] [i_9 + 1] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8] [15U]))) : (var_4)))))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_21 [i_13])) : (arr_5 [i_9]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_31 [i_13 - 1] [i_8] [i_9])) : (arr_21 [i_8])))))) : (((((/* implicit */_Bool) arr_28 [i_7 + 1] [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (arr_4 [i_13] [i_8] [i_8])))));
                                arr_40 [i_7] [i_12] [i_9 + 1] [i_12] [i_13] = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) arr_26 [i_9 - 1] [i_9])) ? (arr_28 [(_Bool)1] [i_8] [i_9] [i_13 - 1]) : (((/* implicit */int) var_11)))))), (((/* implicit */int) var_12))));
                                var_30 = ((/* implicit */int) min((var_30), (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_33 [i_13] [i_12] [i_13 - 1] [i_7 + 1] [i_13])) : (((/* implicit */int) (unsigned short)996)))) * (((((/* implicit */_Bool) arr_32 [i_13 + 1] [i_9 + 1])) ? (((/* implicit */int) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [3ULL] [3ULL])) : (((/* implicit */int) arr_23 [i_13] [i_7 + 2]))))))))));
                                var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) arr_29 [i_7 + 2] [i_7 + 1] [i_9 + 1] [i_9] [i_13 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_14 = 3; i_14 < 9; i_14 += 3) 
    {
        var_32 += arr_1 [i_14];
        var_33 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775776LL)) ? (arr_26 [i_14] [15]) : (((/* implicit */long long int) arr_31 [(short)3] [i_14 + 1] [i_14]))))) ? (((/* implicit */int) ((arr_14 [i_14]) < (var_3)))) : (((/* implicit */int) var_7)))))));
    }
    for (int i_15 = 0; i_15 < 25; i_15 += 3) 
    {
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_15]))) & (arr_43 [i_15])))) ? (max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_15]))) : (var_16))), (((/* implicit */unsigned int) max((arr_46 [i_15]), (((/* implicit */unsigned short) arr_44 [i_15] [i_15]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_15])) || (((/* implicit */_Bool) arr_43 [i_15]))))))))));
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 25; i_16 += 3) 
        {
            for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
                {
                    {
                        arr_54 [i_15] [i_15] [i_16] [i_18] [i_16] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_15] [i_16] [i_17] [i_18])))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_52 [i_15] [i_17] [i_18]))))), (((((/* implicit */_Bool) arr_52 [i_15] [i_15] [i_17])) ? (((var_4) & (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_17])))))));
                        arr_55 [i_15] [i_15] [i_15] [i_18] = ((/* implicit */unsigned long long int) arr_44 [i_15] [i_18]);
                        arr_56 [22U] [i_16] [8LL] &= ((/* implicit */int) var_5);
                        var_35 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_44 [i_15] [i_15])))) < ((-(var_8)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_19 = 0; i_19 < 25; i_19 += 1) 
        {
            for (short i_20 = 0; i_20 < 25; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 25; i_21 += 3) 
                    {
                        for (short i_22 = 0; i_22 < 25; i_22 += 1) 
                        {
                            {
                                arr_66 [i_22] [i_22] [i_15] [i_15] [i_19] [i_15] = ((/* implicit */int) var_13);
                                var_36 += ((/* implicit */unsigned int) arr_60 [i_20] [14LL] [i_21] [i_21]);
                                arr_67 [i_15] [i_19] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_11) ? (((/* implicit */int) var_13)) : (var_3)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_58 [i_15] [i_15]) : (arr_58 [i_15] [i_15])))) ? (((((/* implicit */_Bool) arr_47 [(signed char)9] [i_15])) ? (arr_64 [i_15] [i_15] [i_19] [i_20] [4ULL] [i_21] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : ((+(var_0))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_44 [i_15] [i_15])))))));
                                var_37 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_50 [i_15] [i_20])) ? (arr_43 [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_22] [i_21] [i_20] [i_20] [i_15] [i_15]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_63 [i_19] [i_20] [i_21])) < (((/* implicit */int) arr_63 [i_19] [24LL] [i_22]))))))));
                            }
                        } 
                    } 
                    var_38 -= ((/* implicit */short) 1823933617);
                    var_39 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_59 [6LL])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) + (((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_63 [i_15] [i_20] [i_19])) - (10598))))) ^ (-2147483646)))));
                    arr_68 [i_15] [i_19] [i_19] [i_15] = arr_45 [i_15];
                }
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned char) var_17);
    var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))) & (((((/* implicit */_Bool) -6099269655971915469LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_16)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((var_16) >= (((/* implicit */unsigned int) var_8))))) : (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_14))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_16))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))))))));
    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15)))))))))))));
}
