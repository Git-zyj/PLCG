/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217474
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
    var_14 = ((/* implicit */_Bool) (unsigned short)65535);
    var_15 = ((/* implicit */short) (_Bool)0);
    var_16 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_1);
        arr_4 [(signed char)16] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [1LL]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (124679826))))));
    }
    var_17 = ((/* implicit */unsigned int) var_4);
}
