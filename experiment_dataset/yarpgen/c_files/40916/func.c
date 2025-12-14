/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40916
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
    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) 80339023)) : (var_5))) <= (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(1152045496U)))) ? (((int) 18446744073709551606ULL)) : (((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max(((~(var_1))), (((/* implicit */long long int) ((arr_0 [i_0 - 2] [i_0 + 1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2]))))))))));
    }
}
