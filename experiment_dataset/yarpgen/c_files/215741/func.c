/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215741
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [0ULL] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (13280492767387465187ULL) : (18446744073709551615ULL)))) < (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0 + 1]) : (arr_1 [i_1])))));
                arr_5 [i_0] = ((18446744073709551615ULL) ^ (0ULL));
                arr_6 [i_0] [i_0] = var_6;
                arr_7 [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) + (5781427760617275988ULL)))) ? (arr_2 [i_0]) : (16871929276303417709ULL)));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((var_2) <= (min((9831303701523325747ULL), (arr_0 [i_0])))))));
            }
        } 
    } 
    var_13 = var_12;
    var_14 = ((((var_0) - (max((2998971023271742768ULL), (var_0))))) - (min((min((var_8), (var_10))), (18446744073709551597ULL))));
}
