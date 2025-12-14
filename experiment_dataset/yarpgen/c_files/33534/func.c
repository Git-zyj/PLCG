/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33534
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_11 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_0] [i_1]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
                    var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 3]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((var_3) && ((_Bool)1)))), (max((-2446379974246171171LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) var_5))));
    var_14 |= ((/* implicit */short) ((min((((/* implicit */long long int) var_2)), (-2446379974246171161LL))) * (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 613083420821351302LL))));
}
