/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215611
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) min((min((min((17592186044352ULL), (15638178822597325395ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_1] [i_0] [0U]) : (((/* implicit */long long int) var_1))))))), ((-(18446726481523507263ULL)))));
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((unsigned long long int) arr_3 [i_0] [i_0] [i_0])) : (17592186044347ULL)));
            }
        } 
    } 
    var_11 = ((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) var_1)))) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) var_8))))))) * (((var_1) + (var_2)))))));
    var_12 = ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (((((((/* implicit */long long int) var_4)) == (var_9))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) : (((long long int) var_0)))));
}
