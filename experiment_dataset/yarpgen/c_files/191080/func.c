/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191080
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
    var_13 = min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_10)))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) 8802070332094956518ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41097))) : (8802070332094956518ULL))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3478246309854590029ULL)))))) - (arr_1 [i_1])))));
                        var_15 = ((/* implicit */unsigned char) arr_7 [2] [i_1] [i_0]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) arr_10 [(signed char)21] [i_1] [i_1] [i_5]);
                        var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_4), (((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_5])))), (((/* implicit */unsigned short) var_12))))) ? ((~(16383ULL))) : (max((((/* implicit */unsigned long long int) ((-442752436986829669LL) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_5])))))), (max((var_8), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_1] [i_4]))))))));
                    }
                } 
            } 
            var_18 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [11] [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [(signed char)3] [i_1]) : (arr_10 [i_0] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1]))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_8] [i_0])) || (((/* implicit */_Bool) arr_15 [i_7 + 3] [i_6] [i_1]))))) : (((/* implicit */int) arr_21 [i_8])))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_8] [i_8] [i_0] [i_8] [i_0]))))) ? (((/* implicit */int) ((unsigned char) arr_20 [i_0] [i_6] [i_7]))) : (((/* implicit */int) var_4)))))));
                            arr_27 [i_0] [i_6] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) == (-442752436986829670LL)));
            }
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                var_22 *= ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_12 [i_1] [i_1] [i_1] [i_1])), ((short)28575)))))));
                arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(442752436986829674LL)));
                var_23 += ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))))))));
            }
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                arr_33 [i_0] = ((/* implicit */short) ((259922692U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13)))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [i_10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_10] [i_10]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_0] [i_0] [i_10])))))));
                arr_34 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_10])) ? (arr_15 [i_0] [8U] [i_10]) : (((/* implicit */int) var_4))));
                var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-31))))) ? (arr_10 [i_0] [i_1] [i_10] [i_1]) : (((/* implicit */long long int) (~(4294967287U))))));
            }
        }
        var_27 = ((/* implicit */signed char) arr_19 [i_0] [i_0] [1ULL]);
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                {
                    var_28 = ((/* implicit */signed char) (+(((((((/* implicit */unsigned long long int) arr_10 [i_12] [i_11] [i_11] [i_0])) * (arr_22 [i_0]))) - (((/* implicit */unsigned long long int) ((unsigned int) var_0)))))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 4; i_13 < 19; i_13 += 2) /* same iter space */
                    {
                        arr_41 [i_13] [i_13 - 2] [i_13 - 2] [i_13] [i_0] [i_13 - 3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)24)), (13174072616793398704ULL)));
                        var_29 *= ((/* implicit */unsigned long long int) max((((/* implicit */short) ((var_3) == (((/* implicit */int) var_4))))), (min((arr_18 [i_13]), (((/* implicit */short) var_1))))));
                    }
                    for (signed char i_14 = 4; i_14 < 19; i_14 += 2) /* same iter space */
                    {
                        var_30 = (~(((/* implicit */int) (short)4604)));
                        var_31 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 9644673741614595084ULL)) ? (9898599211573696748ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103)))));
                    }
                    arr_44 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) var_9));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) var_2))));
}
