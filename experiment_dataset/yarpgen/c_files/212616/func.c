/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212616
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
    var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */_Bool) min(((unsigned char)99), (((/* implicit */unsigned char) (_Bool)1))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) arr_3 [i_0])))))))) ? ((~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_4)))))) : ((-(((/* implicit */int) arr_1 [i_1] [i_1])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (+(max(((-(((/* implicit */int) (unsigned char)88)))), (((/* implicit */int) min((var_7), (var_8))))))));
    var_21 = ((/* implicit */_Bool) ((((min((var_10), ((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) max(((_Bool)1), (var_15)))))) / ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)212)))) / (((/* implicit */int) (_Bool)1))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (min((((/* implicit */int) var_6)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))))));
}
