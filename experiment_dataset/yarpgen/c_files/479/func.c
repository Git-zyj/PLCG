/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/479
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
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)89))))), ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 69787961U)))))))));
        arr_5 [i_0 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))));
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)66)) && ((_Bool)1))))) * (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (7535349017821746931ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_11))))))));
}
