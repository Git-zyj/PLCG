/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45852
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
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) min((max((var_3), ((-(var_3))))), (min((((((/* implicit */int) arr_4 [i_0] [i_0])) / (((/* implicit */int) var_2)))), (((/* implicit */int) min((var_0), (var_13))))))));
                var_17 = ((/* implicit */short) (((+(3800555356U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 494411944U))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_14);
    var_19 = ((/* implicit */_Bool) (~(min((max((494411951U), (494411947U))), (((/* implicit */unsigned int) var_8))))));
    var_20 &= ((/* implicit */short) (((!(((/* implicit */_Bool) -150427271)))) ? (((/* implicit */unsigned int) var_5)) : (min((((((/* implicit */_Bool) 3800555356U)) ? (494411940U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_13)), (var_12))))))));
}
