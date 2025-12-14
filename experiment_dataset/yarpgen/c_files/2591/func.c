/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2591
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3782610244U)) ? (((((/* implicit */_Bool) min((var_12), (4980946295903287200LL)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2))) : (var_14))) : (((((((/* implicit */unsigned long long int) var_8)) >= (var_9))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_13)) : (var_6))) : (min((((/* implicit */long long int) var_0)), (var_8)))))));
    var_18 += ((/* implicit */_Bool) (-(((long long int) min((var_12), (((/* implicit */long long int) (short)-15792)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (arr_1 [i_0] [i_1])))) ? (((/* implicit */long long int) ((unsigned int) var_3))) : ((+(var_12))))));
                var_20 = ((((/* implicit */_Bool) (+(arr_5 [(_Bool)0] [i_1 + 1] [6LL])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15619)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15619)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_4), (var_7))))) : (var_15))));
                arr_7 [7LL] [i_0] = ((((/* implicit */_Bool) (~(6830221991522014648LL)))) ? (max((max((var_12), (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) min((var_4), (arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 2])))))) : (((/* implicit */long long int) max(((+(((/* implicit */int) (short)15619)))), (((/* implicit */int) ((short) var_2)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (var_0)));
}
