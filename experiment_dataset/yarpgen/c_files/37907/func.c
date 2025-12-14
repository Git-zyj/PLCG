/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37907
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
    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) + (((((((/* implicit */int) (short)29593)) + (((/* implicit */int) (short)29573)))) + (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [(short)9] [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_0 [i_1]))))) == (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)-29593))) < (((/* implicit */int) arr_0 [i_0])))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (short)-29600))));
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned char) var_15);
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_14))));
}
