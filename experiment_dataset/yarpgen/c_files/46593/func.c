/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46593
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
    var_10 = ((/* implicit */short) (+(((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))) + (((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 4294967295U)))), ((!(((/* implicit */_Bool) var_9)))))))) + (2992815243U)));
        var_12 ^= ((/* implicit */unsigned char) min((min((7U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (short)0))));
        arr_2 [i_0 + 1] = ((/* implicit */unsigned int) (+((((+(((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) ((short) var_8)))))));
    }
}
