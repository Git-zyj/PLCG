/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207796
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
    var_12 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_1 [i_0])))))))), (var_8))))));
        var_14 = ((/* implicit */short) min((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 2])))))));
        var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) * (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)10] [i_0 + 3])) ? ((((_Bool)1) ? (((/* implicit */long long int) 1819773003U)) : (var_11))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)55)) % (((/* implicit */int) (signed char)-49))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))) * (1234282862))))));
    }
}
