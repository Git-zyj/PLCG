/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191190
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
    var_17 = ((/* implicit */short) max((((/* implicit */long long int) ((var_10) >= (((/* implicit */unsigned long long int) var_2))))), ((+(var_12)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) arr_1 [i_0] [9LL]);
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned char)253)))))) / (1298119027))))));
        var_20 = ((/* implicit */int) arr_0 [i_0]);
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((var_8) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))))) ? (min((((/* implicit */unsigned int) arr_1 [14LL] [i_0])), (2535307672U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)-31589)))))))) < (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) arr_0 [i_0]))))), (((unsigned long long int) 4194176U))))));
    }
    var_22 = ((14293353368881516590ULL) > (((/* implicit */unsigned long long int) var_14)));
}
