/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206229
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
    var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) -518722010199291682LL)) || (((/* implicit */_Bool) var_0)))))), (var_4)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_3 [i_1] [i_0 - 2] [i_0 + 1]) == (((/* implicit */long long int) ((/* implicit */int) (short)21044))))))))) ? (((long long int) ((arr_1 [i_0]) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160)))))) : (min(((~(arr_3 [i_0 - 2] [i_1] [i_1]))), (((/* implicit */long long int) ((int) (signed char)-50)))))));
                var_13 = ((/* implicit */short) var_3);
                var_14 = (~(((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) arr_5 [i_0 - 1]))))) ? (arr_3 [i_0 - 2] [6] [6]) : (arr_3 [i_1 + 4] [i_0 - 1] [i_1]))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (unsigned char)160))));
                arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (((unsigned long long int) -5854330714231015632LL)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)255)), (var_3)))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (-9223372036854775807LL - 1LL)))))))) : (max((((long long int) var_5)), (min((0LL), (9223372036854775807LL)))))));
}
