/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231031
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
    var_18 = ((/* implicit */unsigned char) ((int) var_2));
    var_19 = ((/* implicit */unsigned short) var_16);
    var_20 = ((/* implicit */unsigned long long int) (((-(3604186393547202561LL))) ^ (((/* implicit */long long int) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)2290))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)29))));
        var_22 ^= ((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-13757)))), (((/* implicit */int) ((_Bool) ((arr_2 [i_0]) | (arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_8);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned short)38232)))))) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (var_4)));
        var_24 ^= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_1 [i_1])))));
        var_25 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)-2308)), (arr_2 [(_Bool)1])));
        var_26 = var_10;
        var_27 ^= ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) (unsigned char)15)))), (((((/* implicit */_Bool) (signed char)-78)) || (((/* implicit */_Bool) (short)-806))))));
    }
}
