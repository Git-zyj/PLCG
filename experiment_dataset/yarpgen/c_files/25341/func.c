/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25341
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) var_12))))), (var_6)));
    var_18 = ((/* implicit */long long int) max((((((((/* implicit */int) var_13)) * (((/* implicit */int) (unsigned char)2)))) | (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) -2592760117450307045LL))));
        arr_2 [i_0] [(signed char)14] = ((/* implicit */int) var_10);
        arr_3 [7LL] = ((/* implicit */unsigned short) max((-6589305670084606660LL), (((/* implicit */long long int) var_10))));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((5752033873953288842ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))) ? (((/* implicit */int) ((5752033873953288846ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_14)))))))) || (((/* implicit */_Bool) var_14))));
}
