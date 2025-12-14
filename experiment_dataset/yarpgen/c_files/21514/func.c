/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21514
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
    var_16 = min(((~(((/* implicit */int) ((unsigned char) var_15))))), ((~(((((/* implicit */int) var_10)) << (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) var_11);
                arr_6 [i_1] = ((/* implicit */signed char) ((unsigned long long int) var_2));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) ((unsigned char) (-(var_8))));
                            arr_15 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                            arr_16 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                            var_18 = var_4;
                        }
                        for (int i_5 = 2; i_5 < 24; i_5 += 4) 
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_5 - 2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1324095929)))) ? (((((/* implicit */_Bool) 1324095929)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_7 [i_1]))) : (var_8)));
                            var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
                            arr_22 [i_1] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_7))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_14 [(signed char)16] [(signed char)17] [i_2 + 2] [i_1] [i_0]))) < (-1324095922)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 4; i_6 < 21; i_6 += 2) 
                        {
                            arr_26 [i_2] [(short)0] [i_2] [i_1] [i_1] [(short)0] = var_13;
                            var_21 &= var_9;
                        }
                        for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_22 *= ((/* implicit */short) (+(4823184257032854420ULL)));
                            var_23 = ((/* implicit */unsigned long long int) var_7);
                        }
                        arr_29 [i_1] [i_1] = ((/* implicit */_Bool) var_9);
                    }
                    var_24 -= ((/* implicit */unsigned char) (-(((((/* implicit */int) ((unsigned char) var_10))) << (((/* implicit */int) var_7))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        arr_34 [i_1] = ((/* implicit */unsigned long long int) var_11);
                        arr_35 [i_1] [i_0] [(signed char)2] [i_1] [i_1] [i_9] = ((/* implicit */short) arr_30 [i_8] [19LL]);
                        arr_36 [i_0] [(signed char)5] [i_8] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-42)) ? (0LL) : (0LL)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        arr_39 [9ULL] [i_1] [i_8] [23LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
                        var_25 = var_13;
                        var_26 = ((/* implicit */_Bool) ((unsigned long long int) 2771717811U));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_12 = 1; i_12 < 24; i_12 += 4) 
                        {
                            var_27 &= ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) var_6)))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) : (var_8)));
                        }
                        for (short i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            arr_49 [i_1] [i_1] [i_8] [i_11] [i_13] = ((/* implicit */unsigned long long int) var_14);
                            var_29 = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                            arr_50 [i_1] [i_1] [(signed char)4] [i_1] [i_0] = ((/* implicit */unsigned char) (+(arr_1 [i_0])));
                        }
                        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))));
                            var_31 = ((/* implicit */unsigned int) ((long long int) (_Bool)0));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (~(var_8))))));
                        }
                        for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
                        {
                            arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) (signed char)0));
                            var_33 = var_13;
                        }
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(758992244U)))) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_11])) : ((~(((/* implicit */int) arr_11 [i_1] [i_1]))))));
                        arr_57 [i_0] [i_1] [i_8] [i_11] = ((/* implicit */unsigned int) var_11);
                        arr_58 [(_Bool)1] [(_Bool)1] [i_1] [i_8] [i_0 + 1] = ((/* implicit */signed char) (+(11773727505688489534ULL)));
                    }
                    var_35 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+((-(((/* implicit */int) var_10))))))), (max((((((/* implicit */_Bool) var_6)) ? (var_4) : (arr_25 [i_8] [i_1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (signed char)-42)))))))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) var_7))))), (var_5))))));
                                var_37 = ((/* implicit */int) ((signed char) var_12));
                                var_38 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)18844)), (max((max((((/* implicit */unsigned long long int) (_Bool)0)), (16917264944514641684ULL))), (((/* implicit */unsigned long long int) var_6))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned long long int) ((var_1) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)42)))), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4)))))))));
                }
            }
        } 
    } 
}
