/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52727
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
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48670)) ? (((var_2) | (var_1))) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_5)) ? (var_18) : (((/* implicit */unsigned long long int) var_2)))) : ((~(var_18)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = (unsigned char)200;
                var_21 = ((/* implicit */long long int) max((((/* implicit */short) ((_Bool) (~(var_10))))), ((short)-2933)));
            }
        } 
    } 
    var_22 -= ((/* implicit */long long int) var_5);
    var_23 = ((/* implicit */int) max((((/* implicit */long long int) ((min((((/* implicit */int) var_13)), (var_17))) < (((/* implicit */int) var_15))))), (9020078327067571446LL)));
    var_24 = ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (-(max((var_7), (((/* implicit */unsigned long long int) var_17))))))));
}
