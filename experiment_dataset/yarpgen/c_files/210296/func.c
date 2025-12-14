/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210296
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
    var_17 = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_15))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (!(((_Bool) arr_0 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_6)))))));
        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [(_Bool)1] [i_0])))) ? (5103512438729113540LL) : (((/* implicit */long long int) arr_1 [14] [i_0]))));
    }
    var_21 = ((/* implicit */unsigned int) ((int) ((long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_10))))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((int) (_Bool)1)))));
    var_23 = ((/* implicit */_Bool) var_1);
}
