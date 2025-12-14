/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202017
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
        var_16 = ((/* implicit */long long int) 4294967295U);
    }
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_14)) ? ((+(var_15))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))))))));
}
