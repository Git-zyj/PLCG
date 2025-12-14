/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33135
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
    var_18 = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-39))))), (var_12));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (signed char)38)))))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51914)))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0 + 3]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [13] = ((/* implicit */unsigned long long int) (((+(288423132U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12))))));
        var_20 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (arr_4 [i_1] [i_1]))) >= (((/* implicit */unsigned int) arr_6 [i_1] [i_1]))));
        var_21 += ((/* implicit */unsigned int) (+(arr_6 [i_1] [i_1])));
        var_22 = ((/* implicit */int) ((arr_4 [i_1] [i_1]) & (arr_4 [i_1] [i_1])));
    }
    for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        var_23 = arr_0 [i_2] [i_2];
        var_24 = ((/* implicit */unsigned int) arr_0 [12LL] [i_2]);
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (-(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (var_7))), (((/* implicit */unsigned long long int) arr_1 [i_2 - 1])))))))));
    }
    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */int) var_3);
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_1 [i_3])))))) ? (((unsigned int) max((arr_5 [i_3]), (((/* implicit */long long int) arr_4 [i_3] [i_3]))))) : (((/* implicit */unsigned int) arr_0 [i_3] [i_3]))));
        var_27 = ((/* implicit */unsigned long long int) arr_5 [i_3]);
    }
}
