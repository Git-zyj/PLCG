/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53266
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
    for (signed char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_1 [2LL])), (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) : (1125899904745472ULL)));
                var_17 += ((/* implicit */int) arr_4 [22] [22] [i_1]);
            }
        } 
    } 
    var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) 917772215)), (var_8)))))) ? ((~(((int) -900048787356665330LL)))) : (((/* implicit */int) ((signed char) ((unsigned int) var_2))))));
    var_19 = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_15))))))))));
}
