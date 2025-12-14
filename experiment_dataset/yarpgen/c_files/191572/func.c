/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191572
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
    var_20 = ((/* implicit */unsigned char) (((-((-(((/* implicit */int) var_3)))))) == (var_0)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */unsigned int) (~(((long long int) var_13))));
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0] [i_1 - 1])) : (((/* implicit */int) (unsigned char)243))))) > (((unsigned long long int) arr_3 [(unsigned char)4] [(unsigned char)4]))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((var_12) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)243)) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_1)))))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_24 = ((/* implicit */signed char) ((((((/* implicit */int) min((arr_4 [(signed char)12]), (arr_7 [i_2])))) | (((((/* implicit */int) arr_7 [i_4])) / (((/* implicit */int) arr_3 [(unsigned char)10] [i_2])))))) > (((/* implicit */int) arr_2 [i_3]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            arr_19 [i_2 - 1] [i_3] [i_2] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */int) ((unsigned short) (unsigned char)12));
                            var_25 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_0 [i_5] [i_3])) | (((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_4] [i_2] [7ULL] [i_6])))));
                            arr_20 [i_2] = ((var_0) / (arr_10 [i_2 + 1] [i_2] [i_5 + 2]));
                        }
                        arr_21 [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2])))))) == (((/* implicit */int) arr_16 [i_2 + 1] [i_5] [i_5] [3ULL] [i_2] [i_5 + 1] [i_5]))));
                        arr_22 [i_2] [i_3] [i_2] [i_2 + 2] [i_4] [i_5] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((arr_10 [i_2 + 2] [i_7] [i_2 + 1]) == (((/* implicit */int) arr_17 [i_2] [i_2] [(signed char)12] [i_2 + 2] [i_2])))))));
                            arr_25 [i_2] [i_3] [i_2] [10ULL] [9LL] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_2] [i_5 - 1] [i_2] [i_5 + 2] [i_2 + 2])) | (((/* implicit */int) arr_24 [i_7 - 1] [i_2 + 2]))));
                            arr_26 [i_2] [i_2] [i_3] [i_3] [i_5] [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) -6239176538993544143LL)) ? (((/* implicit */int) arr_17 [i_2] [i_2 + 2] [i_2] [i_5 - 1] [i_7 - 2])) : (arr_12 [i_2] [i_2 + 2] [i_5 + 1] [i_7 - 1])));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            arr_29 [i_2] [i_3] [i_3] [i_2] [i_8] = ((/* implicit */int) 12251389522220072103ULL);
                            arr_30 [i_2] [i_5 - 1] = ((/* implicit */unsigned char) ((10103349616559656932ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108)))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_7 [i_5])))) ? (arr_12 [i_2 - 1] [i_5] [i_5 + 1] [i_5 + 1]) : (((/* implicit */int) (signed char)-92))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        arr_35 [i_2] [1ULL] [1ULL] = ((/* implicit */_Bool) var_16);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_10 = 3; i_10 < 20; i_10 += 1) 
                        {
                            arr_38 [i_2 + 1] [i_2 + 1] [i_4] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : ((~(((/* implicit */int) (unsigned short)12103))))));
                            arr_39 [i_2] [i_3] [i_3] [i_9] [i_10 - 1] [i_2] = ((/* implicit */unsigned short) var_0);
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            arr_42 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_2 - 1] [(signed char)17] [i_2] [i_2] [i_11]))));
                            var_28 *= ((/* implicit */unsigned char) ((_Bool) (~(var_0))));
                            var_29 = ((/* implicit */int) arr_0 [i_4] [i_3]);
                        }
                    }
                    var_30 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)253))));
                }
                arr_43 [i_2] [i_3] = ((((/* implicit */int) max((arr_7 [i_2 + 2]), (arr_2 [i_2 + 2])))) ^ (max((((/* implicit */int) (unsigned char)75)), (var_15))));
                arr_44 [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) > (((((/* implicit */_Bool) 2705089738766307480ULL)) ? (arr_1 [i_2 - 1] [19U]) : (((/* implicit */unsigned long long int) -5221997105031320896LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_2] [(unsigned short)2] [i_3] [i_3] [i_2]))) : ((-((~(0ULL)))))));
                arr_45 [i_2] [i_2] [0ULL] = ((/* implicit */int) var_19);
            }
        } 
    } 
}
