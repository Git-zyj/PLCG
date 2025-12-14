/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43915
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) arr_6 [i_1 + 2] [i_1 + 2] [i_0]);
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) && (((/* implicit */_Bool) arr_5 [i_2] [i_1 - 3] [i_1] [i_1 - 2]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 9092771343821393995ULL))) ^ (((((/* implicit */int) var_5)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-100)) && (((/* implicit */_Bool) var_0)))))))));
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) var_7)) : (6057396994102607304LL)))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
}
