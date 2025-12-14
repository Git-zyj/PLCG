/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231152
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((min((((/* implicit */int) var_8)), ((-(((/* implicit */int) arr_4 [(unsigned short)5] [i_0])))))) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (10171)))))) : (((/* implicit */unsigned short) ((((min((((/* implicit */int) var_8)), ((-(((/* implicit */int) arr_4 [(unsigned short)5] [i_0])))))) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0] [i_0])) - (10171))) - (24773))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_1]))));
                var_17 = ((/* implicit */unsigned char) min((-1569481899), (1569481899)));
                arr_6 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) -1569481899))) >= (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) ^ (-6157868031096638351LL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (-(var_13)));
}
