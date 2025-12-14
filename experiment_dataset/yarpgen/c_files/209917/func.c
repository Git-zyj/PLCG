/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209917
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((long long int) arr_9 [i_1] [i_0 - 1])) >> (((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0 + 1] [i_2])) ? (arr_7 [i_0] [i_1] [i_0 + 1] [i_0]) : (arr_7 [9ULL] [i_1] [i_0 - 1] [i_2]))) - (3315887505U)))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [0])) ? (((/* implicit */unsigned long long int) arr_0 [6LL])) : (arr_10 [i_0] [0U] [i_0] [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned int) (unsigned short)0))));
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (((var_2) ? (((/* implicit */long long int) var_3)) : (var_4)))));
}
