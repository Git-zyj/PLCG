/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219406
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) min((var_11), ((-(((/* implicit */int) (unsigned short)20))))));
                var_12 -= ((/* implicit */unsigned char) 554182640U);
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26731)) + (((/* implicit */int) var_1))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-26932)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (short)3108)) ? (((/* implicit */int) var_1)) : (var_10))))) * (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) (short)16650))))) < (var_9))))));
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((signed char) 11761419450425870314ULL)))))), (((min((((/* implicit */unsigned long long int) var_10)), (var_5))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3108)) ? (var_10) : (((/* implicit */int) (short)-18874)))))))));
}
