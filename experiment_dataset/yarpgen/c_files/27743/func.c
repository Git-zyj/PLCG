/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27743
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
    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((unsigned long long int) (unsigned char)186)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) -2115315650)) : (var_7)));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 66768001U)) | (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_17)))) ? (((/* implicit */long long int) var_8)) : (var_2)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        var_22 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) 2115315650)) & (arr_0 [i_0] [i_0]))));
        var_23 |= ((/* implicit */unsigned int) arr_1 [i_0 + 3]);
    }
}
