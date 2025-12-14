/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244135
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((1071300221) / (((/* implicit */int) (unsigned char)8)));
        var_10 = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_11 -= ((/* implicit */unsigned char) ((-7924059704393012133LL) / (((/* implicit */long long int) arr_0 [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)0))));
    }
    var_12 = ((/* implicit */int) var_3);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((signed char) (~((-(((/* implicit */int) (_Bool)0))))))))));
}
