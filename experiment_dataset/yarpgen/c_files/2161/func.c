/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2161
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
    var_18 -= ((/* implicit */short) var_0);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) (short)-30870))))) && (((_Bool) var_2))))) : (((/* implicit */int) var_16))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)17027))) ? (var_13) : (min((-6850555106985405119LL), (((/* implicit */long long int) -9))))))) && (((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_17))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) min((((3030528359930090726LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) min((((unsigned int) var_6)), (((/* implicit */unsigned int) arr_1 [i_0 + 1])))))));
        var_22 = ((/* implicit */short) (~((~(arr_0 [i_0 + 2])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1 + 2] &= ((/* implicit */_Bool) arr_3 [i_1 + 1]);
        var_23 *= ((/* implicit */_Bool) ((arr_3 [i_1 + 1]) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_3 [0])))));
        arr_5 [i_1 - 1] = ((/* implicit */unsigned char) ((short) 107536635U));
    }
}
