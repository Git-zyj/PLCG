/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231962
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((-7621710606534433776LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))) + (((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0 - 1])), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (min((-7621710606534433776LL), (((/* implicit */long long int) (signed char)-1))))))));
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775790LL)) ? (9223372036854775806LL) : (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)96)), (var_2))))) > (max((var_6), (((/* implicit */unsigned int) (signed char)3)))))))) : (max((((((/* implicit */_Bool) 9223372036854775789LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6))), (((((/* implicit */_Bool) var_3)) ? (276343170U) : (var_4)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((6413585284056992589ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) ? (((/* implicit */long long int) var_5)) : (var_8)));
}
