/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241883
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
    var_20 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_7)) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (var_15)))))));
    var_21 = ((/* implicit */signed char) (-(var_8)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_22 |= ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) arr_0 [i_0 - 3])), (arr_1 [i_0 + 2])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((arr_1 [i_0 - 1]) - (((/* implicit */unsigned long long int) arr_0 [i_0 - 3])))), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) >= (((/* implicit */unsigned long long int) ((arr_0 [i_0]) << (((var_8) - (1346349203)))))))))));
    }
    var_23 = (!(((/* implicit */_Bool) var_4)));
    var_24 = ((/* implicit */long long int) (-(max((((/* implicit */int) var_12)), (((int) var_16))))));
}
