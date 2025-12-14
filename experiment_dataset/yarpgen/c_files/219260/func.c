/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219260
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (min((((((/* implicit */int) var_0)) - (var_4))), (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_5))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)42018)), (2463179290919798298ULL)))) || (((/* implicit */_Bool) min((var_8), (((/* implicit */short) (_Bool)1))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) 3LL);
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned char)250);
        arr_4 [i_0] = ((/* implicit */long long int) var_1);
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0]))));
    }
}
