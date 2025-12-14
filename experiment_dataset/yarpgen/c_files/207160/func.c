/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207160
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) var_12)), (max((var_4), (max((var_4), (var_0)))))));
    var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8))) : (var_8))), (((/* implicit */long long int) ((int) max((-595448935), (((/* implicit */int) var_12))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) var_5);
    }
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [(unsigned short)14])), (((unsigned long long int) ((long long int) arr_4 [(short)8]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) arr_5 [i_1]))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_7 [i_2]))));
        var_19 = ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2])));
    }
}
