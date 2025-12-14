/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54158
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
        var_19 -= max((((/* implicit */unsigned long long int) var_5)), (min((max((var_7), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) var_14)))));
        var_20 += min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((((unsigned int) (~(var_6)))), ((+(arr_2 [i_1])))));
                var_22 = 2781018371U;
            }
        } 
    } 
    var_23 |= min((18446744073709551615ULL), (2440671699589035162ULL));
}
