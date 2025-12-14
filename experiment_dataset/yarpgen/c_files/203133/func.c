/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203133
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) * ((~(((/* implicit */int) var_7))))))) : (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (12061379085574887358ULL))) / (((/* implicit */unsigned long long int) var_9))))));
    var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17)))), (((/* implicit */int) ((short) var_12)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
            arr_7 [i_0] = ((/* implicit */short) ((arr_2 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            arr_12 [i_0] [i_0] = ((((/* implicit */unsigned long long int) (((_Bool)1) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) > (arr_8 [i_0] [i_2]));
            var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6385364988134664257ULL)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned short)37364))));
        }
        for (short i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_3 - 2] [i_0])) && (((/* implicit */_Bool) arr_9 [i_0] [i_3 - 2] [i_0]))));
            var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((((var_9) + (2147483647))) >> (((((/* implicit */int) arr_10 [(unsigned short)1] [(unsigned short)1])) + (25402))))))));
        }
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((unsigned long long int) (unsigned short)53584)) : (((/* implicit */unsigned long long int) arr_11 [i_0]))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) var_7))));
    }
}
