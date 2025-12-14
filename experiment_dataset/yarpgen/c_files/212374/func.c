/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212374
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
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))))))));
        var_12 = ((/* implicit */_Bool) var_3);
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_5 [i_1] = var_11;
        arr_6 [i_1] = ((/* implicit */_Bool) var_8);
        var_13 = ((/* implicit */signed char) arr_1 [i_1]);
        var_14 = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_2])) ? (max((arr_9 [i_2] [i_2]), (var_7))) : (arr_9 [i_2] [i_2]));
        arr_12 [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34476))) : (arr_7 [i_2])))) : (arr_10 [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_10 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))));
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 868812028)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))) : (((((/* implicit */_Bool) (unsigned short)32000)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (((unsigned int) var_7))))));
    var_16 += ((/* implicit */_Bool) ((long long int) ((unsigned char) var_5)));
}
