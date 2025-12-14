/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199684
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
    var_13 = ((/* implicit */unsigned short) (((_Bool)1) ? (-8142288735737898257LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    var_14 ^= ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) 7890154782848676683LL);
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) var_1)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))))))))));
            }
        } 
    } 
    var_16 ^= ((/* implicit */_Bool) var_2);
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3))) >= (4067912471U))))));
}
