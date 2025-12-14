/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50690
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
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */int) (unsigned short)65535)) >> (((5016338683936793587LL) - (5016338683936793566LL)))))) ? (((long long int) arr_2 [i_0 - 1] [i_0 - 1])) : (((((_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) var_1)) - (54627)))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30960))) : (var_6)))))));
    }
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (_Bool)1))));
}
