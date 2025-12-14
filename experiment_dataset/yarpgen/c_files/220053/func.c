/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220053
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_11))) || (min((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) ((short) (short)15386)))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) min((arr_8 [i_0] [i_1 + 1] [i_3] [i_3]), (arr_8 [i_0] [i_1 + 1] [i_2] [i_3])))), (((((/* implicit */_Bool) ((unsigned char) arr_10 [i_0] [i_0] [i_3] [17ULL]))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((9223372036854775807LL), (((/* implicit */long long int) (short)1023))))))));
                            var_14 = ((((/* implicit */_Bool) 16069704397188284461ULL)) ? (((/* implicit */int) (unsigned short)30043)) : (((/* implicit */int) (short)21671)));
                            var_15 += ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)15] [2LL] [(unsigned short)10])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_4])) : (((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_0] [i_4])))));
                            arr_14 [i_1 - 2] [i_1] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((((((var_0) ? (((/* implicit */long long int) arr_10 [(_Bool)1] [i_1] [i_2] [(unsigned short)11])) : (arr_12 [i_2] [(unsigned short)4] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2]))) >= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_1 - 2] [i_3] [3ULL])), (var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))) >= (arr_12 [i_0] [i_0] [i_2 + 1] [i_0] [i_1] [i_1] [i_2]))))) : (min((8630262006737341337ULL), (((/* implicit */unsigned long long int) 65280))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) arr_11 [i_2 - 1] [i_2] [i_1 - 2] [i_2] [i_1 - 2]);
                arr_15 [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) (short)15386)) ? (9816482066972210261ULL) : (((/* implicit */unsigned long long int) -1062260437)))), (((/* implicit */unsigned long long int) ((long long int) (short)15414)))));
            }
            for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_9 [i_0] [(signed char)3] [i_1] [i_5]))) * (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [6LL] [(unsigned short)14])) <= (arr_10 [(short)7] [5ULL] [i_0] [13ULL]))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1] [i_5 - 2]))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_5 - 2])), (((arr_4 [i_0] [i_1] [i_5 + 1]) - (arr_5 [i_0])))))));
                arr_18 [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) arr_1 [(signed char)17] [(_Bool)1]);
                var_18 |= ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (unsigned short)33966)), (1062260439))), (2147483647)));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_6 [i_1]))));
                arr_19 [i_0] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_0]))) ^ (((arr_7 [i_0] [i_0] [i_1] [i_5]) | (((/* implicit */int) var_2))))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_1)))) ? (arr_4 [i_0] [i_1 - 2] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((int) arr_0 [i_0])))))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 3; i_6 < 16; i_6 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */long long int) ((arr_3 [i_6 - 2]) * (arr_3 [i_6 - 1])));
                arr_22 [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [5LL] [i_1] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_9 [i_0] [1ULL] [i_1 - 2] [i_6])) : (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1 - 2] [8ULL]))));
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_6 - 1] [i_6] [i_6]))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [9U] [i_0]))) : (arr_4 [10U] [i_1] [i_6 + 2])))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((long long int) ((long long int) arr_5 [(signed char)15]))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    for (int i_9 = 1; i_9 < 15; i_9 += 3) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned char) ((0LL) != (374716637232870552LL)));
                            arr_31 [6ULL] [i_8 - 1] [6ULL] [i_1] [i_1] [6ULL] [i_0] |= ((/* implicit */int) ((long long int) max((arr_29 [i_0] [i_0] [i_0] [i_1 + 1] [(unsigned short)12]), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] = var_5;
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_9 + 2] [i_9 + 1] [i_9 - 1] [(unsigned short)5])) ? (arr_11 [i_1 - 1] [i_0] [i_9] [i_9 - 1] [i_9]) : (((/* implicit */unsigned long long int) arr_28 [i_0] [7LL] [i_9] [i_9 + 1] [i_9] [i_9])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_9] [i_0] [i_9 + 1] [i_9 + 2] [i_9 + 1])) ? (arr_28 [(unsigned char)0] [(unsigned char)0] [i_0] [i_9 + 3] [i_9] [i_9]) : (arr_28 [i_0] [(unsigned char)7] [5ULL] [i_9 + 1] [i_9 + 1] [i_9])))))))));
                        }
                    } 
                } 
                arr_33 [i_7] = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_26 [i_7] [i_1 + 1])) : (((/* implicit */int) arr_23 [16ULL] [i_1 + 1] [16ULL] [16ULL])))) & (((((/* implicit */int) arr_26 [i_7] [i_1 - 1])) & (((/* implicit */int) arr_23 [i_1] [i_1 - 1] [i_7] [i_7])))));
                arr_34 [i_0] [i_1] [i_7] = ((/* implicit */unsigned char) ((2377039676521267154ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79)))));
            }
            var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_17 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_17 [(signed char)3] [i_1 + 1]))))) == (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1 - 1] [(signed char)15])))))) : (arr_28 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    {
                        arr_42 [(unsigned char)7] [i_1 + 1] [(unsigned char)7] [i_11] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_1 + 1] [i_11] [8LL] [i_10])) <= (((/* implicit */int) min((arr_25 [i_1 + 1] [i_1] [(unsigned char)16] [(unsigned char)16]), (arr_25 [i_1 + 1] [i_0] [i_11] [i_1 + 1]))))));
                        var_26 = ((/* implicit */_Bool) ((((unsigned int) arr_1 [i_1 + 1] [i_1 + 1])) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2470914817U))))));
                        var_27 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((arr_21 [i_0] [2U]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_0] [(unsigned char)9] [(signed char)10] [i_0]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11] [i_10] [i_1] [i_0])))))), (arr_36 [i_0] [i_1 + 1] [i_10] [i_0])));
                        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_3 [i_1 + 1]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_38 [i_0] [(unsigned short)4] [i_10] [i_11])))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_11] [i_10] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [(_Bool)1] [i_11])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_10] [i_11])))));
                    }
                } 
            } 
        }
        for (unsigned short i_12 = 2; i_12 < 17; i_12 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_12]))) % (arr_24 [i_0] [3LL] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((arr_30 [i_0] [i_12] [i_0] [i_12] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0])))))) < (max((((/* implicit */unsigned long long int) arr_28 [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_0] [i_12 - 1])), (((((/* implicit */_Bool) arr_1 [i_12 - 1] [15ULL])) ? (arr_40 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_12] [(unsigned short)8]))))))))))));
            var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_7 [(signed char)7] [i_12] [i_12 - 2] [i_12])))) ? (((((/* implicit */unsigned long long int) arr_36 [i_12 + 1] [i_12] [i_12] [i_0])) / (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_12] [i_12])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [(unsigned short)9] [(unsigned char)9] [i_12 - 2] [i_12])) << (((/* implicit */int) arr_8 [(signed char)8] [i_12] [i_12 - 1] [i_12])))))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((unsigned int) arr_16 [13U] [i_12] [i_12])) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_12 + 1])))))) + (((((var_8) & (arr_10 [i_0] [(signed char)17] [i_0] [i_12]))) * (((((/* implicit */int) arr_20 [i_0])) | (((/* implicit */int) var_7))))))));
            arr_46 [i_0] [i_0] = ((/* implicit */unsigned char) arr_44 [i_0] [i_0]);
        }
    }
    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_13] [i_13] [(unsigned short)16] [(unsigned short)16])) - (((((/* implicit */int) arr_8 [(unsigned char)4] [i_13] [i_13] [(unsigned char)4])) + (((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_13]))))));
        var_33 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_44 [i_13] [i_13]))) ? (arr_36 [i_13] [i_13] [i_13] [3LL]) : (((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_13] [i_13])) + (((/* implicit */int) arr_45 [i_13] [i_13])))))));
        arr_51 [(unsigned char)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [(unsigned short)12] [i_13] [i_13] [(unsigned short)12] [i_13] [i_13])) >> (((((/* implicit */int) var_12)) - (33280))))) % (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_5)))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_13])) ? (arr_28 [(_Bool)1] [(_Bool)1] [i_13] [i_13] [(_Bool)1] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_13])))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (arr_11 [i_13] [i_13] [i_13] [(unsigned short)0] [(unsigned char)6]))))) : (((/* implicit */unsigned long long int) ((int) arr_24 [i_13] [i_13] [i_13])))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        arr_54 [i_14] [i_14] = ((/* implicit */short) arr_53 [i_14]);
        arr_55 [i_14] [i_14] = ((/* implicit */unsigned char) arr_53 [2U]);
        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_14])) ? (arr_53 [i_14]) : (arr_53 [i_14])));
        var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_14])) ? (arr_53 [(unsigned short)12]) : (arr_53 [6U])));
        /* LoopNest 2 */
        for (unsigned char i_15 = 2; i_15 < 20; i_15 += 4) 
        {
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                {
                    var_36 = ((/* implicit */_Bool) ((((_Bool) arr_56 [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) ((((/* implicit */int) arr_59 [(unsigned short)19] [i_15])) <= (((/* implicit */int) arr_52 [i_16]))))) : (((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) arr_58 [i_16] [i_15] [i_14])))))));
                    arr_61 [3LL] = ((/* implicit */unsigned long long int) arr_56 [i_15 - 2] [i_15] [i_15]);
                    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [18ULL] [i_15 + 1])) ? (((/* implicit */int) arr_59 [i_16] [i_15 - 2])) : (((/* implicit */int) arr_59 [i_16] [i_15 + 1]))));
                    var_38 = ((/* implicit */_Bool) ((((arr_57 [i_14] [i_14]) / (((/* implicit */int) arr_59 [i_14] [(short)4])))) * (((/* implicit */int) ((short) arr_59 [9ULL] [i_15])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        for (int i_18 = 2; i_18 < 21; i_18 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_14] [i_14])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_63 [i_14] [i_16] [i_17] [i_18]))));
                                var_40 = ((/* implicit */_Bool) ((long long int) arr_65 [(signed char)17] [(signed char)0] [i_16] [i_18 - 1] [i_18 - 1]));
                                arr_68 [i_14] [i_14] [i_14] [i_14] [i_14] = ((((/* implicit */int) arr_65 [0LL] [(unsigned char)11] [(unsigned char)11] [i_18 - 2] [i_15 + 2])) == (((/* implicit */int) arr_65 [i_14] [i_15 + 2] [12LL] [i_18 + 1] [i_15 + 2])));
                                var_41 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_56 [i_16] [i_16] [14])) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_14] [i_15] [i_17]))) == (var_11))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_42 &= ((/* implicit */_Bool) var_11);
    var_43 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_7))));
}
