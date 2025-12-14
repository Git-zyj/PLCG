/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245676
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) 10821021843647217469ULL);
        arr_4 [i_0] [14] = ((/* implicit */short) arr_0 [i_0]);
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((min(((-(arr_2 [16LL]))), ((-(18446744073709551593ULL))))), (((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (22ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0])))))))));
    }
    var_18 = ((/* implicit */unsigned char) 10821021843647217469ULL);
}
