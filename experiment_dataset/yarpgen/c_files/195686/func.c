/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195686
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((min(((~(arr_2 [i_0 + 3]))), (min((-6359065916728198596LL), (var_7))))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) % (4294967290U)))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (137438953471LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [(signed char)13])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0])))) : ((~(((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 4])))))) : (((/* implicit */int) var_4))));
        var_13 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    var_14 = ((/* implicit */unsigned int) max((var_11), (var_11)));
    var_15 += ((/* implicit */signed char) ((4294967290U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
}
