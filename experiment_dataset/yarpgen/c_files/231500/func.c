/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231500
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 -= ((/* implicit */unsigned short) var_11);
        arr_2 [i_0] [(short)0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (var_6)))) - (((min((var_10), (((/* implicit */unsigned long long int) var_11)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [3U]), (((/* implicit */unsigned short) (signed char)-102))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) arr_4 [i_1]);
        arr_7 [i_1] = arr_5 [i_1];
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_4 [i_2 - 1]))) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_2 + 1])), (((arr_6 [i_2]) | (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
        arr_10 [(signed char)10] = ((/* implicit */unsigned char) arr_3 [i_2] [i_2]);
        arr_11 [9] = ((/* implicit */short) arr_9 [i_2]);
    }
    var_16 = ((/* implicit */long long int) var_11);
}
