/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29668
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_12 = (+(((/* implicit */int) (unsigned char)137)));
        var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))));
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50041))) : (17186205721546302176ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
