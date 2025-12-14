/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42298
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((_Bool) var_8)))));
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-13496), (((/* implicit */short) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) : (var_1)))) ? (((long long int) (~(var_6)))) : (((/* implicit */long long int) (~(((4294967289U) << (((var_2) - (9658257198945119466ULL)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) (((~(((2763252525948451565LL) >> (((((/* implicit */int) arr_2 [(_Bool)1])) - (65))))))) % (((/* implicit */long long int) ((int) arr_3 [i_1] [i_1 + 4] [i_1])))));
                var_14 = ((unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22147)))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned int) var_5);
}
