/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215890
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) var_1);
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [6LL])) ? (((/* implicit */int) ((arr_0 [i_0]) <= (arr_0 [i_0])))) : (((((/* implicit */int) (signed char)65)) / ((~(arr_0 [i_0])))))));
        var_18 &= ((/* implicit */long long int) (+(max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((long long int) var_9))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (9223372036854775807LL) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (var_12))))) : (((/* implicit */long long int) arr_0 [i_0])));
        arr_3 [i_0] [i_0] = var_2;
    }
    var_19 *= ((/* implicit */unsigned char) ((signed char) var_8));
}
