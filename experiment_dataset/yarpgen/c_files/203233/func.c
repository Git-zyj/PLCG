/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203233
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
    var_16 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (min((((/* implicit */unsigned int) var_1)), (var_4)))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) 14342018992935732LL)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((+(((/* implicit */int) var_2))))));
        var_19 = ((/* implicit */int) ((unsigned char) ((((_Bool) (_Bool)1)) || (((/* implicit */_Bool) var_7)))));
    }
}
