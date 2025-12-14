/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239740
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (-2809061507448830941LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0])))))) - (var_7))), (((/* implicit */unsigned long long int) min((2809061507448830940LL), (((/* implicit */long long int) (signed char)-8)))))));
                arr_5 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 + 1]))))) ? (((((/* implicit */_Bool) (signed char)-22)) ? (8186658028629433096LL) : (((/* implicit */long long int) -517258390)))) : (8186658028629433083LL))), (((/* implicit */long long int) max(((signed char)8), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [2U]))))))))));
            }
        } 
    } 
    var_13 &= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (-(2147483647)))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 9223372036854775799LL)) : (var_7))))) < (max((((((/* implicit */_Bool) 958787853U)) ? (var_11) : (var_1))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) | (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8186658028629433106LL)) ? (var_6) : (-1)))) : (var_7)))));
}
