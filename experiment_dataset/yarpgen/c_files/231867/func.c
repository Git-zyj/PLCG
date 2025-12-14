/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231867
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0 + 3] &= max((arr_1 [i_0 - 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3]))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_6)))) ? (-3824430914752445783LL) : (((((arr_1 [i_0 + 1]) + (9223372036854775807LL))) << (((var_8) - (1901678706)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_10 [i_1] = ((/* implicit */long long int) var_11);
        var_14 |= ((/* implicit */unsigned short) (+(arr_9 [(short)3] [i_1])));
        arr_11 [i_1] = ((/* implicit */int) ((unsigned char) var_10));
    }
    var_15 = var_6;
    var_16 = ((/* implicit */unsigned long long int) ((unsigned char) (((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13))) != (((/* implicit */unsigned int) (~(((/* implicit */int) (short)13))))))));
}
