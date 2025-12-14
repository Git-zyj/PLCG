/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48909
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
    var_13 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (var_3))))))));
    var_14 = ((/* implicit */long long int) max((var_14), (max(((~(((((var_1) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0)))))), (((/* implicit */long long int) var_3))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) max((max((arr_3 [i_0]), (max((var_2), (var_2))))), ((-(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2])))))))));
                    var_16 = ((var_6) << (((((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_5))))) ? (((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (17090249300701648978ULL))));
                    var_17 *= (-((~(((((/* implicit */_Bool) var_8)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (var_8)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (max((((/* implicit */unsigned long long int) var_6)), (var_2)))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */int) var_2);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(var_1))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (((var_4) ? (((/* implicit */unsigned int) var_6)) : (((var_9) << (((((/* implicit */int) var_7)) - (98)))))))));
}
