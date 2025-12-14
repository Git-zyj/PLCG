/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217955
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
    var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (var_8) : (max((((var_7) ^ (((/* implicit */long long int) 1140537297)))), (((/* implicit */long long int) (signed char)127))))));
    var_12 -= ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3]))))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (2147483637))))))));
        var_14 = max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)127))))), ((-(arr_1 [i_0]))));
    }
}
