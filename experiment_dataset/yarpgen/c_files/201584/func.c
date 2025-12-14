/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201584
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
    var_16 *= ((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (unsigned short)1036)) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (unsigned short)54647))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) 3004018088192354046LL);
        arr_2 [11U] [i_0] = min((((/* implicit */int) min((((var_9) != (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)-55))))))), (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) ((_Bool) (signed char)118))) : ((~(((/* implicit */int) var_6)))))));
    }
}
