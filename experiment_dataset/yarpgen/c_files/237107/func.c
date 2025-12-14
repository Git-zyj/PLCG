/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237107
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
    var_10 += ((/* implicit */int) var_2);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_11 = 18446744073709551615ULL;
        arr_2 [i_0] = ((/* implicit */unsigned int) 18446744073709551615ULL);
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) (unsigned char)177);
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (unsigned short)10788)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (signed char)79)))), (((int) arr_1 [2ULL] [2ULL])))))))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) -1099489606))));
    }
}
