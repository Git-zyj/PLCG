/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244767
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) arr_2 [i_0] [(short)10]);
        var_21 &= ((/* implicit */short) ((unsigned long long int) ((int) ((var_1) / (arr_0 [14LL] [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_1] [i_1]), (arr_5 [18ULL] [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51409))) : (3552125716U)))));
        var_23 = ((/* implicit */unsigned long long int) (!(((((((/* implicit */int) var_0)) * (((/* implicit */int) var_12)))) < (((/* implicit */int) arr_2 [i_1] [i_1]))))));
    }
    var_24 = ((/* implicit */unsigned short) var_9);
    var_25 = ((/* implicit */long long int) max((var_25), ((+((-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (var_19)))))))));
}
