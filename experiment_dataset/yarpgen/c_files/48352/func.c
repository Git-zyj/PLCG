/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48352
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
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) var_3)), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))), ((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 = 2050998404;
        var_18 = ((/* implicit */int) (-(17179397187867623862ULL)));
        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [4LL])), ((unsigned char)24)))) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_0))))) ? ((~(((/* implicit */int) arr_2 [(_Bool)1])))) : (((/* implicit */int) ((((/* implicit */_Bool) 21ULL)) || (((/* implicit */_Bool) (short)-21347)))))))));
    }
}
