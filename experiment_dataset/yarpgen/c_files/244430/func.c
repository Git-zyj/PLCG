/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244430
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
    var_10 |= ((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) ((740027340U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
    var_11 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_8);
        arr_4 [(_Bool)1] &= min((((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
        var_12 += ((/* implicit */_Bool) max((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (4294967291U)))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) ((_Bool) (~(((((/* implicit */int) arr_5 [i_1])) / (((/* implicit */int) var_4)))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) (((_Bool)0) ? ((~(((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) var_3))), (min((((/* implicit */unsigned short) var_6)), (arr_5 [i_1]))))))));
    }
}
