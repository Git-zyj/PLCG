/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210918
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = max((((((/* implicit */_Bool) var_15)) ? (6080249707345178278LL) : (arr_1 [i_0 - 1] [1LL]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1 - 2]))))));
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (137438953471LL) : (9223372036854775807LL)))))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_2 [i_0]));
                arr_6 [12LL] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) == (0LL))))) : (((((/* implicit */_Bool) -4554144727842723461LL)) ? (arr_0 [i_0]) : (arr_1 [i_0 + 2] [i_1 + 2]))));
                arr_7 [i_0] [i_0] [i_1] = (((+(var_2))) - (max((var_13), (((((/* implicit */_Bool) var_12)) ? (var_9) : (arr_1 [i_0 - 1] [i_0 - 1]))))));
                arr_8 [i_0] [i_1 + 2] [i_0] = ((((/* implicit */_Bool) 3019031691191376890LL)) ? (((((0LL) ^ (var_3))) ^ (0LL))) : (((6LL) >> (((var_3) - (4658345514107022475LL))))));
            }
        } 
    } 
    var_17 = ((long long int) var_1);
    var_18 = var_5;
}
