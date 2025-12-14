/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202269
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10)));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)38028));
        arr_3 [(unsigned char)11] [i_0] = ((((/* implicit */_Bool) 469708516U)) ? (var_11) : (2736712982868976863LL));
    }
    var_15 = ((/* implicit */unsigned int) var_6);
    var_16 = ((/* implicit */long long int) var_4);
}
