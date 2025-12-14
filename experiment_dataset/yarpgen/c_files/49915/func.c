/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49915
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
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_4), (arr_1 [i_0 - 1] [i_0 + 1])))) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (arr_0 [i_0 + 1]))), (((/* implicit */unsigned long long int) var_10)))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0])) : (arr_0 [i_0 + 1])))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1]))))))));
    }
    var_17 = ((/* implicit */long long int) var_1);
    var_18 = ((/* implicit */_Bool) ((unsigned long long int) (-(6685392490554882839ULL))));
    var_19 = ((/* implicit */short) var_4);
}
