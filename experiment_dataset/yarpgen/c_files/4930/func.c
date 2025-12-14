/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4930
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_15), (((/* implicit */int) (short)-22742))))) ? (((/* implicit */int) (short)-22742)) : (((var_8) ? (((/* implicit */int) (unsigned short)57599)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)127))));
    var_17 = ((/* implicit */_Bool) ((max((((/* implicit */int) min((var_11), ((signed char)-21)))), (max((-2116303120), (((/* implicit */int) (unsigned short)57574)))))) / (((((/* implicit */_Bool) max((((/* implicit */short) var_3)), (var_9)))) ? ((~(67108862))) : (var_15)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_18 += ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) arr_1 [(signed char)12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))));
        var_19 = ((/* implicit */signed char) ((_Bool) ((signed char) arr_0 [i_0] [i_0])));
    }
}
