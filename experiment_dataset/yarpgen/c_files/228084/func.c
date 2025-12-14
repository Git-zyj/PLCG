/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228084
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((var_17) / (max((max((var_5), (((/* implicit */long long int) var_3)))), (var_17))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                var_20 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (65535U)))) ? (((/* implicit */long long int) 24937526)) : (5399020934503365837LL));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_0] [i_1]))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1]);
                var_21 = ((int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) var_17)))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_10))));
}
