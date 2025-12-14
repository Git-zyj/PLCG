/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203371
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
    var_10 *= ((/* implicit */int) ((_Bool) var_6));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) arr_3 [i_0] [i_1]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
            }
        } 
    } 
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_7)) / (var_2)))))) ? (((/* implicit */int) ((((((/* implicit */int) var_4)) & (((/* implicit */int) var_6)))) > (((/* implicit */int) var_4))))) : (var_2))))));
}
