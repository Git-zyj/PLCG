/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189828
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_2] [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) arr_11 [(unsigned char)12] [i_2] [i_2 + 1] [i_2] [(unsigned char)12] [i_4]))))) ? (((var_1) / (var_12))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (var_12)))));
                                var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [(_Bool)1] = ((arr_5 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */short) var_6);
                        arr_24 [i_5] [i_6] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) arr_19 [i_0] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))));
                        arr_25 [i_7] [i_5] [i_5] [i_5] [i_0 + 1] = ((/* implicit */_Bool) var_14);
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((((/* implicit */int) arr_21 [i_0] [i_5])) | (((/* implicit */int) arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                    }
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) arr_10 [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ^ (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1]))))))));
                            var_20 = ((/* implicit */long long int) var_8);
                            arr_33 [i_0] [i_0] [i_6] [i_0] [i_9] [i_9] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_8)))) ? ((-(-11))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            arr_34 [13ULL] = ((/* implicit */long long int) var_4);
                        }
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                            arr_39 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -9211223315358802178LL)) ? (((/* implicit */unsigned long long int) 445754041)) : (6314873419719807508ULL)));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                    {
                        arr_43 [(_Bool)1] [i_6] [i_5] [i_5] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (_Bool)0))));
                        var_22 -= ((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) <= (((/* implicit */int) (unsigned char)18))));
                    }
                    for (unsigned int i_12 = 3; i_12 < 17; i_12 += 1) 
                    {
                        arr_47 [i_0] [1LL] [i_5] [i_5] [3U] [i_12 - 2] = ((/* implicit */unsigned int) arr_2 [5U] [i_6] [i_0]);
                        arr_48 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_12 + 2] [i_0 + 1] [i_0] [i_0] [i_0 + 1])) ? (var_4) : (arr_28 [i_12 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1])));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_12] [(unsigned char)5] [i_12 + 2] [i_0 + 1])) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */long long int) arr_2 [1ULL] [i_5] [0U]))))));
                    }
                    var_24 = ((/* implicit */long long int) var_10);
                }
            } 
        } 
    }
    for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 2) 
    {
        arr_53 [i_13] [i_13] = ((/* implicit */short) (-((+(((/* implicit */int) arr_49 [i_13 + 2]))))));
        var_25 = ((/* implicit */int) max((var_25), ((~(((((/* implicit */_Bool) ((arr_50 [(unsigned short)22]) ^ (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */int) arr_52 [12U])) | (arr_51 [i_13]))) : ((~(((/* implicit */int) var_6))))))))));
        var_26 -= var_7;
        arr_54 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_49 [12ULL])) : (max((((((/* implicit */int) var_6)) & (((/* implicit */int) arr_49 [i_13])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))));
    }
    var_27 = ((/* implicit */long long int) var_7);
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (var_13)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (var_0))))))) ? (min((min((var_3), (((/* implicit */long long int) var_6)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_0))))) : ((+(((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
}
