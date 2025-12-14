/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41711
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (11685943756757724330ULL))), (((/* implicit */unsigned long long int) ((var_11) == (((/* implicit */long long int) var_7)))))));
                var_15 = ((((/* implicit */int) max((((/* implicit */short) max((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_1 + 1] [i_0] [i_0])))), (arr_0 [i_0])))) << (((/* implicit */int) min((((((/* implicit */int) var_10)) > (((/* implicit */int) (_Bool)1)))), ((_Bool)1)))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((var_12), (((/* implicit */int) (_Bool)1))));
}
