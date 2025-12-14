/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32700
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 280772637U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)173)))))));
        var_11 += ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (unsigned short)61168)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
    }
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (!(((/* implicit */_Bool) -1019195693)))))))) ? (((min((((/* implicit */unsigned int) var_2)), (2371432192U))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)27008)) >= (((/* implicit */int) (short)32758))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_9))))))))));
}
