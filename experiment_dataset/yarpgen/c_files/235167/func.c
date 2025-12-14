/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235167
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
    var_18 &= ((/* implicit */_Bool) (unsigned char)206);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)207))))) && (min((max(((_Bool)1), ((_Bool)1))), ((!(((/* implicit */_Bool) var_0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */short) (+(((/* implicit */int) ((890386790) < (((((/* implicit */int) (unsigned short)24)) >> (4ULL))))))));
                var_21 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_10)))) : (((((((/* implicit */int) var_14)) + (2147483647))) >> (((4192256) - (4192230)))))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_0])))));
            }
        } 
    } 
    var_22 -= ((/* implicit */short) (unsigned short)25106);
}
