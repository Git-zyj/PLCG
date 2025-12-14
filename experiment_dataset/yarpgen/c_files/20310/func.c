/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20310
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */int) (unsigned short)65280);
        var_16 ^= ((/* implicit */unsigned char) (signed char)67);
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (unsigned char)184))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 740682754))));
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), ((unsigned char)71)));
}
