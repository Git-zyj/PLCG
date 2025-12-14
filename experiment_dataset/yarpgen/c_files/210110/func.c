/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210110
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_14)), (min((3940649673949184ULL), (((/* implicit */unsigned long long int) ((_Bool) var_2)))))));
                var_17 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_1 [10U])) * (3940649673949184ULL))) ^ (((/* implicit */unsigned long long int) arr_2 [9U]))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_1])))) >= (arr_5 [i_1])));
            }
        } 
    } 
}
