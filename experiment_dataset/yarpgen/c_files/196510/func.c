/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196510
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
    var_10 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((-6021042560746463987LL), (6021042560746463987LL)))) ? (-6021042560746463969LL) : (-6021042560746463987LL)))));
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) 6442130168353154711LL))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_5);
        var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */unsigned int) 502935504)) * (var_8))) * (((/* implicit */unsigned int) ((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [(unsigned char)2])) : (((/* implicit */int) (signed char)127)))))))) - ((+(6021042560746463992LL)))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) -1470330659940051488LL)) ? (max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) 1U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)28))) : (-2119662382321218464LL))))) : (min((-6021042560746463987LL), (((/* implicit */long long int) arr_0 [i_1])))));
        var_13 ^= ((/* implicit */signed char) 4294967295U);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_14 += ((/* implicit */unsigned short) var_3);
        var_15 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [(unsigned short)11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1954860107450711664LL))))) : (arr_8 [2]))) * (((/* implicit */int) (_Bool)1))));
    }
}
