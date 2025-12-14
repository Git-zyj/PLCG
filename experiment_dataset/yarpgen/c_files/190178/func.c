/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190178
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((6454018584079245690LL), (((/* implicit */long long int) (unsigned short)24936))))), (min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) var_16))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((short) ((unsigned char) arr_3 [i_0])));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (short)-11035))) - (((((/* implicit */int) arr_0 [i_0] [i_1])) - (((/* implicit */int) var_1))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_0]))) + (-6454018584079245706LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_1 + 2] [i_1])), ((short)12821)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)37)), ((+(2738166047U)))))) && (((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2]))));
            }
        } 
    } 
}
