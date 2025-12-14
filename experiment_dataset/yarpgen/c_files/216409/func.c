/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216409
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0 + 2] [i_0 - 1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0 + 3])) % (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 3]))) ^ (var_9)))));
        arr_3 [i_0 + 2] = max((6081486766513385489LL), (((/* implicit */long long int) (_Bool)0)));
        arr_4 [i_0] = ((/* implicit */long long int) ((18446744073709551611ULL) / (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 3] [(unsigned char)6])))))))));
    }
    var_10 = ((/* implicit */_Bool) ((-1LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
}
