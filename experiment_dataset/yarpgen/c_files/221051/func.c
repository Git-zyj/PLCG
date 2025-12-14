/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221051
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
    var_11 = ((/* implicit */int) 2087038342U);
    var_12 = ((/* implicit */unsigned char) ((long long int) var_7));
    var_13 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12199888117315618536ULL)) || (((/* implicit */_Bool) 6246855956393933079ULL)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_14 -= ((/* implicit */unsigned long long int) var_8);
        var_15 = ((/* implicit */unsigned short) max((((unsigned long long int) arr_0 [i_0 + 1] [i_0 - 1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (var_3)))) ? (((/* implicit */int) ((2087038343U) >= (var_2)))) : (((/* implicit */int) ((arr_0 [i_0] [i_0]) != (var_8)))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) != (((/* implicit */int) ((unsigned char) max((-8939677036084072155LL), (var_3)))))));
        var_17 -= max((((/* implicit */long long int) min((((unsigned char) var_3)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1])))))))), (arr_2 [i_1]));
    }
}
