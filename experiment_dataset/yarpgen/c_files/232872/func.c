/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232872
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (arr_1 [i_0])));
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 2763207679U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (2763207679U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0])))))) << (((((/* implicit */int) ((signed char) arr_1 [i_0]))) + (122)))));
        var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_14 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) >> (max((((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */int) arr_1 [i_0]))))), (min((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0]))))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) >> (((max((((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */int) arr_1 [i_0]))))), (min((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0])))))) - (139))))));
    }
    var_15 = ((/* implicit */long long int) var_8);
}
