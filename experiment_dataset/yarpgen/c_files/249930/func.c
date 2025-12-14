/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249930
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
    var_14 = ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned int) ((short) (unsigned char)54))), (((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (5ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_0 [i_0])), (((short) arr_1 [i_0] [i_0])))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)224)) ? (-730240550) : (850437006))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */int) arr_3 [i_1] [i_1]);
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_3))) & (((/* implicit */int) var_13))));
    }
    var_17 = ((/* implicit */_Bool) var_5);
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_0))));
}
