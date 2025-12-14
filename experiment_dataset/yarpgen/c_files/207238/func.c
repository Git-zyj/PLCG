/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207238
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
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        arr_4 [(short)12] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-63)) < (((/* implicit */int) arr_2 [(unsigned short)4])))) ? (((arr_2 [(unsigned char)4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [10ULL])))) : (((/* implicit */int) (unsigned short)4032))))) ? (((((/* implicit */_Bool) (unsigned char)253)) ? (4311100569740035851LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4032))))) : (((/* implicit */long long int) (+(min((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])), (2147483647))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))) : (((unsigned int) arr_6 [i_1] [i_1])))))));
        var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [0U] [0U])))))), (11114067204409936214ULL)));
        var_14 = ((/* implicit */_Bool) ((short) (+(2906450672U))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) ((short) 2147483647))) : (arr_5 [i_1] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_1] [8LL])))) ? (((/* implicit */unsigned long long int) min((2906450677U), (4136264891U)))) : (max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (8268487321428363794ULL)))))));
    }
    var_16 = ((/* implicit */long long int) var_6);
}
