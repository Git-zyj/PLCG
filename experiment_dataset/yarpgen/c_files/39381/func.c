/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39381
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) max((((/* implicit */signed char) var_16)), (var_9)))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    var_19 = ((/* implicit */long long int) var_0);
    var_20 = ((/* implicit */short) min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (min((1849595993), (-1849595989))) : ((+(((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((min((1670966847), (var_7))), (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
                    var_22 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (-1849595994)))), (min((var_12), (((/* implicit */unsigned long long int) var_14)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -6441359079688912505LL)) && ((_Bool)1))) || (((/* implicit */_Bool) (-(var_14)))))))));
                }
            } 
        } 
    } 
}
