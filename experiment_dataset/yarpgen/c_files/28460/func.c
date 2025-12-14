/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28460
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
    var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_6))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (short)-9326))) < (-1386544185149704476LL))) ? (((/* implicit */unsigned long long int) (+(arr_1 [i_0] [(_Bool)1])))) : (var_13)));
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_15)))));
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((min((var_4), (((/* implicit */unsigned long long int) arr_5 [i_1 - 1])))), ((~(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_12)))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((unsigned int) (signed char)-107))));
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_1 + 1]))) | (((((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_14))))))));
    }
}
