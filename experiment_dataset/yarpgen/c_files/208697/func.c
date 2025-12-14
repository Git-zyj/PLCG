/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208697
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0])) % (min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_13)), (arr_1 [i_0] [i_0]))))))));
                var_19 = ((/* implicit */unsigned short) arr_3 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (~(min((var_0), (((/* implicit */long long int) ((_Bool) (_Bool)1)))))));
    var_21 += ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((long long int) ((var_15) ? (var_1) : (((/* implicit */int) var_16))))) : (((/* implicit */long long int) (+(((/* implicit */int) (!(var_15)))))))));
}
