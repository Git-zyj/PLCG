/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28023
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
    var_11 = ((/* implicit */long long int) var_3);
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_2) ? (var_0) : (((/* implicit */unsigned long long int) -6444766629706544934LL)))) - (var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 511U)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [4LL]))))) || ((!(((/* implicit */_Bool) 514U)))))))) : (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_1]))) : (arr_5 [i_0] [i_0 - 2] [10ULL])))));
                arr_6 [i_0] [i_0 - 2] [6LL] &= ((/* implicit */int) arr_4 [(unsigned short)10] [i_0]);
            }
        } 
    } 
    var_14 += ((/* implicit */int) ((3279737818910673284LL) < (-3279737818910673282LL)));
    var_15 = ((/* implicit */int) var_0);
}
