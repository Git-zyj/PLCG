/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230694
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
    var_10 = ((/* implicit */long long int) var_6);
    var_11 = ((/* implicit */unsigned short) min((-9204642125876497349LL), (8541911976181814523LL)));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3793))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_13 *= ((/* implicit */short) max((((/* implicit */int) (short)22863)), (var_5)));
        var_14 = ((/* implicit */unsigned long long int) var_0);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) 15U);
    }
    for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        arr_7 [18] &= ((/* implicit */int) ((var_8) > (((/* implicit */long long int) 1030034164))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((var_8) << (((/* implicit */int) (!((_Bool)1))))));
        var_15 = ((/* implicit */unsigned char) var_7);
    }
}
