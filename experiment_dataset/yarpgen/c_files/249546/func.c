/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249546
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))), (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-14073)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_5)))) : (((/* implicit */int) var_9)))))));
    var_11 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) var_8)), (((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [(unsigned char)9] [(unsigned char)9] [i_1]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))) ? (((/* implicit */int) max(((short)-1425), (max((((/* implicit */short) arr_1 [i_0] [i_0])), ((short)-1)))))) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_0]))))));
                var_13 = ((/* implicit */unsigned char) (!(var_7)));
                var_14 = ((/* implicit */short) (unsigned char)176);
            }
        } 
    } 
}
