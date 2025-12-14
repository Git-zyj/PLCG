/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229743
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_1 [i_1]) & (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_2 [i_0]))))) : (882735496U))), (((((/* implicit */_Bool) ((12U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (short)6813)) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                var_17 ^= ((/* implicit */long long int) ((min((((/* implicit */long long int) ((arr_3 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)6813)))))), (var_9))) >= (((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)17355)))) ? (((/* implicit */int) ((signed char) 3755085858566741782ULL))) : (((/* implicit */int) ((short) 3412231806U))))))));
            }
        } 
    } 
    var_18 = min((min((((((/* implicit */_Bool) (short)-6814)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20654))) : (var_9))), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_10)));
    var_19 = ((/* implicit */short) (~(((/* implicit */int) (!((((-2147483647 - 1)) > (var_8))))))));
}
