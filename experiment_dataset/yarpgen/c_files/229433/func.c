/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229433
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (unsigned char)42)) << (((((/* implicit */int) (unsigned short)38356)) - (38337))))))) & ((+(((((/* implicit */_Bool) 4924453217485964083ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)38355))))))));
        var_15 = ((/* implicit */signed char) min((var_15), (arr_1 [i_0])));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33720)) ? (((/* implicit */int) (unsigned short)20886)) : (((/* implicit */int) min(((unsigned short)38356), (((/* implicit */unsigned short) var_3)))))));
    }
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)206)) * (((/* implicit */int) var_9))))) ? (((/* implicit */int) (short)1023)) : (var_5)))), (((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))))))))));
    var_17 ^= ((/* implicit */unsigned int) var_0);
}
