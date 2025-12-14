/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246704
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
    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((var_6) + (var_8)));
        arr_5 [i_0] = ((/* implicit */signed char) ((var_12) % (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_10)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_9 [(_Bool)1] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (36028797018931200LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) * (((/* implicit */long long int) ((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
        arr_10 [i_1] = ((/* implicit */int) ((((((/* implicit */unsigned int) -377338564)) + (var_12))) * (((/* implicit */unsigned int) var_8))));
    }
    for (int i_2 = 1; i_2 < 24; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_1)))))))))))));
        var_16 = ((/* implicit */long long int) var_0);
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) -1825023904))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_10)))) & (var_6))) * (((var_0) << (((var_8) - (1893108405))))))))));
    }
}
