/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194576
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
    var_11 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)24)), (var_2)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_4 [i_0 - 1] = (~(min((1720195755U), (((/* implicit */unsigned int) 1397332859)))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1481471463) : (1481471463)))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -1481471463)) : (var_8)))));
        arr_5 [i_0] |= (~(((((/* implicit */int) var_3)) + (1615111994))));
    }
    var_13 = ((/* implicit */unsigned short) (_Bool)1);
}
