/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209975
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
    var_15 = min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) min((((((/* implicit */_Bool) 2828571881949596777LL)) || (((/* implicit */_Bool) (signed char)54)))), (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (signed char)54))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)54)) && (((/* implicit */_Bool) var_7)))))));
        arr_2 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) != (2749898174U));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_0 [i_0 + 1])))) & (((/* implicit */int) (signed char)-7))));
        arr_4 [i_0] = ((/* implicit */unsigned char) var_4);
    }
    var_17 &= ((/* implicit */signed char) var_3);
    var_18 |= ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-103)))))) || (((((/* implicit */_Bool) 8277758918613919555LL)) && ((_Bool)1))))))));
}
