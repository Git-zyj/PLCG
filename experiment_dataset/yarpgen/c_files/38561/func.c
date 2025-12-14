/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38561
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [2]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))) || (((/* implicit */_Bool) arr_2 [i_0]))));
        var_14 = ((/* implicit */unsigned char) (+(((int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4)))))));
        arr_4 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_5 [i_0] [i_0] = ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (-926847311)))), (var_10))) : (((((/* implicit */unsigned long long int) arr_2 [i_0])) + (min((((/* implicit */unsigned long long int) var_7)), (var_10))))));
    }
    var_15 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 33554400)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2147483646) == (((/* implicit */int) (_Bool)0)))))) : (var_5)))));
    var_16 = ((/* implicit */unsigned int) max((0LL), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_8))))));
    var_17 = ((/* implicit */short) (~(-4236176972957822675LL)));
}
