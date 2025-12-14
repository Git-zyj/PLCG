/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244490
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
    var_14 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_1))))));
                arr_7 [i_1] [i_0] = ((/* implicit */_Bool) ((short) var_13));
            }
        } 
    } 
}
