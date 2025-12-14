/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49406
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
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_14) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-870))))) : (((/* implicit */int) (short)-23775))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned long long int) var_19)), (16779372781954831869ULL)))))));
    var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned long long int) 349849198105547765ULL))) ? (349849198105547765ULL) : (18096894875604003857ULL))), (((unsigned long long int) var_4))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_22 ^= var_0;
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_4 [21U] [i_1])) / (((/* implicit */int) arr_4 [i_0] [i_1])))), (((/* implicit */int) (short)32754)))))));
                }
            } 
        } 
    } 
}
