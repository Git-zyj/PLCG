/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217573
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
    var_14 &= ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) 1314020881239614480LL);
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (1314020881239614480LL) : (var_11)));
    }
    for (unsigned int i_1 = 4; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_17 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (!(arr_3 [i_1])))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+((-(((arr_0 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-12857))))))))))));
    }
    for (unsigned int i_2 = 4; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_19 ^= (~(-1314020881239614497LL));
        var_20 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_2])))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2]))))))))));
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2] [i_2]))))))))));
    }
    var_22 = ((/* implicit */short) (+((+(1314020881239614480LL)))));
}
