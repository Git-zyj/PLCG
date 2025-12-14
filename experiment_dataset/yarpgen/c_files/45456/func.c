/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45456
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
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) var_5)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)37)), (4294967279U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) : (4294967279U)))));
    var_17 = ((/* implicit */unsigned int) ((unsigned char) 948237196));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0]))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) arr_4 [i_0])))) : (max((((/* implicit */int) (_Bool)0)), (var_6)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), ((~(1272783957542307701LL)))))));
            }
        } 
    } 
}
