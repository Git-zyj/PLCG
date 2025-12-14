/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39814
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
    var_11 = ((/* implicit */short) min(((((+(6812569635103159551LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(max((-3665188173676925456LL), (((/* implicit */long long int) var_8))))))), (11054429762662109978ULL)));
                var_12 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (max((1674483576U), (((/* implicit */unsigned int) arr_1 [i_1]))))))) ? (((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) arr_0 [i_0] [i_1]))))) - (min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) arr_3 [8U] [i_1]))));
                arr_7 [i_0] [i_1] = arr_5 [i_1] [i_1];
            }
        } 
    } 
    var_13 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)105))))), (var_3)));
    var_14 -= ((/* implicit */unsigned long long int) var_2);
}
