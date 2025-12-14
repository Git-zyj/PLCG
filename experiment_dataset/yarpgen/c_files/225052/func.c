/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225052
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (var_9) : (1405348624U)))) ? (((2889618672U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41761))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)32736)))))))))))));
    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1405348624U)) ? (var_9) : (((/* implicit */unsigned int) (+(1535208634)))))) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)3802)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2889618671U))) == (((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_14 += ((/* implicit */unsigned short) (_Bool)1);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) (unsigned short)1)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    var_15 = var_7;
}
