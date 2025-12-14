/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46764
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
    var_15 = ((/* implicit */unsigned char) var_9);
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((var_10) / (var_6)))))) ? (max((((((/* implicit */_Bool) (unsigned short)15584)) ? (11300924388259731334ULL) : (((/* implicit */unsigned long long int) 585852573U)))), (((/* implicit */unsigned long long int) ((int) 372600916))))) : (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0] [5ULL]) ^ (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) ((_Bool) var_3)))))) : (min((((/* implicit */unsigned long long int) var_4)), (arr_3 [i_0])))));
        arr_5 [i_0] = ((/* implicit */short) (((+(arr_3 [i_0]))) - (((arr_3 [i_0]) & (arr_3 [i_0])))));
    }
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((/* implicit */long long int) 1158354419)), (-4529612758409862462LL))))));
}
