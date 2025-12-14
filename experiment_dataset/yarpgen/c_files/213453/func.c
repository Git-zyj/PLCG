/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213453
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0])), (var_8))) >> ((((~(var_0))) - (1985096996896542800ULL)))));
                var_14 *= ((/* implicit */unsigned char) arr_0 [(unsigned char)19] [(_Bool)1]);
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (236851863201143928ULL)));
                var_16 = min((var_8), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))));
                arr_6 [i_1] = ((/* implicit */int) (-(min((((/* implicit */unsigned int) arr_3 [i_0])), (max((((/* implicit */unsigned int) var_4)), (var_8)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min(((+(var_2))), (max((min((((/* implicit */unsigned int) var_6)), (var_2))), (var_2)))));
}
