/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51255
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
    var_12 += ((/* implicit */short) ((((/* implicit */_Bool) min((((3988485336U) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)36)), ((unsigned char)70))))))) ? (((/* implicit */int) min((var_0), (((/* implicit */short) var_11))))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)235)) : (8191)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)-112)) ? (((((/* implicit */int) (short)-12429)) | (((/* implicit */int) (short)-6117)))) : (((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)1)))))))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) var_11)), ((short)29589)))) && ((!(((/* implicit */_Bool) var_10)))))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775807LL))), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) ((short) (short)6035))) : (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (var_4))))) : (((8U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))))))));
    var_17 *= var_3;
}
