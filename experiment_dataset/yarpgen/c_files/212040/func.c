/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212040
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (min((arr_1 [14ULL] [i_1 - 1]), (3860892457141456254ULL))) : (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                var_16 = ((/* implicit */long long int) ((17898143745850341238ULL) != (18405842689933477652ULL)));
                var_17 += min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1]))))), ((+(2836639994538760579ULL))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 4067637510373853989LL)) <= (15610104079170791037ULL))) ? ((-(((((/* implicit */_Bool) var_1)) ? (var_2) : (4331410106801226115LL))))) : (((long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_13))))))))));
}
