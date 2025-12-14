/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243430
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((4268113024775169203ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))))));
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((unsigned long long int) var_0)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_5);
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max(((~(((18446744073709551610ULL) ^ (arr_0 [i_0 - 1] [i_0]))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)58743))))), (arr_0 [i_0 + 1] [i_0 + 1]))))))));
    }
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) min((var_11), (var_11)))));
}
