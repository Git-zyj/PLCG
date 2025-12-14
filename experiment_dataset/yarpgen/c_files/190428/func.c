/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190428
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [16ULL] [16ULL])))) : (arr_1 [i_0] [i_0]))))));
        var_17 = (-(((unsigned int) max((arr_1 [18U] [i_0]), (((/* implicit */long long int) -1289554064))))));
    }
    var_18 = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) max((-390575638), (((/* implicit */int) var_15))))), (max((var_11), (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) ((((int) (_Bool)1)) != (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)29466)) - (29436))))))))));
    var_19 = ((((/* implicit */_Bool) ((signed char) var_10))) ? (1289554090) : (((/* implicit */int) ((((/* implicit */int) var_5)) < (((((/* implicit */_Bool) 833269797)) ? (var_7) : (((/* implicit */int) var_10))))))));
}
