/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224296
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((((((/* implicit */int) arr_1 [i_1] [i_0])) + (2147483647))) << (((((/* implicit */int) (short)25093)) - (25093))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (18446744073709551615ULL))))))) ? (((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(4905871134999953659LL)))))))));
                var_11 = ((/* implicit */unsigned char) (+(0ULL)));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_10);
}
