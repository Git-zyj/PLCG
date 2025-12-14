/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28693
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
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_12), ((unsigned short)59687)))), (var_19)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        var_22 = ((/* implicit */signed char) max((var_22), (var_6)));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) (unsigned short)8371)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((unsigned char) 30ULL)))));
        var_24 = ((/* implicit */unsigned int) ((signed char) arr_1 [i_0]));
    }
    var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)1), ((signed char)16)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)57)))) / (((/* implicit */int) ((unsigned char) var_7))))))));
}
