/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233208
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
    var_20 = ((/* implicit */_Bool) 0U);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-24))));
        var_22 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (3449816445250178984LL))), (((long long int) 3449816445250178984LL))))) ? ((-(((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) (unsigned char)250))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_5))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_24 = ((/* implicit */long long int) (_Bool)0);
        var_25 = ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned long long int) 3449816445250178984LL)), (12837744143245816189ULL))), ((~(var_14))))), (((/* implicit */unsigned long long int) (((-2147483647 - 1)) & (((/* implicit */int) arr_5 [i_1])))))));
    }
    var_26 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (3449816445250178984LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551602ULL))))));
}
