/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208233
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) max((var_14), (var_6)))) >> (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_0)))))))));
    var_21 ^= ((/* implicit */short) min((((/* implicit */long long int) var_17)), (var_16)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    var_22 = var_17;
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((-1605439130858408418LL) / (-1605439130858408428LL)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) var_11);
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) <= (((/* implicit */int) var_14)))) ? (((/* implicit */unsigned int) var_13)) : (((var_18) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))) : (var_16))))));
}
