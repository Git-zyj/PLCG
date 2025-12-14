/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28559
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)64009)))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned char) arr_1 [7LL] [i_0]))));
        arr_2 [(unsigned char)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 68652367872LL)) ? (((((/* implicit */_Bool) ((unsigned char) -68652367872LL))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)17931)) : (1201186302))) : (((int) (signed char)(-127 - 1))))) : (-950509689)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(signed char)6])) ? ((+(arr_3 [(unsigned short)15]))) : (((/* implicit */long long int) -2044347993))));
        var_16 = ((/* implicit */int) arr_4 [(unsigned char)0]);
        arr_7 [i_1] = ((/* implicit */signed char) arr_1 [i_1] [i_1]);
    }
    var_17 = ((/* implicit */int) var_2);
    var_18 &= ((/* implicit */unsigned char) var_14);
}
