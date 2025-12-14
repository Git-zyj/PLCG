/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241045
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
    var_10 = ((/* implicit */int) max((max(((-(var_6))), (max((((/* implicit */unsigned int) (_Bool)0)), (1061448825U))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) ((unsigned short) var_8))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 *= (+((-((+(((/* implicit */int) var_1)))))));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((~(((((/* implicit */int) arr_0 [i_0])) & (-835360500))))) : (max((((/* implicit */int) arr_0 [i_0])), ((+(((/* implicit */int) (_Bool)0))))))));
                var_13 ^= (_Bool)0;
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (!((_Bool)0)));
            }
        } 
    } 
}
