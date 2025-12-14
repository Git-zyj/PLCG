/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237789
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
    var_20 *= ((unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((var_3) - (7493756960385670415ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_21 += ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((short) (short)32767))), (min((var_12), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))), (max((((/* implicit */unsigned long long int) ((short) arr_0 [i_0] [i_1]))), (arr_1 [i_0 - 1])))));
                arr_5 [i_0 - 1] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_14)) ? (min((arr_2 [i_1]), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_3 [i_1] [i_0]))))))))));
            }
        } 
    } 
    var_22 = min(((short)32767), ((short)-1));
}
