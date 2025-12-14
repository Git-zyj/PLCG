/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47782
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (~(((((((/* implicit */_Bool) var_0)) ? (-1274586553) : (((/* implicit */int) (unsigned short)10866)))) + (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_0]))))))));
        arr_4 [i_0] = ((arr_1 [i_0] [i_0]) >= (arr_1 [i_0] [i_0]));
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)10859)))))));
    }
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10859))))) ? (((var_13) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967288U)) ? (1274586555) : (((/* implicit */int) (short)8191))))))) == (((/* implicit */long long int) var_16))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((((/* implicit */int) var_4)), (((var_13) ? (((/* implicit */int) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) var_17)))))) : (((/* implicit */int) var_13)))))))));
    var_22 = ((/* implicit */_Bool) var_15);
    var_23 = ((/* implicit */short) var_2);
}
