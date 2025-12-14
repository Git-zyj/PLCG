/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41606
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? ((-(((/* implicit */int) var_14)))) : ((+(((/* implicit */int) var_10)))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))));
    }
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-((+((+(((/* implicit */int) (unsigned short)23)))))))))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4294967294U)))))))))))));
}
