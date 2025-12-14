/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233281
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_13 += ((/* implicit */unsigned char) min((((((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 2] [2ULL])) : (((/* implicit */int) arr_1 [(unsigned char)12] [i_0 - 3])))))), (var_5)));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) << (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 3])) - (15523)))))) ? ((+(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))) : (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 1]))))));
            var_14 ^= (+(((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) <= (((/* implicit */int) arr_4 [i_1])))))) : (arr_2 [i_1] [i_0]))));
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_15 ^= ((/* implicit */short) var_5);
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((min((arr_2 [i_0 - 2] [i_0 - 1]), (((/* implicit */unsigned long long int) var_4)))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_17 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [(short)10])) || ((!(((/* implicit */_Bool) 10895095835422442885ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_0] [i_4]), (((/* implicit */unsigned long long int) arr_1 [13] [13]))))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_9 [i_0 - 2] [4ULL] [i_4]))))) ? (arr_2 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 3] [(short)10] [i_0 - 1])))))));
                        var_18 ^= ((/* implicit */unsigned char) arr_8 [i_3] [i_2] [13ULL]);
                        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_0 - 2])) ? ((~(((/* implicit */int) arr_6 [i_4] [(unsigned char)2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)124)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 3] [4ULL] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [4] [i_0])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))))))) : (arr_2 [i_0] [i_4])));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(signed char)14] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_2] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_5] [i_0 - 3]))));
                            arr_17 [i_0 + 1] [i_2] [i_0] [8] [i_5] = ((/* implicit */unsigned long long int) (-((+(var_5)))));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_0] [i_4] [i_3] [i_0] [i_0]))));
                            var_22 -= ((/* implicit */int) arr_4 [i_0]);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_23 *= ((/* implicit */unsigned long long int) arr_21 [i_3] [i_2] [i_0 - 3]);
                            var_24 &= ((/* implicit */short) (-((+(var_12)))));
                            var_25 += ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)29074))))));
                            var_26 |= var_1;
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_0 + 1] [i_3 + 3] [i_3 + 2] [i_3 + 4])))))));
                        }
                        var_28 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 - 2] [i_0 - 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (arr_15 [i_0] [(unsigned char)9]))))) : (((((/* implicit */_Bool) var_3)) ? (arr_20 [i_0 - 3] [i_2] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_2]))))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 1) 
            {
                arr_28 [i_0] [i_7] [14ULL] &= arr_11 [i_7] [(short)13];
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (min((((/* implicit */unsigned long long int) arr_18 [i_9] [i_9] [i_9] [i_9])), (((min((((/* implicit */unsigned long long int) var_1)), (var_12))) ^ (((((/* implicit */_Bool) arr_26 [i_10] [(short)1] [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_7] [i_8 - 1] [(signed char)15]))) : (var_9)))))))));
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7 + 1])) ? (((/* implicit */int) max((arr_10 [i_0] [i_8] [i_9]), (((/* implicit */short) arr_12 [i_0 - 3] [i_7 + 1] [i_8 - 2] [i_9] [i_10]))))) : (((/* implicit */int) min((arr_8 [i_0 - 2] [i_0] [i_10]), (((/* implicit */short) arr_24 [i_9])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_32 [4ULL] [i_7] [i_7 - 1] [(signed char)4] [i_9] [i_9] [i_10]), (((/* implicit */unsigned long long int) arr_10 [13] [13] [i_10]))))) ? (((/* implicit */int) arr_31 [i_8 + 2] [8])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_21 [i_9] [i_8 - 1] [i_7])) : (((/* implicit */int) (signed char)36))))))) : ((+(arr_20 [i_0 - 1] [i_0] [i_0 - 2] [(short)7] [i_7 + 1])))));
                            var_31 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_22 [i_9]))));
                            var_32 = ((/* implicit */int) (+(((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7 - 1] [(short)0] [i_10])))))));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 4; i_11 < 15; i_11 += 1) 
            {
                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_27 [i_0 - 2] [i_0] [i_7] [(short)6]))));
                var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_29 [i_7 - 1] [i_7 - 2] [i_11 - 3] [i_11 - 2])) ? (((((/* implicit */_Bool) arr_7 [i_0 + 1] [(short)8])) ? (((/* implicit */int) arr_13 [i_0 - 2] [i_7 - 1] [i_11 + 1] [i_7] [(unsigned char)5] [i_11 + 1])) : (((/* implicit */int) (short)26437)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [13ULL])) : (((/* implicit */int) arr_9 [i_11] [4ULL] [i_0])))))) : (((/* implicit */int) arr_4 [i_7 - 1]))));
            }
            for (signed char i_12 = 2; i_12 < 16; i_12 += 3) 
            {
                arr_40 [i_0] [i_12 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_39 [i_0 - 2] [i_0] [i_0 - 2] [i_0]))));
                /* LoopSeq 4 */
                for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (((((/* implicit */_Bool) max((arr_42 [i_0 - 1] [(unsigned char)12] [0ULL] [(signed char)14]), (arr_11 [i_0 + 1] [i_7 - 2])))) ? (((arr_20 [i_0] [i_0 + 1] [i_7] [i_12] [i_13]) % (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_13] [i_12] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        arr_45 [i_0 - 2] [i_7] [i_12 + 1] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0 - 1])) ? (var_9) : ((+(((((/* implicit */_Bool) arr_16 [i_0] [i_12 - 1] [i_12] [i_13] [i_0])) ? (arr_20 [i_0] [i_7] [i_12 + 1] [i_13] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0 + 1])))))))));
                        var_36 = ((/* implicit */signed char) var_0);
                    }
                }
                for (unsigned char i_15 = 1; i_15 < 16; i_15 += 3) 
                {
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_1), (var_7)))))))));
                    arr_48 [i_0] [i_7] [i_12 - 2] [i_15 - 1] = arr_13 [i_15 - 1] [i_15 + 1] [i_12 - 1] [i_7] [i_7] [i_0 - 2];
                    var_38 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_4 [i_7 + 1])) << (((((/* implicit */int) arr_4 [i_7 - 1])) - (229)))))));
                    arr_49 [i_0] [(short)2] = ((/* implicit */unsigned char) arr_1 [i_0] [i_12 - 1]);
                }
                for (signed char i_16 = 2; i_16 < 16; i_16 += 1) 
                {
                    arr_52 [i_0 + 1] [i_7 - 1] [i_0] = ((/* implicit */int) arr_14 [i_0]);
                    var_39 -= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_12] [8ULL])) ? (((/* implicit */int) arr_18 [i_0 + 1] [i_0] [i_0 - 3] [i_0])) : (((/* implicit */int) arr_51 [i_16 + 1] [i_12 - 2] [i_0 - 2] [i_0 - 2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_16] [i_0 - 1] [i_7] [i_0 - 1]))) - (var_11))));
                }
                /* vectorizable */
                for (short i_17 = 3; i_17 < 16; i_17 += 1) 
                {
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_1 [i_0 - 2] [i_7]))))) > (((/* implicit */int) var_6))));
                    var_41 = ((/* implicit */unsigned long long int) arr_54 [i_17] [i_12 - 1] [i_17 - 2] [i_12 - 1]);
                    arr_55 [11ULL] [i_0] [i_12] [i_12] [11ULL] = ((((((/* implicit */_Bool) arr_41 [i_17 - 2] [(unsigned char)5] [i_12 - 2] [i_0 - 2] [i_7] [i_0 - 2])) ? (((/* implicit */int) arr_26 [i_12] [i_7 + 1] [i_12 - 2])) : (((/* implicit */int) arr_41 [i_12] [i_7 - 2] [i_12] [i_17 - 1] [i_12] [i_12 - 1])))) % (arr_33 [i_0] [(signed char)5] [i_12] [i_12 + 1]));
                }
            }
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 4) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 4) 
                {
                    {
                        var_42 = ((/* implicit */short) arr_59 [i_0] [i_0]);
                        var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7 - 2] [i_0 + 1] [i_0 - 2])) ? (((arr_44 [i_0] [i_0 + 1] [i_7] [i_0 - 3] [i_18] [i_19] [i_0]) - (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7 + 1] [i_7 + 1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_50 [i_0] [i_0] [i_0 - 3] [0ULL] [4ULL] [i_0 - 1]) <= (arr_33 [i_0 + 1] [i_0 - 2] [i_19] [(signed char)8]))))) : (arr_29 [i_0 + 1] [i_7] [i_19] [i_19]));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_20 = 3; i_20 < 10; i_20 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_21 = 2; i_21 < 10; i_21 += 1) 
        {
            var_44 = (~(arr_11 [i_20] [i_21]));
            arr_66 [i_20 + 2] [i_20] [i_20] = ((/* implicit */short) arr_32 [i_20 + 2] [i_20] [i_20 + 1] [i_20] [i_20 + 2] [i_21 - 1] [i_21]);
            arr_67 [(signed char)8] &= ((/* implicit */short) (~(((/* implicit */int) arr_54 [i_20] [i_21] [i_21 - 2] [i_20 - 2]))));
            /* LoopNest 3 */
            for (signed char i_22 = 1; i_22 < 10; i_22 += 1) 
            {
                for (unsigned char i_23 = 4; i_23 < 9; i_23 += 1) 
                {
                    for (signed char i_24 = 0; i_24 < 12; i_24 += 4) 
                    {
                        {
                            arr_75 [i_20 - 1] [6] [i_22 - 1] [6ULL] [i_24] &= ((/* implicit */int) arr_36 [i_24] [i_23] [i_22] [i_20]);
                            arr_76 [i_20] [i_20] [i_20] = ((/* implicit */unsigned long long int) arr_37 [i_22 + 1] [i_20 - 3] [i_20]);
                        }
                    } 
                } 
            } 
        }
        arr_77 [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_20 - 1] [i_20 + 2] [i_20] [i_20 - 2]))));
        var_45 = ((/* implicit */signed char) arr_29 [i_20 - 3] [7ULL] [i_20 + 1] [i_20 - 2]);
        var_46 = ((arr_11 [i_20] [i_20 + 1]) - (arr_11 [i_20] [i_20 - 2]));
        arr_78 [i_20] = ((/* implicit */signed char) (~(arr_25 [i_20 + 1] [i_20 + 1] [i_20 + 2])));
    }
    var_47 = ((/* implicit */signed char) var_5);
}
