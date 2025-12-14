/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34269
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)127)) ? (0LL) : (((/* implicit */long long int) 1424774147U))));
    var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_5)), (4294967295U))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) var_1))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9970)) ? (arr_2 [(_Bool)1]) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (1381227615U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (max((arr_1 [i_0]), (4294967295U)))))) ? (((/* implicit */int) min(((short)13161), (((/* implicit */short) ((_Bool) 4294967295U)))))) : (((/* implicit */int) (unsigned char)253))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((max((((unsigned long long int) arr_2 [1U])), (((/* implicit */unsigned long long int) arr_2 [i_0])))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)36)), (max((arr_2 [i_0]), (((/* implicit */unsigned int) (unsigned char)242))))))))))));
    }
}
