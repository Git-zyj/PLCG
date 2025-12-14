/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53934
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
    var_11 = ((/* implicit */int) max((3732948851U), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)2152)) == (((/* implicit */int) var_6))))) ^ (min((var_10), (((/* implicit */int) var_3)))))))));
    var_12 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-28611)), (var_8)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = var_8;
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) && ((_Bool)1)));
        var_14 = ((/* implicit */unsigned char) arr_1 [(short)6]);
    }
}
