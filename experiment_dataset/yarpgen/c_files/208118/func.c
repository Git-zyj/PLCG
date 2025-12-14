/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208118
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_8))));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)113)));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? ((~(((/* implicit */int) (short)-1)))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) >= (((/* implicit */int) min((var_6), (var_6))))))) : (((((/* implicit */int) var_8)) % (((/* implicit */int) ((_Bool) var_10)))))));
    var_22 = ((/* implicit */short) (unsigned char)6);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */int) max((((/* implicit */short) var_10)), (var_3)))), ((+(((/* implicit */int) var_14)))))));
                var_24 = ((/* implicit */unsigned short) min((((((/* implicit */int) ((short) var_6))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (var_13))))), (((((((/* implicit */int) (short)32767)) >= (((/* implicit */int) (unsigned short)45214)))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */int) (unsigned short)46040)) % (((/* implicit */int) (unsigned short)20322))))))));
            }
        } 
    } 
}
