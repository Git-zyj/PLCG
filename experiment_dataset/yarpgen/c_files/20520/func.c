/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20520
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_2)) && ((!(((/* implicit */_Bool) var_12))))))))));
    var_14 = ((/* implicit */_Bool) ((short) (~(max((var_0), (((/* implicit */unsigned int) (short)30672)))))));
    var_15 &= var_3;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) arr_3 [i_0])))));
                arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */int) arr_3 [i_1])), ((+(((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_17 *= ((((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_2)))))) / (min((((3862957882U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-2543))))), (((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
}
