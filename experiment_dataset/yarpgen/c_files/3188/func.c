/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3188
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) var_8)))) >= ((+(((/* implicit */int) var_7)))))))) * (max((max((8982039317074480478ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_2)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(short)15] = ((/* implicit */long long int) max((min((9464704756635071137ULL), (max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (min((18446744073709551615ULL), (511ULL)))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) arr_1 [i_0]))));
    }
    for (short i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((((arr_6 [i_1] [(unsigned short)0]) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) << (((arr_6 [i_1] [i_1]) - (12283976122713473953ULL)))))))) ? (min((((arr_5 [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))), (((arr_5 [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1]))))), (arr_0 [i_1 + 1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_21 ^= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_2])), (arr_9 [i_3])))), (((arr_12 [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))))) & ((~((+(arr_11 [i_2] [i_3])))))));
            var_22 = ((/* implicit */unsigned char) ((((((arr_13 [i_2] [i_3]) / (arr_13 [i_2] [i_3]))) % (max((((/* implicit */long long int) arr_0 [i_2])), (arr_13 [i_3] [i_2]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_3])) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2])))))))))));
            var_23 *= ((/* implicit */_Bool) (((~(min((arr_11 [i_3] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_2])))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) arr_0 [i_3])) : (arr_12 [i_2]))) < (min((arr_11 [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_1 [i_2]))))))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_4])) == (((/* implicit */int) arr_1 [i_4])))))) : (((((/* implicit */_Bool) 0LL)) ? (8982039317074480479ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) arr_1 [i_5]))))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2])) && (((/* implicit */_Bool) arr_10 [i_4])))))));
                arr_20 [i_5] [(short)2] [i_2] [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)19462)) ? (9151314442816847872ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                arr_21 [i_5] [i_5] [1] [1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) -1LL)) : (18446744073709551615ULL)));
                arr_22 [11U] [i_4] [i_4] = ((/* implicit */unsigned short) arr_10 [(unsigned short)11]);
            }
            for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                arr_25 [i_2] [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) (-(((arr_17 [i_4] [i_4] [i_2] [i_4]) ? (((/* implicit */unsigned long long int) arr_13 [i_2] [(_Bool)1])) : (arr_11 [i_6] [i_6])))));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)47650)) - (47630)))));
                arr_26 [i_2] = ((/* implicit */unsigned short) arr_24 [i_2] [i_4] [(unsigned char)9] [i_6]);
            }
            arr_27 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4] [2ULL] [2ULL] [i_2])) ? (((/* implicit */unsigned long long int) arr_0 [i_4])) : (arr_14 [i_2]))))));
            var_27 -= ((/* implicit */unsigned short) ((((arr_19 [i_2] [i_4] [i_4] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_4] [(unsigned short)13]))))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_2]) == (((/* implicit */unsigned long long int) arr_13 [i_2] [i_4]))))))));
        }
        var_28 += ((/* implicit */long long int) (!(((((((/* implicit */_Bool) arr_18 [i_2])) || (((/* implicit */_Bool) arr_9 [i_2])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_18 [9LL])), (arr_1 [i_2]))))))));
    }
}
