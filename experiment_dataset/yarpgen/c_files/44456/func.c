/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44456
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
    var_20 &= ((/* implicit */int) max((max((((/* implicit */unsigned int) var_15)), ((~(4027321119U))))), (((/* implicit */unsigned int) ((int) var_14)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) 2416372449U))));
        var_22 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_4 [i_0] = arr_3 [i_0];
        arr_5 [i_0] = ((/* implicit */unsigned short) ((signed char) min((((unsigned int) 9223372036854775790LL)), (4083155521U))));
        var_23 &= ((/* implicit */signed char) 1916758996U);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_7 [i_1] [i_1])))));
        var_25 -= ((/* implicit */_Bool) ((unsigned int) arr_6 [i_1]));
        var_26 = ((/* implicit */_Bool) arr_0 [i_1]);
    }
}
