/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48949
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
    var_10 = ((/* implicit */int) (signed char)-64);
    var_11 *= ((/* implicit */unsigned int) -2817050715697358252LL);
    var_12 = ((/* implicit */short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)-100))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_2 [3ULL] [i_0 + 2] = ((/* implicit */short) (unsigned short)65535);
        var_13 *= ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) 7379054255823489996LL)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
    {
        var_14 *= ((/* implicit */int) ((long long int) ((unsigned int) (+(0)))));
        var_15 += ((/* implicit */unsigned char) ((short) ((signed char) 1520436887)));
        var_16 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_4 [i_1 - 1]))))));
    }
}
