/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235244
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
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) (~(max((arr_0 [i_0]), (arr_0 [i_0])))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127)));
                var_14 *= ((/* implicit */short) ((unsigned long long int) ((var_9) <= (var_9))));
                arr_6 [i_0] &= ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 524288U)), (17592181850112LL)))) : (((var_8) >> (((arr_2 [i_0]) - (1488080509))))))) > (((/* implicit */unsigned long long int) 4294967294U))));
                var_15 ^= ((/* implicit */short) (~((((_Bool)1) ? (var_6) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) 424172304U))));
}
