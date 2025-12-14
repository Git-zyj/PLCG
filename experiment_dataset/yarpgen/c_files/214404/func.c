/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214404
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = (~(((/* implicit */int) (!(((/* implicit */_Bool) -1886850269))))));
                var_15 += (-(((/* implicit */int) (short)-28619)));
                var_16 = ((/* implicit */short) ((((/* implicit */int) min(((short)-28941), ((short)28619)))) > (((/* implicit */int) (short)24768))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)24768)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 1640806104)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (short)-16222)))) : ((+(((/* implicit */int) arr_3 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_18 &= var_4;
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
}
