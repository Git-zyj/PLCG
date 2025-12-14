/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42144
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 = ((((/* implicit */_Bool) max((arr_3 [i_0 - 1]), (arr_4 [i_0 + 3] [i_1 + 1])))) ? (((((/* implicit */_Bool) 17326388708421195172ULL)) ? (arr_4 [i_1] [i_0]) : (1185823600945294767ULL))) : (max((max((arr_2 [i_0] [23ULL]), (arr_4 [i_1] [i_0]))), (((unsigned long long int) 18446744073709551615ULL)))));
                arr_5 [2ULL] [2ULL] |= ((((arr_2 [i_0] [i_1 + 1]) / (arr_2 [22ULL] [i_1 - 2]))) >> (((((((/* implicit */_Bool) arr_4 [22ULL] [0ULL])) ? (max((17326388708421195144ULL), (18446744073709551615ULL))) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (2342358303844014147ULL))))) - (18446744073709551604ULL))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (min(((((+(var_0))) << (((min((1120355365288356452ULL), (var_17))) - (1120355365288356391ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))))));
}
