/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226164
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) ((_Bool) 0U)))) : (((/* implicit */int) ((signed char) (signed char)51)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */unsigned int) ((signed char) arr_1 [i_1 - 2] [3U]));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-58)), (arr_3 [i_0] [i_0] [i_1]))))));
                arr_5 [i_0] [i_1 + 2] [(short)9] = var_7;
                arr_6 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2965432449U))));
            }
        } 
    } 
}
