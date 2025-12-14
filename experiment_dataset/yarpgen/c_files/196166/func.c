/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196166
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((-(arr_2 [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) >= (max((((/* implicit */long long int) ((arr_0 [i_0]) / (((/* implicit */unsigned int) -1020926619))))), (((arr_1 [i_0]) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        arr_3 [i_0] |= arr_2 [i_0];
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (8030542183342233621LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [i_1])))) : (max((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_14)))))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (max((((/* implicit */unsigned long long int) (unsigned char)212)), (var_10))) : (((/* implicit */unsigned long long int) (~(var_12))))))))));
        arr_8 [i_1] = ((/* implicit */long long int) ((arr_6 [i_1]) << (((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))) / (576443160117379072ULL))), (((/* implicit */unsigned long long int) (-(var_8)))))) - (12105422284929108737ULL)))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)43))))) / (arr_6 [i_1])))) / (((long long int) arr_1 [i_1]))));
    }
    var_20 = ((/* implicit */unsigned char) var_16);
}
