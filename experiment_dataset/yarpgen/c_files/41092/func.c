/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41092
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0 + 2] [i_0] [5ULL] = ((/* implicit */int) max((((/* implicit */long long int) arr_2 [i_0])), ((+(((((-4881921880651539649LL) + (9223372036854775807LL))) << (((((var_4) + (5245524063740252774LL))) - (27LL)))))))));
                var_15 = (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_6))))), (arr_5 [i_0 + 2]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_16 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 16711680))))) ^ (((/* implicit */int) (_Bool)1)))))));
                var_17 = ((/* implicit */unsigned int) (-((~((~(var_0)))))));
            }
        } 
    } 
}
