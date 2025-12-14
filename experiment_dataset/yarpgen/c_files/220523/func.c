/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220523
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
    var_10 = ((/* implicit */unsigned char) (short)-18779);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) (~(min((1280404825059699036ULL), (((/* implicit */unsigned long long int) (short)18779))))));
                var_12 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])), (((((/* implicit */_Bool) 2836513481772969186ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (15610230591936582423ULL)))));
            }
        } 
    } 
}
