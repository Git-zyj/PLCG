/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226299
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 += ((/* implicit */unsigned int) (-(((long long int) arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) -9223372036854775794LL))))))));
    }
    var_20 |= ((/* implicit */_Bool) var_0);
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) min((var_17), (((/* implicit */short) (signed char)47)))))))) ? (((/* implicit */int) (((((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) var_0)))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (var_12))))))) : (((/* implicit */int) var_7)))))));
}
