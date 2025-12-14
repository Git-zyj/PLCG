/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193727
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
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) 15241861982219712880ULL))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)55)) < (((int) arr_2 [i_0] [i_1]))))) >= (arr_3 [i_0] [i_0] [i_0]))))));
                arr_4 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]);
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_2 [i_0 - 3] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_12)));
                arr_6 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_1] [i_0 + 2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 98054435U))))))))));
            }
        } 
    } 
}
