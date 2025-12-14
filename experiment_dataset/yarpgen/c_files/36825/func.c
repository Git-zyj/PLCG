/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36825
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
    var_15 = min((min((((/* implicit */unsigned char) ((var_7) == (((/* implicit */int) var_8))))), (var_13))), (((/* implicit */unsigned char) var_8)));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) * (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_11))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)64718))))))))));
    var_17 -= ((/* implicit */short) var_14);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) max(((short)-14135), (((/* implicit */short) arr_2 [i_0] [i_0]))))))))));
                var_18 = ((/* implicit */long long int) max((max(((unsigned char)35), ((unsigned char)48))), (max((arr_2 [i_0] [i_0]), (var_2)))));
            }
        } 
    } 
}
