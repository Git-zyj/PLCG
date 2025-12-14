/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192270
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0 + 1]))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3] [i_0]))) | (arr_2 [i_0 + 3])))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0 + 1] [(unsigned char)8])))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0]))))) << (((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [2U] [i_0 + 3])), ((unsigned short)0)))) ? (arr_2 [i_0 - 1]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) ^ (arr_2 [i_0]))))) - (159995691682315247ULL))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) : (6293340846902912075LL)));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) * (arr_0 [i_0 + 1])))) ? (2) : (((/* implicit */int) (unsigned short)44958))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)180)))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((arr_0 [i_0 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_1] [i_2] [i_1])) < (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_2])))))))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0]))))) >= (((((arr_5 [i_0]) + (2147483647))) << (((arr_0 [i_0]) - (4240460760U))))))))));
                arr_11 [i_0] [8ULL] [i_0 + 2] = ((/* implicit */long long int) arr_2 [i_0]);
                arr_12 [i_2] [i_1] [(short)1] = (+(((unsigned long long int) ((((/* implicit */unsigned long long int) arr_6 [i_0 - 2] [i_1])) * (18446744073709551615ULL)))));
            }
            for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_21 = ((/* implicit */signed char) ((((((/* implicit */long long int) arr_6 [(unsigned char)20] [i_3])) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))) & (-6293340846902912059LL))))) ^ (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-122)) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 2])))) + (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_3] [i_3])))))));
                var_22 = ((/* implicit */short) (unsigned short)65535);
            }
        }
        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 2; i_5 < 24; i_5 += 3) 
            {
                var_23 -= ((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_4 - 2])) : (((/* implicit */int) arr_13 [0ULL] [i_4] [0ULL] [i_5]))))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    for (int i_7 = 1; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0] [i_4] [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_23 [i_0] [i_5] [i_5 + 1]) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_22 [i_0]))))) && (((/* implicit */_Bool) (-(arr_0 [i_7]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (short)17501)) : (((/* implicit */int) arr_22 [i_4 + 2]))))) ? (((/* implicit */int) arr_8 [i_5 - 2] [i_5] [i_4 + 2] [i_0])) : ((-(4095)))))));
                            var_25 = ((/* implicit */_Bool) (((-(arr_15 [i_4]))) * (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0] [i_6])) / (((/* implicit */int) arr_21 [i_0] [i_0] [i_0])))) * (arr_5 [i_5 - 1]))))));
                        }
                    } 
                } 
            }
            arr_26 [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7064039276288644600ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            arr_30 [i_0 + 1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 268304384)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) : (6293340846902912094LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-58)) || (((/* implicit */_Bool) 4095))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(_Bool)1]))))))) != (((((/* implicit */int) ((arr_25 [(_Bool)1] [i_0] [i_0 + 1] [i_0 + 1] [i_8] [i_8] [i_8]) <= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 3] [i_0 + 3] [i_8])))))) - (((((/* implicit */_Bool) 7579280086275002275LL)) ? (((/* implicit */int) arr_1 [i_0] [i_8])) : (((/* implicit */int) arr_1 [i_0] [i_8])))))));
            arr_31 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned short)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [10])))))))) ? (((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_21 [i_0 + 2] [i_0] [i_0 - 3])) : (((/* implicit */int) arr_21 [i_0 + 3] [i_0 - 3] [i_0 + 2])))) : (((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0] [i_0 - 1]), (((/* implicit */unsigned char) (!((_Bool)0))))))));
        }
    }
    for (short i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_9] [i_9])) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_24 [i_9] [i_9])))) | (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_9] [i_9] [i_9]))) | (arr_25 [i_9] [i_9] [8] [8] [i_9] [0U] [i_9]))))))));
        arr_34 [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_9] [i_9] [6])) != (((((/* implicit */int) arr_1 [i_9] [i_9])) >> (((arr_20 [i_9] [i_9] [i_9]) - (10343276658780833387ULL))))))))) & (((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_9] [i_9]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(_Bool)1] [(signed char)21] [i_9]))) - (arr_27 [i_9] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || ((_Bool)1)))))))));
        arr_35 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_9] [i_9])) * (((/* implicit */int) arr_14 [i_9] [i_9]))))) ? ((+(((/* implicit */int) arr_14 [i_9] [i_9])))) : (((((/* implicit */_Bool) arr_14 [i_9] [i_9])) ? (((/* implicit */int) arr_13 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_22 [i_9]))))));
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((var_14) - (7281901780867475165LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4095)))) : (((var_3) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517))))))))))));
    var_28 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : (var_15))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) var_1))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((((/* implicit */int) var_5)) | (((/* implicit */int) var_13)))))))));
    var_29 = ((/* implicit */unsigned char) var_9);
}
