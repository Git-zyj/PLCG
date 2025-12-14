/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202861
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
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)19307))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] = min((((/* implicit */int) var_3)), (min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) (unsigned short)24)))));
        var_20 = ((((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)65534)));
        arr_5 [i_0] = ((/* implicit */unsigned char) 223417695);
        var_21 = ((/* implicit */unsigned long long int) (!(((arr_2 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29699)))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_5);
}
