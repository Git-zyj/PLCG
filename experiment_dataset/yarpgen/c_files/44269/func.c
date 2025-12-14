/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44269
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) (+(-1LL))))), (((((((/* implicit */_Bool) 491556512523187107LL)) ? (-1LL) : (-1LL))) & (((/* implicit */long long int) var_8))))));
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((~(var_2))), (((/* implicit */unsigned long long int) ((-491556512523187107LL) | (var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned int) ((int) var_3))) & (var_7))));
                var_13 &= ((/* implicit */int) max((((var_0) ? (((/* implicit */long long int) var_7)) : (1LL))), ((~(arr_1 [i_0])))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((_Bool) arr_1 [i_1])) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_1])))));
            }
        } 
    } 
}
