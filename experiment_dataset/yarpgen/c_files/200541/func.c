/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200541
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_0 [i_2])) & (arr_5 [i_2] [(unsigned short)2]))) >> (((var_1) - (1308103092U)))))) ? (max((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_8)) : (-15))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) 7)) != (arr_4 [i_2] [i_2]))))))))))));
                    arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20272)))))))) ? (arr_4 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((long long int) 2245802192U)))))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned int) arr_2 [i_2]))) ? (arr_5 [i_0] [i_2]) : (((arr_4 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(0)))), (min((var_7), (((/* implicit */unsigned int) var_4)))))))));
                    var_12 = (unsigned char)180;
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) ((unsigned char) ((unsigned char) -1144274137))))));
    }
    for (long long int i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        var_13 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_3] [16ULL]))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (977554387) : (var_4)))))));
        var_14 = ((/* implicit */unsigned short) ((min((arr_5 [i_3] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))) ^ (max((arr_5 [i_3] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (215013326U) : (((/* implicit */unsigned int) arr_12 [i_3])))))))));
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 23; i_7 += 4) 
                    {
                        arr_23 [(unsigned char)12] [i_5] [(unsigned char)1] [i_7] [(unsigned char)12] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_7 - 1] [i_7] [7ULL] [i_7 + 1])))) >> (((min((((((/* implicit */_Bool) arr_20 [(unsigned short)0] [i_7] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_5] [9U]))) : (arr_22 [i_4] [i_5] [i_7] [i_7]))), (((/* implicit */unsigned long long int) arr_0 [i_5])))) - (217ULL)))));
                        arr_24 [(signed char)13] [i_7] [(signed char)3] [i_7] [(signed char)13] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_0 [i_4])))))) ? ((+(arr_22 [i_5] [i_7 - 1] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_7] [i_6] [(unsigned char)17])))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_13 [(_Bool)1] [i_5]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 4; i_8 < 23; i_8 += 4) /* same iter space */
                    {
                        var_16 *= ((/* implicit */signed char) ((arr_15 [(unsigned char)3] [i_5] [i_5]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51)))));
                        arr_28 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_8 - 1] [i_8] [22ULL] [i_8 - 4] [i_8 + 1])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_26 [i_4] [i_8 + 1] [i_8] [i_8 - 3] [i_8 - 1])) : (134217727))) : (((((/* implicit */int) arr_26 [i_8] [(unsigned short)19] [(_Bool)1] [i_8 + 1] [i_8])) >> (((/* implicit */int) arr_26 [i_4] [4ULL] [i_4] [i_8 - 2] [i_4]))))));
                    }
                    for (unsigned char i_9 = 4; i_9 < 23; i_9 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) (+((~(arr_13 [i_9] [i_6])))));
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            arr_33 [i_5] [i_5] [i_4] [i_6] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_9 + 1] [i_9] [(unsigned char)21] [i_5])) ? ((~(arr_21 [14U] [i_5] [i_9 - 3] [i_9] [i_10] [i_6]))) : ((-(var_7)))));
                            arr_34 [i_5] [i_5] [i_6] [i_10] = ((/* implicit */unsigned char) (+(((unsigned long long int) ((unsigned char) arr_6 [i_4] [i_4] [i_4])))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_18 ^= ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5] [17] [i_9])) ? (var_4) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_6]))))) < (arr_30 [(_Bool)1] [i_5] [i_6] [i_11] [i_9 + 1]))));
                            var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((signed char) arr_20 [i_9] [i_11] [i_11] [i_4]))), (arr_18 [9] [9] [9])));
                            var_20 = ((/* implicit */_Bool) arr_13 [i_4] [i_4]);
                            var_21 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_18 [i_4] [i_4] [i_9])), (max((((/* implicit */unsigned long long int) -134217720)), (16173257161308685608ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((max(((unsigned char)124), (var_8))), (((/* implicit */unsigned char) arr_26 [i_5] [i_9 - 2] [i_11] [i_11] [i_11]))))))));
                        }
                        var_22 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) ? (arr_15 [i_4] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_4]))))) / (((/* implicit */unsigned long long int) var_4)))) * (((unsigned long long int) ((((/* implicit */int) arr_35 [i_9] [i_9] [i_6] [i_5] [i_5] [i_5])) / (((/* implicit */int) arr_36 [i_4] [i_4] [i_4] [8ULL])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 4; i_12 < 23; i_12 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_12 - 3])) ? (arr_0 [i_12 - 3]) : (arr_0 [i_12 - 4]))))));
                        /* LoopSeq 2 */
                        for (long long int i_13 = 2; i_13 < 20; i_13 += 4) 
                        {
                            arr_42 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_4] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (16173257161308685601ULL) : (arr_6 [i_6] [i_6] [i_5])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4194303ULL)) ? (((/* implicit */int) arr_32 [i_4] [i_4] [(unsigned short)13] [i_6] [i_12 + 1] [i_13 + 1] [i_13])) : (((/* implicit */int) arr_35 [i_12] [i_12 - 3] [i_12] [i_5] [4ULL] [i_12])))))));
                            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (arr_21 [i_13 - 1] [i_13 + 4] [i_12] [i_6] [i_5] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned int) (-(0))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            arr_45 [i_4] [i_12] = ((/* implicit */signed char) arr_13 [i_4] [i_4]);
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_14 + 1])) ? (((/* implicit */int) arr_14 [(signed char)5])) : (((/* implicit */int) arr_14 [i_6]))));
                            arr_46 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(134217727)))) ? (((((/* implicit */int) var_2)) % (((/* implicit */int) arr_17 [(short)11] [i_5])))) : ((~(((/* implicit */int) (unsigned char)76))))));
                        }
                        arr_47 [i_6] [i_5] [i_6] [i_12] [i_6] [i_12] = -1199633188;
                    }
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        for (int i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_5]))))) ? (((/* implicit */int) arr_26 [i_4] [i_5] [i_6] [i_15] [i_16])) : ((~(((/* implicit */int) arr_38 [i_5])))))), (((/* implicit */int) max((arr_17 [i_15 + 1] [i_15 + 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)36))))))))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_41 [i_4] [i_4] [i_4] [i_4] [i_16]))));
                                var_28 = ((/* implicit */signed char) (+(max((max((((/* implicit */unsigned int) arr_17 [i_5] [(signed char)14])), (4294967295U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [8] [i_5] [i_16] [i_5])))))))));
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((arr_27 [i_6] [i_5] [(unsigned short)12]) * (((/* implicit */unsigned int) ((/* implicit */int) ((min((2467163074U), (((/* implicit */unsigned int) arr_35 [i_4] [i_4] [i_5] [i_6] [i_15 + 1] [i_4])))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_16] [7ULL] [i_5] [7ULL]))))))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -88025965)) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) -1263758727)) ? (((/* implicit */int) arr_35 [i_4] [i_6] [8U] [i_5] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_25 [23ULL])))))) : (((/* implicit */int) arr_29 [i_4]))));
                }
            } 
        } 
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])) ? (((unsigned int) (+(((/* implicit */int) arr_25 [i_4]))))) : (((/* implicit */unsigned int) -1263758740))));
    }
    var_32 = ((/* implicit */unsigned char) var_4);
}
