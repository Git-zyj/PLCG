/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37232
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
    var_17 *= ((/* implicit */unsigned short) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)146)) | (((/* implicit */int) (signed char)99))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (331593501U)));
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    var_21 = ((/* implicit */int) ((-1LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
}
