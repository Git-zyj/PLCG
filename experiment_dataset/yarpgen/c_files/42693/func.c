/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42693
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
    for (long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (min((min((((/* implicit */unsigned short) arr_4 [1] [(_Bool)1])), (var_0))), (((/* implicit */unsigned short) ((short) var_0)))))));
                var_15 = ((/* implicit */unsigned char) (-(min((var_5), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_0])) - (((/* implicit */int) arr_4 [i_0 - 1] [1U]))))) + (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])))))))) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) min((((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) var_11)))), ((!(((/* implicit */_Bool) var_8)))))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_9))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_0);
}
