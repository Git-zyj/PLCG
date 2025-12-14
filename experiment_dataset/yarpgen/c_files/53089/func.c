/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53089
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
    var_16 |= -1595664106;
    var_17 = ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        var_18 |= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        var_19 = ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) * (var_2))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)101)));
    }
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 16; i_1 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((long long int) (signed char)106)) | (((long long int) arr_4 [i_1] [i_1])))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_7))));
    }
    var_22 = ((/* implicit */int) var_15);
}
