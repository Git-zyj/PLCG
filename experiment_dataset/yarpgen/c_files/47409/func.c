/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47409
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
    var_17 = ((/* implicit */int) 5763133036571732214LL);
    var_18 = ((/* implicit */_Bool) var_7);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((9223372036854775807LL) ^ (((/* implicit */long long int) var_4)))) <= (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (0U))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (~(arr_0 [i_0])));
        var_20 = ((/* implicit */unsigned short) (~(arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0 - 1]);
    }
}
