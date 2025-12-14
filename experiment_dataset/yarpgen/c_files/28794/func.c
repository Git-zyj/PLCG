/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28794
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
    var_17 = ((/* implicit */signed char) var_13);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / ((+(((/* implicit */int) (signed char)125))))))) ? (((/* implicit */unsigned long long int) arr_2 [(unsigned char)12] [i_0])) : ((~(17502984396984222609ULL)))));
        arr_4 [i_0] = ((/* implicit */_Bool) var_4);
    }
}
