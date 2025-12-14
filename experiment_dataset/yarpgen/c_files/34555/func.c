/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34555
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((((/* implicit */_Bool) max((((unsigned char) (unsigned char)60)), (((/* implicit */unsigned char) (_Bool)1))))) && (((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_9))))));
            var_12 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */long long int) 3280287495U)) : (((((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (1LL))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [20LL] [i_0])))))))));
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), ((-(arr_4 [i_1 - 1])))));
            arr_9 [i_0] [12LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_0 [i_0]) / (arr_0 [i_0]))) : (arr_0 [i_0])));
        }
        arr_10 [i_0] = ((/* implicit */short) (+(arr_5 [i_0] [17LL] [15LL])));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >> ((((+(((/* implicit */int) arr_15 [i_2])))) + (74)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                arr_18 [i_3] [i_4] [i_4] [5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-22834)) / (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_2])) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [4LL] [i_3])) || (((/* implicit */_Bool) arr_11 [10LL] [i_6])))))));
                            var_15 = ((/* implicit */_Bool) arr_17 [i_5] [i_3] [i_3] [i_2]);
                            var_16 += (short)-22832;
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_7 = 4; i_7 < 8; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 1; i_8 < 9; i_8 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned int) arr_28 [(signed char)1] [(unsigned char)5]);
                var_18 = max((arr_25 [i_8 + 1] [i_7 + 3]), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-50))))));
                arr_31 [i_2] [9LL] [i_8] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -9223372036854775795LL)))) ? (((((/* implicit */_Bool) (short)-22834)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967283U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 12268873089190097466ULL))))));
                var_19 -= ((/* implicit */signed char) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-22824)))));
            }
            for (long long int i_9 = 1; i_9 < 9; i_9 += 1) /* same iter space */
            {
                var_20 = (i_9 % 2 == zero) ? (((/* implicit */signed char) (((((~(max((arr_11 [i_9 + 1] [i_2]), (((/* implicit */long long int) arr_34 [(unsigned short)4] [i_7])))))) + (9223372036854775807LL))) << (((((((var_4) >> (((((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1] [i_9] [8ULL])) - (36548))))) ^ (((/* implicit */unsigned long long int) 2665971173U)))) - (2665971169ULL)))))) : (((/* implicit */signed char) (((((~(max((arr_11 [i_9 + 1] [i_2]), (((/* implicit */long long int) arr_34 [(unsigned short)4] [i_7])))))) + (9223372036854775807LL))) << (((((((((var_4) >> (((((((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1] [i_9] [8ULL])) - (36548))) + (7363))))) ^ (((/* implicit */unsigned long long int) 2665971173U)))) - (2665971169ULL))) - (32425783770ULL))))));
                /* LoopSeq 3 */
                for (long long int i_10 = 1; i_10 < 10; i_10 += 1) 
                {
                    arr_38 [i_2] [i_7 - 3] [i_9] [i_10] = var_3;
                    arr_39 [i_9] [i_7] [i_9] [i_9] [8U] = ((/* implicit */int) ((((long long int) (unsigned short)16574)) - (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_10] [i_9] [i_9] [i_2])))));
                    var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_17 [(signed char)6] [(signed char)6] [i_7] [i_10])), (arr_34 [i_2] [i_2])))) ? ((-(((/* implicit */int) var_2)))) : (((int) arr_4 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_10 + 1] [i_7 + 2] [i_9 + 2])) && (((/* implicit */_Bool) arr_26 [i_2] [i_9 - 1] [i_10 - 1])))))) : ((+(max((((/* implicit */unsigned long long int) arr_22 [i_2] [i_10])), (var_4)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) ((_Bool) arr_17 [i_9] [i_9] [i_9] [i_7 - 3]));
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) arr_28 [i_7 + 1] [i_9 - 1]);
                        arr_47 [i_2] [i_2] [i_9] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) var_7);
                        var_24 = ((/* implicit */short) (+(arr_30 [i_9 + 1] [i_9 + 2] [i_9] [i_9])));
                        var_25 = ((/* implicit */long long int) ((unsigned char) arr_1 [i_9]));
                    }
                }
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                {
                    var_26 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / ((-9223372036854775807LL - 1LL))))), (((((/* implicit */_Bool) arr_6 [i_9] [i_7] [i_9])) ? (((/* implicit */unsigned long long int) arr_45 [2LL] [i_9] [7U] [i_9] [i_2])) : (var_4)))))) ? (max((18446744073709551615ULL), (arr_23 [i_7 + 1] [i_9] [i_2] [i_9] [(unsigned char)10]))) : (((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */long long int) max((2971533790U), (((/* implicit */unsigned int) var_8)))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        arr_53 [i_2] [i_7] [(unsigned char)5] [i_9] [i_14] = ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_13 [i_2] [(_Bool)1] [i_9])))));
                        arr_54 [i_9] = ((/* implicit */unsigned char) arr_16 [i_14] [i_9] [i_9] [i_2]);
                        var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (unsigned char)192))))) || (((/* implicit */_Bool) ((unsigned short) var_0))))), (((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_35 [i_7] [i_9] [i_13] [(unsigned short)7]))))));
                        var_28 = ((max((((((/* implicit */long long int) ((/* implicit */int) var_2))) / (-9223372036854775796LL))), (max((arr_36 [i_14]), (((/* implicit */long long int) arr_49 [i_2] [i_7 + 3] [i_9] [i_13] [i_14])))))) % (((/* implicit */long long int) max((arr_50 [i_2] [i_7] [i_2] [i_13] [i_14] [i_13] [i_2]), (((/* implicit */unsigned int) arr_4 [i_7]))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) var_0);
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((arr_23 [i_2] [i_2] [i_9] [i_7] [i_15]) ^ (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (max((arr_28 [i_9] [i_15]), (arr_56 [(unsigned char)8] [(signed char)3] [10LL] [i_9] [i_13] [i_15])))))))))));
                        arr_58 [i_9] [i_7 - 4] = ((/* implicit */unsigned short) max((arr_25 [i_9] [i_15]), (((/* implicit */short) ((_Bool) max((((/* implicit */long long int) arr_50 [i_2] [8U] [(signed char)1] [2U] [i_15] [i_15] [i_2])), (var_6)))))));
                    }
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        arr_63 [i_2] [i_7] [i_9] [i_13] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_13])) ? (((/* implicit */int) max((var_7), (((/* implicit */signed char) arr_21 [i_2] [i_9] [i_9 - 1] [i_13]))))) : (((/* implicit */int) (unsigned short)12655))))) ? (4276634436722222404LL) : (((/* implicit */long long int) arr_4 [i_16]))));
                        arr_64 [2LL] [i_7] [i_9] [i_13] [i_16] [i_13] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) max((1852217792949710742LL), (((/* implicit */long long int) (unsigned char)254)))))) > (((/* implicit */int) var_2))));
                    }
                }
            }
            var_31 = ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) var_9)));
            var_32 = ((/* implicit */unsigned long long int) arr_34 [i_2] [i_7]);
        }
        var_33 = ((/* implicit */_Bool) arr_59 [i_2] [i_2] [i_2] [i_2] [(unsigned char)5] [i_2] [i_2]);
    }
    var_34 = ((/* implicit */signed char) var_11);
    var_35 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) var_2))))), ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6)))))));
    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_3))));
}
