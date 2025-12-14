/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218359
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
    var_11 = ((/* implicit */unsigned char) (short)-6471);
    var_12 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)3)) / (((/* implicit */int) var_5)))) + (((/* implicit */int) var_10))))), (((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)0)) : (var_3))))));
    var_13 &= ((/* implicit */unsigned char) ((_Bool) ((unsigned char) (~(((/* implicit */int) (signed char)-77))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-121)), (-2147483623)))) ? (259080354U) : (((/* implicit */unsigned int) 1969709135)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 291592559)) ? (((/* implicit */unsigned int) -1363753634)) : (268419072U)))) ? (1969709152) : (((/* implicit */int) var_5)))))));
                arr_7 [(short)14] [i_1] [i_0] = ((/* implicit */short) var_2);
            }
        } 
    } 
}
