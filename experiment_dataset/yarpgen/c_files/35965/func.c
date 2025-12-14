/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35965
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_2 [i_0]))), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (var_2) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (arr_1 [i_0]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))));
        var_21 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) > (arr_1 [i_0]))));
        var_22 &= ((/* implicit */int) ((((/* implicit */_Bool) -740745649)) ? (((/* implicit */unsigned long long int) -1040467985)) : (12285293460955870098ULL)));
    }
    var_23 = ((/* implicit */unsigned long long int) var_8);
    var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (var_18)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */int) (signed char)25)))))), ((+(((/* implicit */int) (unsigned char)0))))));
}
