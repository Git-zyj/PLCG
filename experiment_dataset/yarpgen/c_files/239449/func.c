/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239449
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(unsigned char)5] [i_2] [i_0] = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_5)) ? (arr_7 [15ULL] [(unsigned char)16] [(unsigned short)13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned long long int) var_8);
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_3 [i_3])))))) * (((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_0 [i_0]))))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [6LL] [i_0 - 2] [i_0 + 1] [i_0] [i_2] [i_0 - 2] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            {
                arr_22 [i_6] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_19))))));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (int i_9 = 1; i_9 < 17; i_9 += 4) 
                        {
                            {
                                arr_32 [i_5] [15ULL] [(signed char)1] [i_6] [i_7] [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [(short)18] [i_6] [i_9 + 1] [i_8] [i_6] [i_9] [i_7]))))) || ((!(((/* implicit */_Bool) (signed char)-22))))));
                                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [(short)8] [i_5] [i_9 - 1] [(signed char)17] [i_9 + 1])) && (((/* implicit */_Bool) arr_28 [i_6] [i_8] [i_9 + 2] [(short)8] [i_9 + 3])))))) <= ((~(var_18)))));
                                arr_33 [i_5] [i_6] [i_7] [i_8] [0U] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_7] [i_9 + 2])) << (((var_5) - (2275088169U)))))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6)))))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_7] [i_7])) >> (((/* implicit */int) arr_24 [i_5] [i_6] [(signed char)9] [1U])))))))) ? (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) arr_0 [i_5]))))) : (var_3))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        arr_37 [i_6] [i_7] [11] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_5] [12U] [i_7] [i_10])) | (((/* implicit */int) arr_12 [17] [(short)16] [i_7] [i_7] [i_6] [i_7] [3U]))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_23 [i_5] [(_Bool)1] [i_7] [i_10 - 1])) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7] [i_10]))))) | (((/* implicit */int) ((((/* implicit */int) arr_0 [i_6])) != (((/* implicit */int) (unsigned char)174)))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_30 [i_5] [i_7]))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_17 [i_5]))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [6ULL] [i_6] [i_6] [8ULL])) <= (((/* implicit */int) ((((/* implicit */int) arr_15 [i_5] [i_6])) != (((/* implicit */int) var_17)))))));
                        }
                        arr_45 [i_6] [i_6] [i_7] = ((/* implicit */long long int) ((unsigned short) ((var_18) >= (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        for (short i_14 = 1; i_14 < 18; i_14 += 2) 
                        {
                            {
                                var_28 = arr_46 [5ULL] [15ULL] [(unsigned short)13] [i_6] [i_6] [i_5];
                                var_29 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_26 [1ULL] [i_6] [i_6] [10LL] [i_6])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_14] [i_13] [9ULL] [i_5])))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 4; i_15 < 18; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                    {
                        {
                            arr_57 [18] [i_6] [(signed char)1] = ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_15])) && (((/* implicit */_Bool) arr_50 [(signed char)4] [i_6] [i_6] [i_16 + 1] [i_16] [4U])))))) : (var_6));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_17 = 2; i_17 < 16; i_17 += 1) 
                            {
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (short)18218)) : (((/* implicit */int) (unsigned char)143))));
                                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_16 - 1] [i_15 - 3] [i_6])) << (((((/* implicit */int) arr_21 [(short)8] [i_6] [(unsigned char)0])) - (77))))))));
                            }
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)43654)) ? (var_18) : (((/* implicit */long long int) arr_13 [i_15])))), (((/* implicit */long long int) (~(((/* implicit */int) var_16)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (((/* implicit */short) (signed char)-22)))))) > (var_9))))) : (var_3))))));
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [14U] [i_16]))) : (var_13)))))))))));
                        }
                    } 
                } 
                arr_60 [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13899609369892808955ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_35 [i_5] [i_5] [i_6] [(unsigned char)17]))));
            }
        } 
    } 
}
