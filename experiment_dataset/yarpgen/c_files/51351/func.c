/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51351
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (max((((((/* implicit */_Bool) var_5)) ? (var_4) : (var_0))), (var_5))) : (((((/* implicit */_Bool) var_13)) ? (min((var_4), (((/* implicit */unsigned long long int) var_6)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_4))))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned long long int) ((var_8) ? (min((((/* implicit */unsigned long long int) var_15)), (var_5))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15)))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)249)), ((short)10716)))) != (((/* implicit */int) ((_Bool) var_6)))));
        var_19 = ((/* implicit */unsigned short) arr_4 [(short)10]);
        arr_6 [i_1] = ((((/* implicit */int) ((_Bool) ((signed char) var_15)))) > (((/* implicit */int) var_13)));
    }
    var_20 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_2) : (var_2)))), (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
}
