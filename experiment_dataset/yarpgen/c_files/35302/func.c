/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35302
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_7 [i_0] [i_0] [i_1] [i_1]) : (arr_7 [i_0] [i_1] [i_2] [i_2])))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0]), (var_8))))))) ? (((/* implicit */int) var_5)) : (var_6))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 - 4] [i_0 - 1] [i_0]))) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (2ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)1))))) : (var_0))))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */_Bool) var_7);
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_11) % (((/* implicit */unsigned long long int) var_6))))) || (((/* implicit */_Bool) var_1))))) == ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) > (var_11)))) : (((/* implicit */int) var_5))))));
    var_18 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_6)) : (18446744073709551615ULL))))) * (((/* implicit */unsigned long long int) var_0))));
}
