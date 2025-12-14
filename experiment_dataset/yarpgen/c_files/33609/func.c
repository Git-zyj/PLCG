/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33609
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
    var_20 *= ((/* implicit */short) min((1207565896947715542ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)-512)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) (~(max((max((((/* implicit */long long int) var_9)), (var_19))), (var_19)))));
                var_22 = ((/* implicit */short) min((var_22), (arr_0 [i_0])));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((max((((((var_19) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))), (((/* implicit */long long int) ((var_0) % (((/* implicit */int) ((short) var_19))))))));
}
