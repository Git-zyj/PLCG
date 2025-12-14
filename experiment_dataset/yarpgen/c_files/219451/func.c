/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219451
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) arr_2 [6]);
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) >> (((/* implicit */int) ((unsigned char) (short)30720)))))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(2097136)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) ((signed char) var_0)))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) var_1);
        arr_8 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2097136))));
    }
    var_16 = ((/* implicit */unsigned char) ((signed char) var_8));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_8))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_3))));
}
