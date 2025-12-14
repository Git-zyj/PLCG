/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219397
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned short)65535);
        arr_3 [8ULL] = (~(((/* implicit */int) arr_0 [i_0 + 1])));
        var_16 += ((unsigned short) (signed char)64);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-65))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((((/* implicit */int) (signed char)-65)) >= (((/* implicit */int) (signed char)-83)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [0] [i_2])))))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((2444861150055550354ULL) / (((/* implicit */unsigned long long int) var_12))))));
        }
        for (unsigned short i_3 = 4; i_3 < 21; i_3 += 3) 
        {
            arr_14 [(signed char)7] [(signed char)7] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3 - 4] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533)))))));
            arr_15 [(short)19] [i_3] [(unsigned char)3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1)))));
        }
    }
    var_20 += ((/* implicit */unsigned long long int) var_7);
}
