/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215182
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
    var_20 &= ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) min((((((/* implicit */int) var_12)) | (((/* implicit */int) var_4)))), (var_2)))) : (((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_21 &= arr_2 [(unsigned short)4];
                var_22 = ((/* implicit */unsigned short) max((((arr_3 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) | (((arr_0 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))))));
            }
        } 
    } 
}
