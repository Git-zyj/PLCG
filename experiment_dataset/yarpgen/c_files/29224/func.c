/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29224
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (max((((var_11) ? (((/* implicit */unsigned long long int) var_9)) : (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_14 = ((/* implicit */signed char) ((_Bool) (unsigned short)64114));
        var_15 *= arr_0 [i_0] [(signed char)8];
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_5 [i_1] = (~(arr_4 [i_1 + 1]));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((arr_1 [i_1]) % (arr_1 [i_1])));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_9))));
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(2569430320554502338ULL)))) ? (2251799813683200ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-733)))))));
        var_17 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)7094))));
    }
    var_18 = ((/* implicit */short) var_9);
    var_19 = ((/* implicit */unsigned int) var_5);
}
