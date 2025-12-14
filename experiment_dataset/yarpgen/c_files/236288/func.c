/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236288
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
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */signed char) ((unsigned short) var_16));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_1 + 2] [i_0] [i_0])) - (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1 - 1])))) + ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_1 + 2])))))))));
                arr_8 [i_1] [i_1] = (!(((/* implicit */_Bool) arr_2 [i_0])));
                arr_9 [i_0] [i_1] = ((/* implicit */int) arr_0 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (((((+(-15LL))) == (((((/* implicit */_Bool) var_2)) ? (14LL) : (((/* implicit */long long int) 3390686681U)))))) || (((/* implicit */_Bool) var_9))));
    var_20 = ((/* implicit */long long int) var_5);
}
