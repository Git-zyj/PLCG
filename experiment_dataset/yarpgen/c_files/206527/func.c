/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206527
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
    var_11 = ((/* implicit */_Bool) ((var_1) << (((((/* implicit */int) var_7)) - (50)))));
    var_12 = ((/* implicit */short) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)71)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))))))));
        var_14 *= ((((arr_1 [i_0]) / (arr_1 [i_0]))) >> (((((/* implicit */unsigned long long int) arr_1 [i_0])) / (var_4))));
        arr_2 [2ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0] [(short)4]) & (arr_0 [i_0] [(unsigned short)6])))) ? (((arr_0 [(short)2] [i_0]) >> (((arr_0 [i_0] [i_0]) - (7469663492722632472LL))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_2 + 4] [i_3 - 1] [i_4] [(short)2])))) <= (var_4)));
                        var_16 -= ((/* implicit */unsigned long long int) arr_4 [(unsigned short)8] [12ULL]);
                        arr_12 [i_1] [i_2] [i_3 + 2] [i_4] = ((/* implicit */short) ((((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_3 + 2]))))) % ((-(((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])) - (var_10)))))));
                    }
                    for (int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                    {
                        var_17 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_7)))) / (((/* implicit */int) var_5))))) : ((+((+((-9223372036854775807LL - 1LL))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_6 = 4; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            var_18 |= ((/* implicit */unsigned long long int) ((short) var_7));
                            arr_18 [i_1] [(short)7] [i_3 + 3] [i_2 + 4] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)185))));
                        }
                        for (short i_7 = 4; i_7 < 11; i_7 += 2) /* same iter space */
                        {
                            arr_22 [i_1] [(unsigned short)7] [(unsigned short)7] [i_3] [i_2 + 2] [(short)0] [i_1] = ((/* implicit */unsigned long long int) max((min((arr_4 [i_3 + 3] [i_1]), (arr_4 [i_3 - 1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 2] [i_3 + 1])))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >> ((((+(((/* implicit */int) arr_7 [i_2] [(short)12] [i_2])))) - (29336)))))) ? ((-((~(arr_17 [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [(short)6] [i_2 + 3] [i_3 + 2] [i_5] [i_1])))));
                        }
                        var_20 = ((/* implicit */int) var_10);
                    }
                    for (int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                    {
                        arr_26 [8ULL] [i_2 + 2] [i_1] [i_2 + 4] = ((/* implicit */unsigned short) var_4);
                        arr_27 [i_1] = ((/* implicit */long long int) arr_9 [i_8] [i_2 + 1] [i_3 + 2]);
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */int) var_7)) / (((((/* implicit */_Bool) (-(var_4)))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_13 [(_Bool)0] [(_Bool)0]))))));
                    }
                    arr_28 [i_1] = ((/* implicit */int) arr_3 [i_1]);
                    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [12ULL] [i_2 - 2] [10ULL] [i_2 - 1] [(short)6])) ? (((arr_24 [(signed char)12] [8ULL] [i_3 + 2] [i_2] [0]) << (((((/* implicit */int) arr_15 [i_2 - 1] [i_2] [(short)8] [12LL] [i_1])) - (22826))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)59)) ^ (((/* implicit */int) (unsigned char)3)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_2 - 2] [i_3] [i_3] [i_3 + 1])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_20 [0LL] [(unsigned short)8] [i_3 + 3] [i_3 - 1] [8ULL])) : (((/* implicit */int) arr_11 [(_Bool)1] [(signed char)12] [(_Bool)1] [i_2])))) : (((/* implicit */int) var_9))))) : (var_4)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)176))))) ? (((/* implicit */int) arr_9 [i_2 + 2] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_19 [(short)6]))));
                        var_24 |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_9] [i_2 - 2] [i_9]))));
                        var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_3] [i_3 + 2] [(unsigned char)9] [i_3] [i_1]))));
                    }
                    for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)185), ((unsigned char)185))))) >= (arr_17 [i_2] [i_1])));
                        arr_33 [i_1] = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_3 + 2] [i_3 + 1] [i_3 + 3]);
                    }
                    arr_34 [i_1] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_30 [i_1] [i_2] [i_3 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_3 + 1] [i_2 + 1] [(unsigned char)7] [i_3 + 1])))) & (((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1] [i_3 - 1] [i_3])))) | (((((/* implicit */int) arr_25 [i_2 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 3] [i_3])) ^ (((/* implicit */int) arr_25 [i_2 + 4] [i_3 + 2] [i_3 + 1] [i_3 + 3] [(short)8]))))));
                }
            } 
        } 
        arr_35 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [i_1] [i_1])) : (var_1))) - (((/* implicit */unsigned long long int) (~(var_3))))));
    }
    var_27 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_6)), (var_5)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_4))))) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_10)) ? (1035868933013503483ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
}
