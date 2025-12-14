/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3552
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
    var_16 = (~(((((/* implicit */_Bool) 65535ULL)) ? (((/* implicit */unsigned long long int) 3187202536U)) : (5641585966449757774ULL))));
    var_17 = ((/* implicit */unsigned short) ((unsigned char) (+((+(1107764759U))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 1]))))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))) | (var_9)))))));
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    arr_8 [i_2] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3187202559U))))) % (((/* implicit */int) var_14)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned int) (!((_Bool)1)))), ((+(1107764759U))))));
}
