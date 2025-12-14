/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40863
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) || (((/* implicit */_Bool) var_0))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) var_11)), (var_3)))) >= (((/* implicit */int) ((min((131071LL), (((/* implicit */long long int) var_8)))) == (min((131071LL), (((/* implicit */long long int) (signed char)62)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) | (arr_3 [i_1 - 3] [i_0 + 2])))) && (((/* implicit */_Bool) arr_3 [i_1 - 3] [i_0 - 1]))));
                arr_4 [i_0] = ((/* implicit */unsigned short) -131083LL);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) < (arr_3 [i_1 - 4] [i_1])));
            }
        } 
    } 
}
