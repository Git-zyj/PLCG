/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239299
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
    var_12 = ((/* implicit */unsigned long long int) ((var_7) | (((/* implicit */unsigned int) ((((var_9) & (((/* implicit */int) var_0)))) << ((((~(var_6))) - (13496353199343200886ULL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) -1874009434))), (((16021133604149236052ULL) + (9223372036854775808ULL)))))) ? ((-(arr_2 [i_0 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((9223372036854775808ULL) + (((/* implicit */unsigned long long int) arr_0 [i_0 - 3] [i_0 - 3]))))))))));
                arr_4 [i_1] = var_8;
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_2);
    var_15 = (((~(245869570U))) - (min((var_1), (((/* implicit */unsigned int) (_Bool)0)))));
}
