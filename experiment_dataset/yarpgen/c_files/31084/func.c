/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31084
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
    var_15 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */int) (unsigned char)189)), (arr_1 [i_0])))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_0 [i_0]))))) / ((~(-2147483644))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3402462148U)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? (((/* implicit */int) var_11)) : (arr_0 [i_0]))))))) ^ (((/* implicit */int) ((892505147U) < (((/* implicit */unsigned int) arr_0 [i_0])))))));
    }
}
