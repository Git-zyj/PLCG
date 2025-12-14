/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199425
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
    var_11 = (+(((/* implicit */int) var_1)));
    var_12 = var_2;
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */short) var_2);
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_4 [(unsigned short)10] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_9)), (((unsigned short) ((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_1 [i_0])) + (16961))))))));
    }
}
