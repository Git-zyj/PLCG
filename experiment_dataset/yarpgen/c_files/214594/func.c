/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214594
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
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 1051866760U)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (signed char)-104)))) / (-654830268))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = max((max((max((((/* implicit */unsigned long long int) var_1)), (10088323021181267202ULL))), (8985984975886725513ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1058288337)) != (10605801094956074532ULL)))));
                    var_13 += 524287ULL;
                }
            } 
        } 
    } 
}
