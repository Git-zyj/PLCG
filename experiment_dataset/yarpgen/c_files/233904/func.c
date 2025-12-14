/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233904
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
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((((/* implicit */int) (signed char)44)) >> (((2003559879U) - (2003559863U))))) : (((/* implicit */int) (signed char)3))))) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (max((((/* implicit */unsigned int) var_6)), (1257669333U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = (-(((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) % (-1624917527033460695LL))))));
                var_20 = arr_0 [i_0] [i_1];
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((5212648604077135679ULL) + (((/* implicit */unsigned long long int) -1624917527033460695LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)155)) ^ (((/* implicit */int) arr_2 [i_0])))))));
                var_22 += ((/* implicit */_Bool) arr_2 [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_10);
}
