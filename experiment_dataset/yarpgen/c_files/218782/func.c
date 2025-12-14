/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218782
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)7680)))) & (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((arr_3 [i_1] [i_1] [i_0]) | (arr_3 [i_1] [i_1] [16ULL])))));
            }
        } 
    } 
    var_16 += ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)34401))))), (((unsigned int) (short)7694))))), ((-(((((/* implicit */_Bool) 1449672455)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12)))))));
}
