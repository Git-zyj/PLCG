/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195261
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((int) (~(min((((/* implicit */unsigned long long int) var_7)), (var_10))))));
                    var_15 -= 4795061796982432099ULL;
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_8);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned long long int) var_8)), (((((/* implicit */_Bool) 1267626689303822602ULL)) ? (19ULL) : (((/* implicit */unsigned long long int) var_4))))))) ? (((((/* implicit */unsigned long long int) (-(var_4)))) - (var_10))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) min(((short)23032), (((/* implicit */short) (_Bool)0))))), (var_12))))));
}
