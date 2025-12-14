/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27553
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
    var_20 = (-(var_0));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (arr_1 [i_0])));
                arr_4 [i_1] [i_0] &= ((min((max((36028797018963968ULL), (var_11))), (((((/* implicit */_Bool) var_8)) ? (arr_3 [2ULL] [i_1 - 1]) : (var_5))))) ^ (((((/* implicit */_Bool) max((var_0), (36028797018963984ULL)))) ? (arr_0 [i_0 - 2] [i_1]) : (min((var_8), (var_12))))));
                arr_5 [10ULL] [i_0] = var_11;
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (min((min(((~(7765603019774218233ULL))), (max((var_13), (var_2))))), (min((var_12), (((((/* implicit */_Bool) var_15)) ? (var_2) : (16452841207085800045ULL)))))))));
    var_23 = var_6;
}
