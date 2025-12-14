/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40999
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
    var_18 = ((/* implicit */signed char) var_15);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned int) var_7)))));
        var_20 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) var_12))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_13)) : (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_16)))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (-12LL)))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) arr_6 [i_1]);
        var_22 = arr_7 [i_1];
        arr_8 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [(unsigned char)8])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [18LL]))))), (((/* implicit */long long int) arr_7 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) ((long long int) ((unsigned long long int) ((((/* implicit */unsigned int) var_16)) > (var_15)))));
        arr_13 [i_2] = ((/* implicit */_Bool) ((min((arr_11 [i_2]), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) != (((/* implicit */int) arr_9 [i_2] [i_2]))))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)61440)) >= (var_16))))));
    }
}
