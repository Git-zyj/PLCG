/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191888
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((signed char)106), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_12)))) ? (((/* implicit */long long int) (+(2U)))) : (16492674416640LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) min(((-(min((206158430208LL), (-16492674416641LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (16492674416642LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))) && (((/* implicit */_Bool) ((-206158430209LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) -206158430238LL)) ? (((0ULL) >> (((16492674416638LL) - (16492674416622LL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767)))))));
            }
        } 
    } 
}
