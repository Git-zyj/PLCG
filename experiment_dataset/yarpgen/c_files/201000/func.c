/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201000
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
    var_14 = ((/* implicit */unsigned short) ((var_5) ^ (min((var_5), (((((var_5) + (9223372036854775807LL))) >> (((8149821204913815438ULL) - (8149821204913815425ULL)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (signed char)5);
                var_16 = (!(((((/* implicit */_Bool) (signed char)110)) || (((/* implicit */_Bool) max((18446744073709551615ULL), (16307133777996392835ULL)))))));
            }
        } 
    } 
}
