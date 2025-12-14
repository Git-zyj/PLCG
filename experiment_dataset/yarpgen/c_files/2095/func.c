/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2095
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
    var_20 = ((/* implicit */unsigned long long int) var_19);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_12)));
                    var_21 *= ((/* implicit */unsigned long long int) var_12);
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_11)))))))) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_5)), (var_17))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))))))));
}
