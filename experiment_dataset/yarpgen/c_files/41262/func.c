/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41262
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
    var_15 = (+((~(((0U) + (0U))))));
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) % (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) != (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4791041533341646328LL)) || (((/* implicit */_Bool) (unsigned short)127))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1 - 1] [i_1 - 1] = min((((/* implicit */unsigned long long int) arr_1 [i_0])), ((~(((unsigned long long int) (-9223372036854775807LL - 1LL))))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) min((var_8), (((/* implicit */unsigned long long int) var_5)))));
                }
            } 
        } 
    } 
}
