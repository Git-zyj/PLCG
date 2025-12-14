/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29644
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 524287)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4529161373330330312ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) : (((unsigned long long int) (-(((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 ^= ((((/* implicit */_Bool) (~(((long long int) arr_2 [(short)18]))))) ? (-2104637192) : (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) 524287)), (var_13))))));
        arr_3 [12ULL] &= ((((/* implicit */int) ((((_Bool) 4294967279U)) && (((/* implicit */_Bool) arr_2 [12ULL]))))) <= (max((max((((/* implicit */int) (unsigned short)63976)), (202121224))), (((/* implicit */int) ((unsigned char) var_8))))));
    }
    var_21 += ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))));
}
