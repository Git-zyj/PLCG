/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50382
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = min((var_3), (arr_5 [i_0] [i_1] [(short)7] [(_Bool)1]));
                    var_19 = ((/* implicit */signed char) ((unsigned char) var_8));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */long long int) var_2);
                                arr_13 [i_2] [i_2] [i_2] [i_3] [(_Bool)1] [i_2] = ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_1] [i_0] [i_0] [i_4] [i_0]))))) + (882381687U));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_21 ^= ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_5])) ? (arr_4 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))))));
                        var_22 = ((/* implicit */_Bool) min((((unsigned long long int) arr_16 [i_0] [i_5] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((((/* implicit */int) (_Bool)1)) * (511))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_23 = ((((/* implicit */_Bool) arr_19 [i_6] [i_0] [i_6] [i_5] [i_1])) ? (var_12) : (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6])));
                            var_24 = ((/* implicit */unsigned long long int) (+(arr_1 [i_6] [i_1])));
                        }
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) arr_15 [i_2] [i_2]);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_6), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_0] [(signed char)4] [(short)9] [i_7]))) ^ (var_17)))))) ? (((var_13) | (((/* implicit */unsigned long long int) var_4)))) : (max((max((arr_6 [(_Bool)1] [(_Bool)1] [i_2] [i_5]), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_2] [i_5] [i_5] [i_5])))), (((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [3U] [i_1] [3U] [i_5] [(unsigned char)10])))))))));
                            arr_22 [i_1] [i_1] [(short)7] [i_5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((unsigned long long int) arr_21 [i_5] [i_1] [i_2] [(_Bool)1] [i_7])), (((/* implicit */unsigned long long int) arr_3 [i_0])))))));
                            var_27 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_5])))))))));
                        }
                        for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            arr_25 [i_5] = ((/* implicit */long long int) arr_10 [2LL] [i_5] [i_2]);
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_2))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) min((arr_4 [i_2] [i_8]), (((/* implicit */long long int) (signed char)-92)))))) ? (((/* implicit */unsigned long long int) var_11)) : (min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_5] [i_5])), (arr_6 [i_1] [5ULL] [i_5] [i_8])))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        var_30 ^= ((/* implicit */unsigned long long int) ((arr_19 [i_0] [i_0] [i_1] [i_2] [i_0]) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_9] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_8))))));
                        arr_28 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1]))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
                    {
                        var_31 = var_4;
                        var_32 = ((/* implicit */short) var_14);
                        arr_32 [i_0] [9ULL] [(unsigned short)11] [i_0] = ((/* implicit */signed char) var_14);
                    }
                }
            } 
        } 
    } 
    var_33 = (!(((/* implicit */_Bool) 66846720U)));
    var_34 = ((/* implicit */unsigned char) var_16);
    var_35 += ((/* implicit */signed char) var_7);
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((+(max((1040187392), (((/* implicit */int) var_3)))))) : ((~(((/* implicit */int) (_Bool)1))))));
}
