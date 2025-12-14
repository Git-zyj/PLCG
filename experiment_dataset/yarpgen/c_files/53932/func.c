/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53932
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
    var_16 = var_11;
    var_17 = var_2;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (~(((/* implicit */int) arr_2 [i_0] [0ULL])))))) | (((/* implicit */int) arr_0 [i_1]))));
                var_18 ^= ((/* implicit */long long int) var_11);
                arr_6 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) arr_3 [i_0 + 1]))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_1])) != (var_10))))) % (var_10)))));
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_1 + 2]) % (var_13)))) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) max((var_11), (var_1)))))))));
            }
        } 
    } 
}
