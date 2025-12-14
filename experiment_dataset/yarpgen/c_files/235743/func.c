/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235743
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
    var_17 &= ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2))) <= (max((((/* implicit */unsigned int) (signed char)-118)), (4294967286U))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) var_4)) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))) : (((unsigned long long int) -6136354415109307530LL))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_2))) | (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((((/* implicit */_Bool) -3295135227455952154LL)) || (var_1))))))));
    var_19 = ((/* implicit */signed char) ((var_0) / (((((/* implicit */_Bool) ((var_14) ^ (var_16)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    var_20 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((var_15), (((/* implicit */unsigned int) var_13))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_0)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */int) ((min((((6520791238759704050LL) << (((((((/* implicit */int) (short)-1)) + (52))) - (51))))), (((/* implicit */long long int) max((arr_1 [i_0]), (arr_1 [i_1])))))) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1)))) <= (min((arr_0 [i_0]), (1304098316)))))))));
                arr_6 [i_0] [2U] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) min((3ULL), (((/* implicit */unsigned long long int) var_16))))))));
            }
        } 
    } 
}
