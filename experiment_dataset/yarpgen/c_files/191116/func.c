/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191116
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
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (_Bool)1))));
        arr_3 [(_Bool)1] = ((/* implicit */_Bool) (~(((int) -1LL))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((-2147483647 - 1)) % (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_2 [i_0])))))) : (((long long int) (short)12730))))) ? (((int) arr_0 [i_0])) : (((/* implicit */int) ((_Bool) arr_1 [i_0 - 1])))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_1 [i_0 - 1]))));
    }
}
