/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21734
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
    var_18 = ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */unsigned char) (unsigned short)38482);
                arr_5 [i_0] = ((/* implicit */signed char) max(((-(((/* implicit */int) (short)31744)))), ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) ? (var_15) : (var_14)))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */_Bool) (unsigned short)45553)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (4098865670U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
}
