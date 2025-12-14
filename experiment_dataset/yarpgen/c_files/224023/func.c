/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224023
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
    var_10 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8))))), (max((5778994246452539428ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_11 &= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_12 -= var_2;
        arr_2 [0U] [i_0 + 1] &= ((/* implicit */short) var_1);
    }
}
