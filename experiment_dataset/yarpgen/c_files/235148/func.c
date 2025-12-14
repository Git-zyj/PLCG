/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235148
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned short) arr_2 [(unsigned short)9]);
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned short) ((_Bool) ((signed char) var_0)))), (((unsigned short) var_2))));
        var_22 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_0 [i_0] [i_0]))) << (((((((((/* implicit */unsigned long long int) arr_3 [i_0])) ^ (var_13))) % (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (arr_3 [5ULL])))))) - (1467891445ULL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_1])) ? (var_12) : (((/* implicit */long long int) arr_6 [i_1])))), (((/* implicit */long long int) (((-(8858790145909532432ULL))) >= (((/* implicit */unsigned long long int) min((arr_5 [i_1]), (((/* implicit */int) var_9))))))))));
        arr_8 [i_1] = ((/* implicit */short) 2130562675);
        var_23 -= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_6 [i_1]))));
    }
    var_24 &= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
}
