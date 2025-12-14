/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4825
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
    var_20 ^= ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)179)) && (((/* implicit */_Bool) 0U))))), ((short)16384)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(var_5)))) | (((/* implicit */int) ((_Bool) var_19)))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max(((unsigned short)28248), (((/* implicit */unsigned short) (unsigned char)204))))), (((((((/* implicit */_Bool) var_7)) ? (405048389467211527ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned long long int) var_11)))))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_17)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23595)) || (((/* implicit */_Bool) var_1)))))));
                var_24 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) 1725593599U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) / (var_1)));
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned int) ((unsigned char) ((_Bool) ((10528029115958927881ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65)))))));
}
