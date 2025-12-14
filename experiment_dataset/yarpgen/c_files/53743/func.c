/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53743
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (short)3990))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_16)))) ? (((arr_0 [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_1])))) : (((arr_0 [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) var_14))) + (-4412148981982320901LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1]))))))))));
                var_21 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)52))))), (min((4412148981982320900LL), (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) (signed char)14))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (-4412148981982320883LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-3990))))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((var_1) - (16818016725233202489ULL)))))))), (((/* implicit */long long int) (!(((var_11) != (((/* implicit */int) (unsigned short)304))))))))))));
}
