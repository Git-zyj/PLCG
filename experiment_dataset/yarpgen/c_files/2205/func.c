/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2205
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
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (signed char)-63)), (14482682439086249131ULL))))))));
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL)))))))), (3220539893521474201ULL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)48)) + (min((min((-1344766558), (1))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (-1344766546) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                var_18 *= ((/* implicit */unsigned long long int) arr_1 [i_1 + 2]);
            }
        } 
    } 
}
