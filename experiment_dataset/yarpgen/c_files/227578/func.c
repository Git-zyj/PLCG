/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227578
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) min((var_1), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_2))))))))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((480ULL), (min((((/* implicit */unsigned long long int) ((int) (unsigned short)29117))), (var_3))))))));
    var_13 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1614217762U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (65408) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) 1152424779035376041ULL)) ? (7196887268192018383ULL) : (var_1))))));
    }
}
