/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34056
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 = min((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) / (arr_0 [i_0]))), (((/* implicit */long long int) arr_2 [i_0])));
        var_20 -= ((/* implicit */unsigned int) (unsigned char)148);
    }
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((min((max((((/* implicit */unsigned long long int) var_2)), (var_0))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (max((((/* implicit */long long int) var_10)), (var_8)))))))))));
    var_22 = ((/* implicit */long long int) (unsigned short)65535);
    var_23 = ((/* implicit */unsigned short) ((_Bool) ((((unsigned int) var_0)) % (((/* implicit */unsigned int) ((/* implicit */int) var_16))))));
}
