/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2356
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((_Bool) (unsigned char)28)) ? (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) var_9)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (var_4))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7)))) != (((/* implicit */int) (short)-25849))));
        arr_3 [i_0] = ((/* implicit */short) (+(arr_0 [i_0 - 1])));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_0 [i_0 - 3]))))));
        var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 639677692U)) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 + 1])));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((((/* implicit */short) min((((/* implicit */unsigned char) ((-9089409203811266972LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27)))))), (arr_1 [(short)15])))), ((short)25849)));
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned char)8])) ? (((/* implicit */int) var_13)) : (((-879515562) / (((/* implicit */int) arr_5 [i_1]))))))) != (((((/* implicit */_Bool) (unsigned short)8738)) ? (arr_4 [i_1]) : ((+(var_15)))))));
    }
}
