/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211546
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
    var_18 = ((/* implicit */short) -1425767337);
    var_19 = ((/* implicit */signed char) ((((_Bool) ((unsigned char) var_14))) ? ((~(max((-6153436792118246169LL), (var_17))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_15))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
    }
}
