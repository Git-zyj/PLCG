/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195750
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
    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_5)) : (((var_2) << (((((/* implicit */int) var_10)) - (141)))))))) ? (min((((/* implicit */long long int) var_11)), (var_1))) : ((~(var_1)))));
    var_16 ^= ((/* implicit */int) ((signed char) var_7));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_1 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) max((-92416361), (((/* implicit */int) (unsigned short)21634))))))), (((/* implicit */unsigned long long int) ((signed char) ((short) arr_0 [i_0]))))));
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), ((-(((/* implicit */int) var_11)))))))));
        var_18 -= ((/* implicit */unsigned int) min((arr_0 [2LL]), (((/* implicit */long long int) ((unsigned char) arr_2 [i_0 - 1])))));
    }
}
