/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221295
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)62638)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)26046)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))))))));
                arr_5 [i_1] [i_1] = (-(min((845581081U), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) (+((~(((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */_Bool) (+(max((((/* implicit */int) min(((_Bool)0), (var_16)))), (min((((/* implicit */int) (unsigned short)26067)), (53935056)))))));
}
