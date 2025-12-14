/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248573
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
    var_16 |= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (signed char)111))))) ? (((int) var_0)) : (((/* implicit */int) ((signed char) var_1))))), (((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) min((((int) 5)), (((/* implicit */int) (short)-32753))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0] [3U]);
        var_17 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (short)32753))))) - ((+(arr_1 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)2] [(short)2])))));
    }
    var_18 = ((/* implicit */int) max((var_13), (var_9)));
}
