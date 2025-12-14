/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42984
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
    var_14 |= ((/* implicit */short) ((signed char) var_11));
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
    var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (max((1073217536U), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (((/* implicit */short) var_3))))))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_10))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_9)))));
        var_17 = ((/* implicit */int) arr_2 [i_0]);
        var_18 += ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-32755)) ? (-1655845737) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (arr_2 [i_0 + 3]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (-900906923) : (((/* implicit */int) arr_0 [i_0])))) >= ((~(-31992105))))))) : (((((/* implicit */_Bool) min((var_12), (((/* implicit */short) arr_2 [i_0]))))) ? (max((((/* implicit */long long int) 900906932)), (var_8))) : (((/* implicit */long long int) ((arr_1 [i_0 + 2]) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_13 [5] [i_2] [i_3] [(signed char)6] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_11 [i_1] [i_4] [i_3] [i_2] [i_1 + 1] [i_3])))) / ((~(((long long int) 1073217528U))))));
                        var_19 |= arr_9 [i_1 + 1] [i_1 - 1] [i_2];
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            for (int i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_24 [i_7] [i_6] [i_5 - 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_7] [(signed char)10])) ? (-1717953865) : (((/* implicit */int) (short)-26213))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7] [10] [i_1]))))) : (max((((/* implicit */int) arr_1 [4])), (arr_8 [i_6] [i_7])))));
                        arr_25 [i_1] [i_1] [i_1] [i_1 + 1] [i_5] &= ((/* implicit */_Bool) max((max((((int) arr_2 [i_5])), (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-109)) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_5 [(_Bool)1]))))))))));
                        var_20 = ((/* implicit */int) ((((/* implicit */long long int) 1817025244)) - (min((((/* implicit */long long int) ((_Bool) var_5))), (arr_21 [i_7] [i_7] [i_7] [i_6 + 1])))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-(((/* implicit */int) (short)-26220)))))));
    }
    for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_9 = 2; i_9 < 9; i_9 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_10 = 4; i_10 < 9; i_10 += 3) 
            {
                var_22 ^= ((((/* implicit */_Bool) arr_27 [i_9 + 2] [i_9 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_30 [i_8] [i_9] [0LL])) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) arr_19 [i_8] [i_9] [i_10 - 4])))));
                arr_36 [i_8] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) < (((/* implicit */int) (short)27717))));
            }
            for (int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_2 [(signed char)2]))));
                var_24 &= ((/* implicit */short) var_5);
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */int) var_10);
                            var_26 &= ((/* implicit */int) arr_5 [i_8]);
                            var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_9] [i_9 - 1] [i_11])) ? (arr_12 [i_9] [i_9] [(signed char)2] [i_9 + 2] [i_9]) : (arr_12 [i_9] [i_9] [i_9] [i_9 + 2] [i_9])));
                        }
                    } 
                } 
            }
            for (long long int i_14 = 1; i_14 < 9; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_55 [10] [i_14 + 1] [i_9 + 1] = ((/* implicit */unsigned int) (((_Bool)1) ? (-4) : (((/* implicit */int) (short)-21287))));
                            var_28 ^= ((/* implicit */int) -8357079014918002324LL);
                        }
                    } 
                } 
                var_29 -= arr_2 [i_14];
                arr_56 [i_8] [(_Bool)1] [i_8] |= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_17 = 1; i_17 < 7; i_17 += 4) 
            {
                arr_60 [i_9] [i_8] = ((/* implicit */int) (~(((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */long long int) var_11)) : (1781477143264028590LL)))));
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_20 [i_17 + 4] [i_9 - 2] [i_17 + 4] [i_9 - 2]))));
            }
            /* LoopNest 3 */
            for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                for (int i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    for (int i_20 = 1; i_20 < 10; i_20 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((((/* implicit */_Bool) arr_48 [i_8] [i_9] [i_18] [i_19] [i_20 - 1])) ? (((/* implicit */int) arr_29 [i_18] [i_19] [i_18])) : (arr_35 [i_8] [i_9] [i_8] [8]))) == (((/* implicit */int) ((((/* implicit */long long int) arr_31 [i_19] [i_9 + 1] [(short)4])) == (-556269167303987706LL)))))))));
                            arr_69 [i_8] [i_9] [i_9] [i_18] [i_8] [i_19] [i_20] = ((/* implicit */int) (short)32764);
                            arr_70 [i_18] [i_19] [i_18] [i_9] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1817025244)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)104))));
                        }
                    } 
                } 
            } 
            var_32 = ((((/* implicit */_Bool) arr_7 [i_9])) ? (arr_12 [i_8] [i_8] [i_8] [i_9] [i_9]) : (((((/* implicit */_Bool) 9223372036854775795LL)) ? (((/* implicit */int) arr_43 [i_8] [i_9] [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_1 [i_8])))));
            arr_71 [i_8] &= ((/* implicit */int) (!(((/* implicit */_Bool) -755153406))));
        }
        for (int i_21 = 0; i_21 < 11; i_21 += 1) 
        {
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (~(((((((/* implicit */int) arr_29 [i_8] [i_8] [(short)4])) + (2147483647))) >> (((((/* implicit */int) arr_29 [i_8] [i_8] [i_8])) + (15353))))))))));
            arr_76 [i_8] [i_21] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_8] [2U] [i_8] [i_8])) / (((/* implicit */int) arr_20 [5] [i_8] [i_8] [i_8])))))));
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_62 [i_8] [i_8] [i_21]), (arr_62 [i_8] [i_8] [i_21])))) ? (((((-851577036) + (2147483647))) << ((((((-(arr_15 [12LL] [i_21]))) + (501910616))) - (8))))) : (((/* implicit */int) max((((/* implicit */short) arr_57 [i_21])), ((short)26206))))));
            var_35 ^= ((/* implicit */short) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_73 [i_21] [(_Bool)1] [i_8])) ? (((/* implicit */int) (short)6374)) : (((/* implicit */int) arr_19 [i_8] [i_21] [9])))), (((/* implicit */int) (_Bool)1))))) == (217494527U)));
            var_36 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_21])) ? (arr_61 [i_8] [i_8] [i_21]) : (arr_61 [i_21] [i_21] [i_8]))), (min((arr_61 [(unsigned char)3] [i_21] [i_21]), (((/* implicit */int) (_Bool)0))))));
        }
        var_37 *= ((/* implicit */_Bool) min((((((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_58 [i_8] [7] [i_8] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229)))))) : (((((/* implicit */_Bool) -8481091254778688275LL)) ? (8481091254778688286LL) : (((/* implicit */long long int) 2147483632)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(-985385405)))))))));
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 11; i_23 += 4) 
        {
            for (int i_24 = 0; i_24 < 11; i_24 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_25 = 0; i_25 < 11; i_25 += 4) 
                    {
                        for (int i_26 = 0; i_26 < 11; i_26 += 4) 
                        {
                            {
                                arr_90 [i_22] [i_23] [i_24] [i_25] [i_26] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_22])) ? (((((/* implicit */_Bool) arr_20 [i_23] [(unsigned char)13] [i_25] [6LL])) ? (arr_89 [i_22] [i_22] [(unsigned char)0] [i_24] [(signed char)8] [i_26] [i_26]) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) arr_65 [i_22] [1] [i_24] [i_25])))))))));
                                arr_91 [i_22] [9LL] [i_24] [i_25] [i_26] [i_26] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_87 [i_26] [i_25] [i_25] [i_24] [i_23] [9])))) ? (((/* implicit */unsigned int) (~(-3)))) : (((((/* implicit */_Bool) ((long long int) arr_28 [i_23] [i_25]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned int) var_12)), (var_5)))))));
                                arr_92 [i_22] [i_22] [i_22] [i_22] [i_22] [(_Bool)1] [i_22] = ((/* implicit */signed char) ((long long int) var_12));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_22])) ? ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (9223372036854775806LL)))) & (-149096722))))));
                    var_39 = ((/* implicit */int) var_7);
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_27 = 0; i_27 < 11; i_27 += 3) 
        {
            for (short i_28 = 0; i_28 < 11; i_28 += 1) 
            {
                for (long long int i_29 = 2; i_29 < 8; i_29 += 1) 
                {
                    {
                        arr_102 [i_27] = ((/* implicit */int) arr_43 [5LL] [i_28] [(short)3] [6] [i_29] [i_29 - 1] [i_29]);
                        arr_103 [i_22] [i_28] [i_28] [i_29] [i_27] = ((/* implicit */int) ((max((arr_87 [i_29 + 2] [i_29] [i_29 + 3] [i_29] [i_29] [i_29]), (arr_87 [i_29 - 1] [i_29 - 1] [i_29 + 2] [i_29] [i_29 + 2] [i_29 + 2]))) > (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_53 [(unsigned char)10] [(unsigned char)10] [i_27] [i_27] [i_28] [(short)10] [i_29 - 2]), (((/* implicit */unsigned int) ((_Bool) (short)-13368)))))) ? ((+(((/* implicit */int) arr_11 [i_28] [i_28] [i_29 + 3] [i_27] [i_29 + 3] [i_29 + 2])))) : (((/* implicit */int) arr_75 [i_22] [(short)5]))));
                    }
                } 
            } 
        } 
    }
}
