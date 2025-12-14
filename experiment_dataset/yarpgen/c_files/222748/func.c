/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222748
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
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), ((+((+(((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) arr_2 [i_0])) * (0LL))));
    }
    for (short i_1 = 4; i_1 < 20; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) arr_5 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (4LL) : (-3LL))))));
    var_23 = ((/* implicit */signed char) (-(0LL)));
}
