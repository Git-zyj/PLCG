/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216088
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) (+(min((-7883883715983739113LL), (((/* implicit */long long int) var_1))))));
                    arr_8 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_5 [i_1] [i_1]))))) + (((unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) 576179277326712832LL))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) ((max(((~(((/* implicit */int) arr_3 [2U] [i_0])))), (((/* implicit */int) arr_4 [10LL] [i_0])))) < (min(((~(((/* implicit */int) arr_3 [6ULL] [6ULL])))), (var_3)))));
        var_11 = ((/* implicit */short) max(((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_5 [i_0] [(unsigned short)1]))));
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
        {
            var_12 = (i_3 % 2 == 0) ? (((/* implicit */int) min((min((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_2 [i_3]))), (((/* implicit */unsigned long long int) ((arr_12 [i_3] [i_4 - 1]) << (((arr_12 [i_3] [i_4 - 1]) - (3962820387U))))))))) : (((/* implicit */int) min((min((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_2 [i_3]))), (((/* implicit */unsigned long long int) ((arr_12 [i_3] [i_4 - 1]) << (((((arr_12 [i_3] [i_4 - 1]) - (3962820387U))) - (2055919908U)))))))));
            var_13 &= ((/* implicit */short) min((var_9), (var_9)));
        }
        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((/* implicit */short) var_4)), (min((arr_5 [i_3] [i_5]), (((/* implicit */short) arr_1 [i_3]))))))), (max((arr_17 [i_3] [i_5 - 1]), (arr_17 [i_3] [i_3])))));
            var_15 = ((/* implicit */short) min(((~(min((((/* implicit */long long int) arr_16 [(unsigned short)3] [(short)7])), (var_7))))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)30)), ((+(((/* implicit */int) var_0)))))))));
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                for (long long int i_7 = 3; i_7 < 9; i_7 += 3) 
                {
                    {
                        var_16 = ((short) max((((/* implicit */long long int) ((arr_18 [i_3] [i_5] [i_6] [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)34845))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 3) 
                        {
                            var_17 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_3] [i_5])) : (((/* implicit */int) var_0))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [i_7 - 1] [i_7] [i_7]))))), (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2)))) ? (((arr_21 [i_3] [i_5] [i_6] [i_3] [(_Bool)1]) - (arr_18 [i_3] [i_3] [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_5 [i_5] [i_8])) ? (arr_21 [i_5] [i_5 + 3] [i_6 - 1] [i_3] [2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27541))))))));
                            var_18 = ((/* implicit */unsigned int) arr_20 [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                        }
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) (((~(min((arr_19 [6] [(signed char)9] [i_3] [(short)0]), (((/* implicit */long long int) arr_11 [i_3])))))) > (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_3] [i_5] [i_3] [i_3])))));
            var_20 = ((/* implicit */long long int) max(((+(3355541963U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_4)), (arr_0 [i_5 + 3] [i_5 + 3]))))));
        }
        var_21 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_8), (((/* implicit */short) (unsigned char)9)))))))), (min((((/* implicit */unsigned long long int) (+(125829120LL)))), (arr_20 [i_3] [i_3] [i_3])))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 4; i_9 < 14; i_9 += 2) 
    {
        var_22 = ((/* implicit */long long int) (+(arr_26 [i_9 - 2])));
        arr_29 [i_9] |= ((/* implicit */int) arr_28 [i_9]);
        var_23 = ((short) arr_28 [8LL]);
    }
    /* LoopNest 2 */
    for (short i_10 = 2; i_10 < 18; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        var_24 = ((/* implicit */short) var_5);
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((1359286433U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) : (((arr_30 [i_10]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_10] [i_11] [i_12] [i_13] [i_13 + 1])))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (1418112688U)))), (max((arr_30 [i_12]), (((/* implicit */unsigned long long int) arr_37 [i_10] [i_11] [i_12] [i_10] [i_11])))))) : ((+(arr_30 [i_10]))))))));
                    }
                    for (unsigned char i_14 = 1; i_14 < 17; i_14 += 1) 
                    {
                        var_26 *= ((/* implicit */unsigned char) var_3);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 19; i_15 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) ((unsigned short) (~(2935680863U))));
                            var_28 &= ((/* implicit */long long int) 2935680863U);
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (unsigned short)57029))));
                        }
                        for (long long int i_16 = 0; i_16 < 19; i_16 += 3) /* same iter space */
                        {
                            arr_48 [i_10] [i_10] [i_10] [3LL] [3LL] [i_14] = max((((/* implicit */unsigned long long int) arr_38 [i_10] [i_14 + 1] [i_12] [i_12] [i_16])), ((-((~(0ULL))))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_1)), (9223372036854775807LL)))))) <= (((((unsigned long long int) arr_39 [i_10 + 1])) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (arr_42 [i_10] [i_10] [i_14] [(short)9])))))))))));
                            var_31 = ((/* implicit */unsigned char) (-(((var_0) ? (((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_11] [i_14] [i_12] [i_11] [13]))) + (arr_40 [i_14] [i_11] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17)))))));
                            var_32 = ((_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)8))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_30 [i_12])))));
                            var_33 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)245)))) & (arr_45 [i_10] [(_Bool)1] [i_16]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_38 [i_14 - 1] [i_14] [i_14 - 1] [i_14] [i_14])))));
                        }
                    }
                    var_34 = ((/* implicit */short) arr_47 [i_10] [i_10]);
                }
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned char i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        {
                            var_35 ^= ((/* implicit */short) arr_49 [i_10 + 1] [(unsigned short)13] [1] [i_18]);
                            var_36 = ((/* implicit */_Bool) arr_53 [i_18]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_37 &= ((/* implicit */unsigned char) ((_Bool) var_5));
}
