/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34071
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
    var_14 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967293U))));
    var_15 ^= ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 |= ((/* implicit */unsigned char) arr_0 [i_0]);
        var_17 *= ((/* implicit */unsigned short) (-(arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (unsigned short i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        var_18 *= ((/* implicit */_Bool) (-((-(4294967293U)))));
        arr_7 [i_1] &= ((/* implicit */unsigned short) (-(((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17931)) ? (5854687609537059116ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
        var_19 = ((/* implicit */unsigned char) (~(((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))) : ((~(6U)))))));
    }
}
