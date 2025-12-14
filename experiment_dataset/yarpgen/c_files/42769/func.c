/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42769
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)));
        var_14 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [4])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15308))) + (var_10)))))) ? ((((((-(((/* implicit */int) (short)15307)))) + (2147483647))) >> ((+(((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) ((short) ((var_11) ? (((/* implicit */int) (short)0)) : (var_7))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (576460717943685120LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_4)));
        var_16 = ((/* implicit */unsigned short) max((max((3048044554591092282ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_3)))))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) var_1);
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((arr_1 [i_1]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))));
        arr_4 [i_1] = ((/* implicit */_Bool) ((((1459670019245992044LL) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1] [i_1])))))));
    }
    var_19 *= ((/* implicit */short) (+(((((/* implicit */_Bool) var_12)) ? (((var_9) ? (576460717943685117LL) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    var_20 = ((/* implicit */unsigned short) ((short) (unsigned char)0));
}
