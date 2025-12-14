/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219639
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (arr_2 [i_1])));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) var_6)) : (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (18446744073709551597ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) 0)) <= (var_10)))) ^ (arr_5 [i_0] [i_1])))) : (((var_4) / (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) var_12)) + ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((int) 0))))))));
    var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_5))))))))));
}
