/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241355
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -8474384114959701185LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-7126)))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8474384114959701183LL)) || (((/* implicit */_Bool) 8474384114959701185LL))));
                    var_22 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) var_8)) : (1700670488U)))), (((long long int) arr_1 [i_1 - 1] [i_2 + 3]))));
                }
            } 
        } 
    } 
}
