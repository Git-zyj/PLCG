/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52252
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
    var_15 = ((/* implicit */int) var_8);
    var_16 = ((/* implicit */unsigned long long int) var_5);
    var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) ((short) 0U))))))), (((max((((/* implicit */long long int) var_0)), (var_4))) >> (((var_10) - (4114788589U)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (max((var_1), (arr_3 [i_1] [8]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)226))))))) - (max((8U), (8U))));
                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) min((4294967287U), (((/* implicit */unsigned int) var_7))))) || (((/* implicit */_Bool) arr_0 [i_1])))))));
            }
        } 
    } 
}
