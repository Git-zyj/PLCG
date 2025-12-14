/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200926
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((-1304933502), (((/* implicit */int) (unsigned short)31746))))), (var_6)))) ? (-1304933506) : (min((((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_15)))), (((/* implicit */int) (unsigned short)58574))))));
    var_19 = ((/* implicit */_Bool) var_17);
    var_20 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) 117440512U);
        var_22 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
}
