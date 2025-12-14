/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211509
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((short) ((4294967295U) > (max((((/* implicit */unsigned int) var_10)), (var_3)))))))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) var_14)) & (((((/* implicit */_Bool) (~(((/* implicit */int) (short)31921))))) ? (((/* implicit */int) (short)-31926)) : ((~(((/* implicit */int) (_Bool)0)))))))))));
    var_18 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) max(((short)(-32767 - 1)), ((short)-31912)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])))));
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */_Bool) arr_0 [(unsigned short)11] [(unsigned short)11])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31922))))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1])))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_0 [i_1] [i_0 + 1]))));
            }
        } 
    } 
}
