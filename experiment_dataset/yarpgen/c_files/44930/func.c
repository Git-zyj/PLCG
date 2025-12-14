/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44930
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) ? (((arr_1 [i_0 - 2] [i_0]) / (arr_1 [i_0 - 2] [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) ? (arr_1 [i_0 - 2] [i_0]) : (arr_1 [i_0 - 2] [i_0])))));
        var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [0]) ? (((/* implicit */int) arr_2 [(short)0])) : (((/* implicit */int) arr_2 [2ULL]))))) ? ((-(-1LL))) : (arr_1 [i_0] [2LL])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((arr_2 [i_0]) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))) : (var_8))) : (((/* implicit */long long int) var_3)))) % (arr_1 [i_0] [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(signed char)12] [i_1])) ? ((-(((/* implicit */int) arr_7 [4U])))) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) % (arr_6 [i_1])))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_8 [i_1] [i_2]))));
            arr_10 [i_2] = ((/* implicit */long long int) arr_8 [i_1] [i_2]);
            var_16 = ((/* implicit */short) arr_9 [i_1] [2LL]);
        }
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            arr_13 [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (((((/* implicit */long long int) ((arr_9 [i_1] [i_1]) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_1] [(signed char)9]))))) % (arr_6 [i_1])))));
            arr_14 [0U] = ((/* implicit */unsigned short) ((arr_7 [i_1]) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? ((+(((/* implicit */int) arr_7 [i_1])))) : (((((/* implicit */int) arr_9 [i_1] [i_1])) / (((/* implicit */int) arr_11 [i_3] [7] [i_1])))))) : (((((/* implicit */int) arr_4 [i_1] [i_3])) % (((/* implicit */int) arr_12 [i_1] [i_3] [i_3]))))));
            arr_15 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_1] [i_3])) : (((/* implicit */int) arr_7 [i_1])))) % (((/* implicit */int) arr_5 [i_1] [i_3]))));
            var_17 = ((/* implicit */int) var_7);
        }
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (((((/* implicit */_Bool) arr_16 [i_1] [i_4] [i_4])) ? (var_8) : ((~(arr_6 [i_1]))))))))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned char)0] [(unsigned char)0] [(signed char)4]))) : (arr_16 [i_1] [i_1] [i_4])));
            arr_19 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((var_10) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [7])))));
            var_20 = ((/* implicit */unsigned short) var_1);
            arr_20 [i_1] [(short)8] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [i_4])) % (((/* implicit */int) arr_18 [i_1] [i_1] [i_1]))))) ? ((+(((/* implicit */int) arr_4 [i_1] [i_4])))) : (((/* implicit */int) var_9))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_21 = arr_22 [i_5];
        arr_24 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5])) ? (arr_22 [i_5]) : ((-(arr_22 [i_5])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_22 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [5])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (arr_21 [i_5])))) : (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_5]))))) ? ((-(arr_22 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5]))))))));
    }
}
