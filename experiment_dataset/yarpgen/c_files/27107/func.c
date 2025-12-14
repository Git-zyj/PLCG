/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27107
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 *= arr_3 [i_0] [i_0 - 2];
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) -2147483637)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max(((~(((/* implicit */int) (short)32767)))), ((-(((/* implicit */int) max((((/* implicit */unsigned char) var_13)), (var_11)))))))))));
}
