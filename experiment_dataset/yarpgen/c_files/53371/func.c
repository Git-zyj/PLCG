/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53371
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) < (var_3))))))), (-1140212395504660398LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] |= ((/* implicit */signed char) (unsigned char)126);
                var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 - 1])) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_1 [i_1 + 1]))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))))))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */signed char) arr_3 [i_0] [i_1] [10ULL]);
                arr_6 [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 3] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 3] [i_1 - 1])) : (((/* implicit */int) (unsigned short)50075))))));
            }
        } 
    } 
    var_19 = (+(((((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) - (max((((/* implicit */long long int) var_6)), (var_5))))));
}
