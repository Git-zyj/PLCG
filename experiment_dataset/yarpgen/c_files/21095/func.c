/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21095
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((signed char) min((arr_2 [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 + 1] [i_1 + 1]))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))) < ((-(max((((/* implicit */long long int) (unsigned short)65535)), (var_4)))))));
                var_19 = ((/* implicit */signed char) arr_5 [i_1]);
                var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_5)) : (arr_3 [i_0])))) : (((((/* implicit */_Bool) var_4)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) var_15))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(5194912553532027317ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3U)));
    var_22 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((long long int) var_7))) : (((((/* implicit */_Bool) (+(3U)))) ? (var_11) : ((+(var_11))))));
    var_23 = ((/* implicit */signed char) var_10);
}
