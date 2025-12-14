/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205173
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(13044639905492594461ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned long long int) var_3)), (var_9)))))) ? (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) | (var_1))) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 += ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1])), (18446744073709551610ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) : (arr_3 [i_0] [i_0]));
                var_13 |= ((/* implicit */signed char) max((5493833660483696167ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1])))) ^ (((/* implicit */int) min((arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */signed char) (_Bool)0))))))))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1] [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_0)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) var_10)) ? ((+(1099243192320ULL))) : (arr_3 [i_0] [i_1])))));
            }
        } 
    } 
}
