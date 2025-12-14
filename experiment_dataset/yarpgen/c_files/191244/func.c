/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191244
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_9 [i_1] [i_1] [i_1] [9U] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [5])) : (2097151))) & (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (_Bool)1)))))));
                        var_13 ^= ((/* implicit */_Bool) arr_3 [i_0]);
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_14 = (!(((/* implicit */_Bool) var_9)));
                            arr_13 [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 - 3])) != (((/* implicit */int) (signed char)-51))));
                            arr_14 [i_4] [9LL] [(_Bool)1] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */int) arr_1 [i_0]);
                            arr_15 [(signed char)1] [i_1] [i_2] [i_1] [(signed char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_4 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) (signed char)38))));
                        }
                        for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (signed char)50)) : (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) - (var_0))))));
                            arr_19 [i_1] = (+(((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) arr_18 [i_2] [i_1] [i_2] [i_2 + 3] [i_2] [i_2 - 2] [i_2 + 3])) : (((/* implicit */int) (signed char)40)))));
                        }
                    }
                    var_16 ^= ((/* implicit */unsigned long long int) var_0);
                    var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((_Bool) var_4)) ? (max((arr_17 [0] [i_2] [0] [i_2 - 4] [0]), (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)50)))))))) <= (arr_12 [i_1] [i_2] [i_2 - 1])));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [8]))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) ((arr_0 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [i_6] [i_6] [i_7] [i_8])) : (var_8)));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_7])))))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */int) var_0);
                }
                for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    arr_30 [(_Bool)0] [i_1] [(_Bool)0] [i_1] = ((/* implicit */unsigned int) (-(min((arr_23 [i_0] [i_0] [i_0] [10]), (((/* implicit */int) arr_8 [i_1]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        arr_34 [8] [8] [i_1] = ((((((/* implicit */_Bool) (signed char)-51)) && (((/* implicit */_Bool) arr_8 [i_10])))) ? ((+(((/* implicit */int) max(((signed char)50), ((signed char)-49)))))) : ((~(((/* implicit */int) arr_8 [i_9])))));
                        var_22 ^= ((/* implicit */unsigned int) (signed char)39);
                        arr_35 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((int) ((unsigned int) arr_20 [i_1] [i_1] [i_9] [i_10])));
                    }
                    for (int i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        arr_39 [i_0] [i_1] [i_0] [i_11] = ((/* implicit */short) ((signed char) (~(min((((/* implicit */int) (signed char)31)), (arr_25 [i_0] [1] [i_9] [i_9] [(_Bool)1] [i_9] [(short)7]))))));
                        arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((var_1) % (((/* implicit */unsigned int) max((arr_29 [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1]), (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */int) (signed char)-32)), (arr_6 [(signed char)12] [(signed char)12])))))));
                        arr_41 [(short)4] [i_1] = ((/* implicit */short) (signed char)-51);
                        var_23 ^= ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_1])) == (((/* implicit */int) ((var_4) || (((((/* implicit */int) arr_8 [i_1])) >= (arr_29 [i_9] [i_9] [i_11] [i_11]))))))));
                        arr_42 [i_11] [i_11] [i_11] [i_11] [i_11] [i_1] = ((/* implicit */short) var_4);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) (-(((int) arr_37 [i_0] [11] [i_12] [i_12] [i_1]))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_25 ^= ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (signed char)-51)));
                            var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_46 [i_9] [i_9] [(_Bool)1] [(_Bool)1] [i_9] [i_9] [1U])))) ? (((/* implicit */int) arr_45 [i_0] [i_1])) : ((+(((/* implicit */int) (signed char)72))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            var_27 ^= ((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0]);
                            var_28 ^= ((/* implicit */unsigned int) arr_20 [7] [7] [i_9] [i_12]);
                            arr_50 [i_14] [i_1] [1] [6] [i_14] [6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_0] [i_0] [i_9] [i_9])) * (((/* implicit */int) arr_49 [i_1] [i_1] [6] [5] [7] [i_12]))))) ? (((((/* implicit */_Bool) arr_43 [i_0] [7] [i_9] [i_12] [i_9])) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (signed char)31)))) : (((/* implicit */int) arr_45 [i_0] [9]))));
                            arr_51 [i_9] [(short)2] [i_9] [i_9] [i_1] = (+(arr_17 [i_0] [i_1] [i_9] [i_1] [i_1]));
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        for (short i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
                                var_30 ^= (((+(((/* implicit */int) arr_7 [i_1] [10U] [i_16])))) != (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        arr_68 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_17] [i_17] [(short)2]))) / (arr_43 [10] [10] [i_17] [2ULL] [i_18]))) : (arr_48 [i_1] [i_1]))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-32)) | (((/* implicit */int) (signed char)31)))))))));
                        arr_69 [i_0] [i_0] [i_17] [i_1] = ((/* implicit */int) ((((max((((/* implicit */long long int) (signed char)31)), (var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))))) | (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                    arr_70 [i_0] [i_1] [8] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (signed char)25))));
                    arr_71 [i_0] [i_1] [4LL] [i_0] = max((((/* implicit */int) (signed char)-36)), (var_2));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 1) 
    {
        arr_74 [i_19] [4] = ((/* implicit */unsigned int) max((((/* implicit */signed char) arr_72 [i_19])), ((signed char)-32)));
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                {
                    var_31 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_79 [i_19] [i_19] [i_21] [i_21]))))));
                    var_32 = ((/* implicit */int) max((max((arr_73 [i_19]), (arr_73 [i_19]))), (((/* implicit */long long int) ((((/* implicit */int) arr_72 [i_19])) ^ (((((/* implicit */_Bool) arr_73 [i_19])) ? (((/* implicit */int) (signed char)-42)) : (arr_79 [i_19] [i_19] [i_20] [(_Bool)1]))))))));
                    arr_80 [(signed char)12] [i_20] [(signed char)12] = ((/* implicit */int) (signed char)29);
                }
            } 
        } 
    }
    var_33 ^= ((/* implicit */unsigned int) ((max((max((((/* implicit */unsigned long long int) var_4)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_5)))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (signed char)50)) : (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)38)) << (((((/* implicit */int) (signed char)48)) - (39)))))) : (var_1))))));
}
