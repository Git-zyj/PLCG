/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24016
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_10 = ((unsigned char) (~(var_2)));
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)117))))) ? (((((((/* implicit */int) (unsigned char)96)) >> (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0] [(unsigned char)5]))))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_1] [3U]))));
                var_12 += max((((/* implicit */unsigned int) ((arr_2 [i_0] [i_1] [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_1 - 2] [i_0 + 1]))))), (4001786850U));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((var_5) ? (((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2))))))));
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
    var_15 = ((/* implicit */_Bool) var_7);
}
