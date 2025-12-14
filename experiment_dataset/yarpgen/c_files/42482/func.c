/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42482
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
    var_17 = ((/* implicit */signed char) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))));
        arr_2 [(unsigned char)0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_1 [i_0 - 2])))) > (((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 0)) ? (503377934U) : (((/* implicit */unsigned int) arr_4 [i_1] [i_1 - 2]))))));
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_1] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) > (arr_3 [i_1 - 1] [(_Bool)1])))))))));
    }
    var_20 = ((/* implicit */short) var_8);
}
