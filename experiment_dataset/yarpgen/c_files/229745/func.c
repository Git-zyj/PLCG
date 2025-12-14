/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229745
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */int) arr_0 [i_0])) : (min((var_14), (((/* implicit */int) (unsigned short)14695)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((2946409944U) << (((((((/* implicit */_Bool) 2608596963U)) ? (8817419654228320072LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))) - (8817419654228320061LL)))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (unsigned char)89);
    }
    var_17 &= ((/* implicit */unsigned long long int) var_10);
}
