/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43605
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
    var_10 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_1 [i_0] [i_1])), ((-((~((-9223372036854775807LL - 1LL))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) || ((!(((/* implicit */_Bool) var_1))))))), (-9223372036854775787LL)));
                arr_8 [i_0] [i_0] [(short)11] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_1]))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (8191) : (-1257609763)))));
}
