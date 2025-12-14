/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26782
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
    var_18 = var_9;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = 18446744073709551615ULL;
        var_19 = ((((/* implicit */_Bool) ((var_10) % (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (0ULL));
        var_20 = ((((/* implicit */_Bool) ((var_5) * (var_16)))) ? (11391164476004421128ULL) : (((((/* implicit */_Bool) var_9)) ? (var_13) : (arr_0 [i_0]))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) > (16491919916367491396ULL))))) | (arr_2 [i_0] [5ULL])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        var_22 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (var_4)))) ? (((var_15) - (16491919916367491396ULL))) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (var_7))))), (var_6));
        var_23 = ((((/* implicit */_Bool) max((1954824157342060220ULL), (((((/* implicit */_Bool) var_14)) ? (var_0) : (var_6)))))) ? (max((min((var_7), (9323934250517525583ULL))), (max((var_16), (var_15))))) : (((min((arr_5 [i_1] [i_1]), (285506456124525287ULL))) ^ (((18112148930670655773ULL) / (7513712885433930234ULL))))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) 16491919916367491396ULL)) ? ((-(((((/* implicit */_Bool) 7905612212511149047ULL)) ? (1954824157342060219ULL) : (17199784864010720196ULL))))) : (var_2)))));
        var_25 &= ((var_9) % (((unsigned long long int) ((unsigned long long int) arr_5 [i_1] [i_1]))));
    }
}
