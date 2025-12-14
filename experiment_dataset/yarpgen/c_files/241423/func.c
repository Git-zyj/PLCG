/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241423
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
    var_17 = var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25622)) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -955677022)))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (18446744073709551615ULL)))));
        arr_2 [i_0] = ((/* implicit */_Bool) 26ULL);
        arr_3 [i_0] = ((/* implicit */_Bool) (+(263857205U)));
    }
    var_19 = ((/* implicit */unsigned long long int) var_8);
}
