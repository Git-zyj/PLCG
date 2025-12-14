/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213274
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((short) (short)-32760));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((max((arr_0 [i_0]), (arr_0 [i_0]))) << (((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) - (24883)))));
        var_21 += arr_3 [i_0];
        arr_6 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (min((((/* implicit */unsigned long long int) arr_2 [(unsigned char)16] [18LL])), (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) + (((/* implicit */int) var_18)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [(short)16] [(short)16]), (((/* implicit */unsigned char) var_9)))))) + (((arr_0 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) + (arr_0 [i_1])));
        arr_11 [i_1] [i_1] = ((/* implicit */long long int) ((arr_8 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_1]))))));
        var_23 = ((/* implicit */unsigned int) var_18);
    }
    var_24 = ((/* implicit */unsigned long long int) var_18);
}
