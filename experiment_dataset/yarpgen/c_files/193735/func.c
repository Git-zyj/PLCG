/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193735
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
    var_13 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-15577))))) && (((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_10)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] |= ((/* implicit */int) var_5);
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_15 |= (~((~(((/* implicit */int) var_2)))));
        arr_6 [i_1] [(unsigned short)4] |= ((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_0))))));
        var_16 *= ((/* implicit */unsigned char) var_8);
    }
    var_17 = ((/* implicit */short) var_12);
    var_18 |= ((/* implicit */unsigned long long int) var_9);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)36))))))) : (((/* implicit */int) var_2))));
}
