/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24517
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = var_3;
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-((-(arr_0 [i_0 + 2] [i_1 + 1]))))))));
                var_16 ^= ((/* implicit */unsigned char) ((min((var_3), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))))) >> (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) & (((/* implicit */int) min((((/* implicit */short) var_0)), ((short)-6))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_4);
    var_18 = ((/* implicit */signed char) (!(var_13)));
}
