/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37209
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
    var_10 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 418561416)) ? (((/* implicit */unsigned long long int) 418561406)) : (796896084181142247ULL))) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_7)))))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_11 = ((/* implicit */unsigned int) var_1);
    var_12 = ((/* implicit */signed char) ((796896084181142236ULL) % (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) arr_2 [i_0]);
        var_14 = ((/* implicit */unsigned int) var_8);
    }
    var_15 = ((/* implicit */short) ((long long int) ((((/* implicit */int) ((signed char) 9223372036854775791LL))) / (((/* implicit */int) min((var_1), ((unsigned short)49322)))))));
}
