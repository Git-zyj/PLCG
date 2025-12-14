/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54023
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
    var_14 = max((17421090870057655925ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_10) : (-13)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_4)) * (((/* implicit */int) var_1))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_3))));
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
    }
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(max((((unsigned int) var_0)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4187422321U))))))))));
    var_19 = ((/* implicit */unsigned char) var_8);
}
