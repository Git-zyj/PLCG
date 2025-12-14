/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244353
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (((long long int) var_6)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_0))));
                    arr_8 [i_0] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_2])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))), (9223372036854775807LL))), (((/* implicit */long long int) var_1))));
    var_13 = ((/* implicit */unsigned long long int) 536870911LL);
}
