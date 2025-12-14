/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38670
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
    var_19 &= ((/* implicit */int) (~(((unsigned long long int) ((((/* implicit */_Bool) 1914489711)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29355))) : (var_1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [(signed char)14] [i_1] [i_0] &= ((/* implicit */signed char) (((~((-(arr_2 [i_0] [i_1] [i_1]))))) * (((/* implicit */long long int) min((((2253769148U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), (arr_3 [i_0])))))))));
                arr_5 [i_1] |= ((/* implicit */_Bool) 5267036618243003051LL);
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_14);
}
