/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198028
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_5)) - (18596)))))) ? (((/* implicit */int) ((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_15))))) < ((~(((/* implicit */int) var_1))))))) : (((/* implicit */int) var_10)))))));
    var_17 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((unsigned short) 1687670108214396513LL))))), (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_11);
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) arr_4 [i_1] [(signed char)2]))))));
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_4 [i_1] [i_1 + 1]) : (1687670108214396513LL)))) ? (min((-1687670108214396504LL), (((/* implicit */long long int) 8388607)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)2])) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1])))))));
    }
}
