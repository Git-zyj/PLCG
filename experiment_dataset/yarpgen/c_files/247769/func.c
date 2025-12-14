/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247769
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) arr_2 [i_1]);
                arr_5 [i_0] [i_1] = min((((/* implicit */unsigned int) (_Bool)1)), (1938262115U));
                var_15 = ((((/* implicit */_Bool) ((10351930860729298080ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))) ? ((+(max((var_7), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
                var_16 = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((unsigned char) (unsigned char)255))), (((var_4) & (((/* implicit */int) (_Bool)1)))))) & ((~(((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_4);
    var_18 = ((/* implicit */unsigned int) var_11);
}
