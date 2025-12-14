/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237526
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
    var_16 |= ((/* implicit */unsigned short) max((((int) (~(var_10)))), (((-1) + (19)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_6), (arr_2 [i_1])))) : (((((/* implicit */_Bool) 1941488952931984652ULL)) ? (((/* implicit */int) (unsigned char)24)) : (-16)))))));
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (((((/* implicit */unsigned long long int) -1438740715)) & (16505255120777566983ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((signed char) (signed char)101)))))));
                }
            } 
        } 
    } 
}
