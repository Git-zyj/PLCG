/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237090
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
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) var_0)) >= (var_3)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            {
                var_16 ^= ((short) (-(min((((/* implicit */unsigned int) (unsigned short)0)), (523776U)))));
                var_17 -= ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)25537), (((/* implicit */unsigned short) (short)13528))))) - (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (676098129)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (unsigned short)20303)))))) : ((+(((((/* implicit */_Bool) (unsigned short)45219)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
}
