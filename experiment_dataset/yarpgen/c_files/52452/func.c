/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52452
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)100)) - (99))))))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) -8515674884735101560LL))));
            }
        } 
    } 
    var_14 = ((((/* implicit */_Bool) min((((1422476435U) << (((((/* implicit */int) (unsigned char)119)) - (92))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)149)) != (((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)106)), (2065615112990426217ULL)))) ? ((~(var_3))) : (var_9))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)160))))), (var_3))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_8))));
}
