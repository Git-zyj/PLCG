/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211797
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-3))))))));
        var_17 &= ((/* implicit */long long int) ((int) ((550993095) << (0ULL))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54149))) : (-6383924765914723250LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (var_14)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [2U])) || (((/* implicit */_Bool) arr_2 [8LL] [i_0]))))))))));
    }
    var_19 = ((/* implicit */unsigned short) (~((~(var_15)))));
}
