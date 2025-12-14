/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/309
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((var_2), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_11)))))))));
                arr_5 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_0 [i_1] [i_0])))))));
            }
        } 
    } 
    var_12 &= var_10;
    var_13 = ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    var_14 += ((/* implicit */int) (~((+(((var_1) << (((var_0) - (8184291067284463283LL)))))))));
}
