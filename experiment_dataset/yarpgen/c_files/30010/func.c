/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30010
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) arr_1 [i_0]);
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_6))));
        var_15 = ((/* implicit */signed char) ((min((3047610682502976470ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) & (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-112)) % (((/* implicit */int) (unsigned char)255)))))))));
    }
    var_16 = ((/* implicit */int) 250125541U);
    var_17 = ((/* implicit */unsigned char) var_6);
}
