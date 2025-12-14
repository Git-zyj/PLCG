/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217583
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
    var_11 &= ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)6)), (((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (unsigned short)53272)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned char)0)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0 + 1] [i_0 - 1] = ((/* implicit */signed char) (short)32766);
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) : (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) * (((/* implicit */int) (unsigned short)12264))))));
    }
    var_13 = ((/* implicit */long long int) 9722802416162135501ULL);
    var_14 = (~(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18))) : (var_1))), (((/* implicit */unsigned int) (~(-678499924)))))));
}
