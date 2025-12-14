/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38795
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = arr_2 [(signed char)6] [i_0];
                arr_7 [i_0] [i_1] [(short)4] = min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)98))))), (((/* implicit */long long int) var_1)));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), (5415760960486203286ULL)));
    var_11 = ((/* implicit */_Bool) min((((unsigned long long int) -1)), (min((((var_5) ^ (1090715534753792ULL))), (((/* implicit */unsigned long long int) (signed char)68))))));
}
