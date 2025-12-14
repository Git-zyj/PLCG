/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54514
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */signed char) var_8)), (var_7))))) == (var_4)));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_6)) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (6919682358880375651ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) 645922125)), (-5331046751074582114LL)));
                var_18 &= ((((/* implicit */_Bool) min((arr_6 [8LL] [8LL]), (((/* implicit */long long int) var_11))))) ? (((arr_1 [i_0]) ^ (arr_6 [(short)12] [i_1]))) : (arr_6 [(unsigned short)4] [i_1]));
                arr_9 [i_1] = ((777013288) << (((((/* implicit */int) (unsigned char)170)) - (170))));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */signed char) ((11062413720271933623ULL) * (11062413720271933623ULL)));
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1] [i_3] [(_Bool)1]) ? (((/* implicit */int) arr_7 [13] [i_1] [3] [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_1]))))) / (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_3 [i_1])))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (arr_11 [i_3] [i_1] [i_3])))) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -7045022558246436366LL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((arr_7 [i_4] [i_1] [i_1] [i_0]) ? (((/* implicit */int) arr_5 [i_3] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_4]))));
                            arr_18 [i_1] [9U] [i_4] [(short)5] = ((((/* implicit */int) (signed char)-96)) * (((/* implicit */int) (signed char)57)));
                            arr_19 [i_0] [i_5] [i_0] [(short)2] |= ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                arr_20 [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_3] [i_0]);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_24 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) min(((~(((unsigned long long int) arr_10 [i_0] [9] [i_0] [i_0])))), (((max((var_4), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])))) >> (((arr_23 [i_0] [i_1] [i_6] [i_1]) - (706400537U)))))))) : (((/* implicit */unsigned int) min(((~(((unsigned long long int) arr_10 [i_0] [9] [i_0] [i_0])))), (((max((var_4), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])))) >> (((((arr_23 [i_0] [i_1] [i_6] [i_1]) - (706400537U))) - (546932937U))))))));
                var_22 |= ((/* implicit */signed char) min((((unsigned long long int) min((((/* implicit */unsigned long long int) var_7)), (arr_13 [8U] [(short)9] [i_1])))), (((((/* implicit */_Bool) ((signed char) arr_15 [i_0] [i_0] [(_Bool)1] [i_6] [i_6]))) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (min((((/* implicit */unsigned long long int) var_2)), (arr_3 [2])))))));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_27 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) -3129085)) | (4882256285624229757LL)));
                var_23 = ((/* implicit */long long int) arr_21 [i_1] [i_1] [i_1]);
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [3LL] [i_1] [i_1] [i_0])))) ^ (arr_6 [i_1] [i_7])));
            }
            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_0]) == (arr_4 [i_0]))))) * (((((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_1])) | (((/* implicit */int) arr_26 [i_1] [(signed char)7] [i_1]))))) ^ (var_1)))));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((int) ((unsigned int) arr_21 [(signed char)2] [4] [10LL])))), (var_10))))));
        }
        for (short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
        {
            var_27 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
            arr_30 [i_8] [i_8] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_0] [i_8] [i_8] [i_8])), (arr_4 [i_0])))), (min((arr_11 [i_0] [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_4 [i_8]))))));
        }
        for (short i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned long long int) var_11);
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                var_29 *= ((/* implicit */unsigned long long int) ((1492504696U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)29844)))));
                var_30 = ((/* implicit */int) ((unsigned long long int) arr_37 [i_0] [i_9] [i_10] [7]));
            }
            for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                var_31 = ((/* implicit */unsigned char) max((arr_37 [i_11] [i_0] [14] [i_11]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)29820)), (2776721591U)))), (((((/* implicit */_Bool) arr_32 [i_0] [i_9] [i_9])) ? (arr_22 [i_0] [i_9] [i_11]) : (((/* implicit */long long int) arr_4 [i_9])))))))));
                var_32 += ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned char) arr_25 [i_0] [i_0] [14LL]))) ? (((unsigned long long int) var_10)) : (((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_31 [i_9]))))), (((/* implicit */unsigned long long int) arr_16 [9ULL] [i_9] [i_9] [(unsigned char)8]))));
            }
            /* vectorizable */
            for (short i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    arr_44 [i_9] [i_9] [i_12] = ((/* implicit */long long int) ((unsigned long long int) arr_25 [i_0] [i_9] [i_9]));
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        var_33 ^= var_3;
                        var_34 = ((/* implicit */unsigned int) (~(((arr_11 [2] [i_9] [i_12]) % (arr_11 [i_0] [i_9] [i_9])))));
                        var_35 |= ((/* implicit */unsigned long long int) arr_36 [i_13] [(_Bool)1] [(signed char)9]);
                    }
                }
                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9] [4ULL]))) / (var_4)))))))));
                var_37 = ((/* implicit */long long int) ((arr_13 [i_0] [i_9] [i_12]) ^ (arr_13 [i_0] [i_9] [i_12])));
            }
            /* vectorizable */
            for (long long int i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [(short)3])) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (short)-29135)))))));
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 15; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_39 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) : (9223372036854775796LL)));
                            var_40 = ((/* implicit */long long int) arr_34 [i_9] [i_16] [(signed char)8]);
                            var_41 = ((/* implicit */int) ((unsigned long long int) (unsigned char)12));
                            arr_55 [i_16] [i_16] [i_16] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_16] [i_15] [i_0] [i_17]))));
                            var_42 ^= ((/* implicit */signed char) (~(arr_2 [i_17])));
                        }
                    } 
                } 
                var_43 &= ((/* implicit */signed char) ((int) (short)-29135));
                /* LoopSeq 1 */
                for (long long int i_18 = 2; i_18 < 12; i_18 += 1) 
                {
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_10) << (((/* implicit */int) arr_28 [7] [4LL] [i_15]))))))))));
                    arr_58 [i_9] = var_7;
                    var_45 &= ((/* implicit */long long int) arr_40 [i_0] [i_9] [i_15] [7U]);
                }
            }
        }
        var_46 = ((/* implicit */short) arr_32 [i_0] [i_0] [2LL]);
        var_47 = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */unsigned long long int) arr_23 [2ULL] [i_0] [(signed char)6] [14ULL])) ^ (arr_33 [(signed char)10]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-23)))))));
        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (arr_32 [i_0] [i_0] [(signed char)0]) : (((/* implicit */long long int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_45 [i_0] [i_0] [4U] [i_0] [i_0] [i_0])), (arr_49 [i_0] [i_0] [4ULL]))))) : (arr_3 [0])));
    }
    for (unsigned int i_19 = 3; i_19 < 8; i_19 += 2) 
    {
        var_49 |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (~(var_13)))) * (min((var_9), (((/* implicit */unsigned long long int) arr_1 [(short)2])))))) >= (max((((((/* implicit */unsigned long long int) arr_42 [i_19])) % (arr_11 [10] [6ULL] [8LL]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)29132)), (288728981U))))))));
        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_19])) ? (((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) ((arr_60 [i_19 + 1]) == (var_9))))))) : (min((arr_6 [0U] [i_19 + 2]), (arr_6 [(signed char)14] [i_19 - 2])))));
    }
    var_51 = ((/* implicit */signed char) (~(var_6)));
    var_52 *= ((/* implicit */unsigned long long int) var_1);
}
