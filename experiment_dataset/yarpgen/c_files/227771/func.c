/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227771
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(5691579163231144743ULL))))));
                    var_21 = ((/* implicit */unsigned short) (((-(min((((/* implicit */long long int) arr_5 [i_1] [i_1])), (arr_0 [i_0]))))) | (min((((/* implicit */long long int) var_12)), (arr_0 [i_0])))));
                    arr_8 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */short) max((((arr_2 [i_1] [i_2]) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) : (var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (arr_6 [i_2] [i_2] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (signed char)57))));
}
