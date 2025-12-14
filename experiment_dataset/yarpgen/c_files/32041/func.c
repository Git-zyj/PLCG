/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32041
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
    var_13 = ((/* implicit */int) 0LL);
    var_14 -= ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_12)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0 - 2]))))) ? (((((/* implicit */_Bool) 2083294151U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))))) * (((/* implicit */unsigned long long int) var_8))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0 - 2] [i_0]);
        var_16 = ((/* implicit */short) (((+(arr_1 [i_0] [i_0]))) % (arr_1 [i_0 + 1] [i_0 + 1])));
    }
}
