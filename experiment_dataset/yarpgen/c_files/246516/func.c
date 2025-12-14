/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246516
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
    var_14 = ((((/* implicit */_Bool) max((var_13), (var_5)))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) -2003775011394014551LL)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (short)17)))) : (var_4)))));
    var_15 = ((/* implicit */unsigned long long int) var_9);
    var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)203))))), (((49719491U) & (((/* implicit */unsigned int) -535368367))))))) ? (var_12) : (((/* implicit */int) ((((/* implicit */_Bool) (~(67108863)))) && (((/* implicit */_Bool) var_11)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-32)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 0)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                arr_4 [(signed char)15] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)14)), (-10))))));
            }
        } 
    } 
}
