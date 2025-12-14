/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52474
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
    var_15 *= ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [5U]);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3179091706U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) >= (min((((((/* implicit */_Bool) 168192389)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 115777015U)))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))));
    }
}
