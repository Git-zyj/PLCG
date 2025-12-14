/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195525
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
    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_10))))))) : (((((/* implicit */int) ((short) (short)32767))) - ((-(((/* implicit */int) var_9))))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((4006391035U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((var_2), (((/* implicit */int) var_9)))) : (((((/* implicit */int) (unsigned char)71)) + (((/* implicit */int) (short)32148))))))) + (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_7))))) - ((+(var_10)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_13))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)62127)) / (((/* implicit */int) (short)-2107))))))) * (((((/* implicit */long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) (short)32767))))) / (var_13)))));
                    arr_9 [i_2 - 1] [i_2] [i_0] = ((/* implicit */unsigned short) (unsigned char)31);
                }
            } 
        } 
    } 
}
