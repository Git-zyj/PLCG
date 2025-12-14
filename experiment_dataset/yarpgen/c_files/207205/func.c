/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207205
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) (!(((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) > (((/* implicit */int) var_3))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_7))))))));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2166))) + (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63370)) >= (((/* implicit */int) var_8))))), (0ULL)))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_7);
}
