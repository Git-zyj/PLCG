/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44907
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_11 = (+(max((((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 - 1])), (arr_1 [i_0 - 2]))));
        var_12 &= ((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (max((((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))), (((/* implicit */unsigned int) arr_0 [i_0 - 2] [i_0 - 1]))))));
        var_13 *= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59668)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1]))))), (((unsigned int) (short)-8983)));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_2 [i_1 - 2])))));
        var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -7732770021854596713LL)) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    }
    var_15 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_10)), ((+(4286578708U))))), ((-((((_Bool)0) ? (8388589U) : (4286578689U)))))));
}
