/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239649
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) var_0);
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) -5843315254997892905LL);
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (-(min((((/* implicit */unsigned int) (_Bool)1)), (2530923784U))))))));
                var_17 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)0)), ((signed char)(-127 - 1))));
                arr_7 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((/* implicit */int) var_14)), ((+(((/* implicit */int) ((unsigned short) (unsigned short)58156))))))))));
    var_19 = ((/* implicit */_Bool) -2041589739);
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_6))))))))));
}
