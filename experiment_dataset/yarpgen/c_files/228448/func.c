/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228448
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
    var_17 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] = -1929392482;
                    var_18 = ((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-5)))))));
                    var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 715100678U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [2]))) : (var_10)))) ? (((/* implicit */long long int) min((var_4), (((/* implicit */int) var_6))))) : (min((((/* implicit */long long int) 3066967277U)), (2251799813668864LL)))));
                }
            } 
        } 
    } 
}
