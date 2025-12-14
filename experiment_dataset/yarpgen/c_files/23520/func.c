/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23520
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
    var_15 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (+(-1324486512))))) && (((/* implicit */_Bool) (short)-25902))));
        var_17 ^= ((/* implicit */signed char) ((var_12) | (((/* implicit */unsigned long long int) ((var_9) - (min((((/* implicit */int) arr_0 [i_0])), (-1324486536))))))));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1324486524)) ? (1324486524) : (((/* implicit */int) var_14))))) ? (((((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2022))))) ? (arr_5 [i_1] [(short)20]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_19 ^= ((/* implicit */long long int) var_8);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((((/* implicit */_Bool) (unsigned short)31196)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164))) : (((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30769))))))), (((/* implicit */unsigned long long int) arr_5 [i_1] [6LL]))))));
        var_21 = ((/* implicit */unsigned int) 1324486524);
    }
}
