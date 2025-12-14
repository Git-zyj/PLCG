/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212821
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
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (~((~(0ULL)))));
                arr_4 [i_0] = ((/* implicit */unsigned int) max(((short)-17137), ((short)21222)));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-21222))))) ? (((var_0) & (var_0))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16234)) ? (62968037U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((signed char) 6961134071848202515ULL))) : (0)))));
}
