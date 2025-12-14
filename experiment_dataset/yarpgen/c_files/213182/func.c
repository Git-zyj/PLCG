/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213182
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
    var_18 = ((/* implicit */unsigned long long int) var_0);
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(var_8))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~((~(((/* implicit */int) ((signed char) var_9))))))))));
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551588ULL)) || (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (short)-1038)))))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) 1319614594U));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_16))))))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) ^ ((((~(var_11))) & ((~(var_11))))))))));
}
