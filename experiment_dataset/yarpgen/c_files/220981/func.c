/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220981
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
    var_12 = (~(((((/* implicit */_Bool) min((var_2), (var_2)))) ? (((var_6) % (var_8))) : (var_7))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 = arr_2 [i_0];
                var_14 = arr_0 [i_1];
                arr_5 [i_1] = ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (min((arr_1 [i_0]), (1623320478990612729ULL))) : ((-(5166658977096812109ULL))));
                var_15 = max((((var_2) | (((18347345288334552986ULL) >> (((14566641162213565168ULL) - (14566641162213565157ULL))))))), (min((var_1), (var_1))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) 6924881204691105190ULL)) ? (18446744073709551615ULL) : (0ULL));
}
