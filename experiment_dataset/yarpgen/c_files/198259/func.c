/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198259
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((int) arr_2 [i_0 + 1])) < (((var_14) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))))));
        arr_4 [i_0] = (_Bool)1;
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)54796)) ? (((/* implicit */int) (_Bool)1)) : (-1323042976))))))));
}
