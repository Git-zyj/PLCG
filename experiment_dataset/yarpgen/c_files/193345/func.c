/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193345
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(var_12))), (((/* implicit */int) ((short) var_3)))))) ? (((((/* implicit */_Bool) ((var_2) / (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) 4294967295U)) ? (var_8) : (var_7))))) : ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((936859964U) < (33554432U))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 33554432U)) : (var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((arr_2 [i_0 + 2] [i_0 + 2]) >> (((/* implicit */int) (!(var_4))))));
                var_15 &= ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_0 + 1] [i_0 + 4])))) >= (arr_0 [i_0 + 2]));
                arr_4 [i_0] [i_1] [(unsigned short)1] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 2] [i_1])) ? (arr_2 [i_0 + 1] [i_1]) : (arr_2 [i_1] [i_0 - 1])))));
                var_16 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) ((1496124364U) >> (((1496124379U) - (1496124350U)))))) == ((((_Bool)1) ? (((/* implicit */long long int) 4261412864U)) : (9223372036854775807LL))))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (((var_11) - (((/* implicit */long long int) 3603711804U))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (var_6))))) : (var_0)));
    var_18 = ((/* implicit */_Bool) ((short) var_0));
    var_19 = ((/* implicit */unsigned int) ((long long int) var_12));
}
