/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248546
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5660359625466305104ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) && ((!((!(((/* implicit */_Bool) var_14)))))))))));
    var_19 = ((/* implicit */unsigned short) (signed char)16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 12929295333679299190ULL)) ? (((/* implicit */unsigned long long int) 2077705819U)) : (12929295333679299195ULL)));
                arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */int) (unsigned short)51749)) ^ (((/* implicit */int) (signed char)102)));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103)))));
                var_22 = ((/* implicit */short) max(((~(12929295333679299185ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-102)) / (var_12))) - (((((/* implicit */int) var_15)) << (((((/* implicit */int) (signed char)25)) - (17))))))))));
            }
        } 
    } 
}
