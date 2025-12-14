/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243654
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
    var_17 = ((((/* implicit */_Bool) (~((~(var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)84))) : (6553514597807804830LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */long long int) -679552978)) : (-8LL)))) : (min((var_4), (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) var_16)) : (var_13)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(arr_2 [i_0])))))) ? (((4047201109U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) - (var_0)))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) (+((+(var_7)))));
                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))), ((-(var_0)))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)3184))) : (((((/* implicit */_Bool) 1722409588)) ? (-2101929977237853737LL) : (((/* implicit */long long int) 1029985207))))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-25331)) ? (arr_3 [i_1]) : (((/* implicit */long long int) (~(var_11))))));
            }
        } 
    } 
}
