/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219342
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_13))));
    var_19 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_2)))))))) != (max((-552797177), ((~(((/* implicit */int) arr_1 [i_0]))))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_8) | (((/* implicit */int) (short)-23299))))) && (((/* implicit */_Bool) -552797177)))) ? (((/* implicit */long long int) (-(((var_8) / (((/* implicit */int) var_5))))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) + (var_4))))))))));
    }
    var_21 = ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ ((~(var_11))))) | (((/* implicit */long long int) ((var_8) & (((/* implicit */int) (unsigned short)65509))))));
}
