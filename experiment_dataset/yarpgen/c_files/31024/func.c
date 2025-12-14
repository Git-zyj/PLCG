/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31024
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1 + 2] [i_0])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12)))) : (((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_1]))))))));
                arr_7 [i_0] [i_0] [i_1 - 1] = ((/* implicit */signed char) max((0U), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((4294967291U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
