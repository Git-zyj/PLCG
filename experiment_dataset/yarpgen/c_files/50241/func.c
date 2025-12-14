/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50241
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
    var_19 = ((/* implicit */short) var_1);
    var_20 -= ((/* implicit */long long int) ((((/* implicit */int) (short)-3186)) - (((/* implicit */int) ((((/* implicit */_Bool) ((short) (short)-1))) && ((!(((/* implicit */_Bool) var_14)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */int) arr_1 [i_0]);
        var_21 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) - ((+(((var_17) + (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
        arr_3 [i_0] = min((var_7), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), (arr_1 [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) var_4);
        var_23 = var_18;
        var_24 += ((/* implicit */short) ((arr_5 [i_1] [i_1]) / (((/* implicit */int) (short)10))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (unsigned char)236);
    }
}
