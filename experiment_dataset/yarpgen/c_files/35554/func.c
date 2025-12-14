/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35554
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = arr_0 [i_2];
                    var_12 = ((/* implicit */_Bool) min((max((min((var_5), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((arr_3 [i_1]) != (var_5)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1828560334U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56534)))))) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_6 [i_0])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) var_2)))), (((((/* implicit */int) var_6)) != (((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))))));
    var_14 = ((/* implicit */signed char) var_10);
    var_15 = ((/* implicit */int) var_10);
}
