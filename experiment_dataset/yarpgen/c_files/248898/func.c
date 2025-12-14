/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248898
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_12 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (((255LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22517))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 3646759861U))))));
    }
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned short) (!((_Bool)1)))), (min(((unsigned short)23981), (((/* implicit */unsigned short) (signed char)29))))))), (var_1)));
}
