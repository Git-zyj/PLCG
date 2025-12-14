/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52622
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 2])))))));
                    var_17 = ((/* implicit */signed char) max((10285543287499674067ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max(((unsigned char)126), (((/* implicit */unsigned char) (signed char)69))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */unsigned long long int) 6601487441298437816LL)) : (((((/* implicit */_Bool) 10285543287499674074ULL)) ? (13061274389059355174ULL) : (10285543287499674053ULL))))), (((/* implicit */unsigned long long int) var_7))));
}
