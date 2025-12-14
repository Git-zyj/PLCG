/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33115
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
    var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-21420)), (var_0))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0 + 1] [i_0] = ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (arr_1 [i_0 + 1])))));
                var_19 = ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_0 - 2]), (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (~(arr_2 [i_1] [i_1]))))))) <= (arr_1 [i_0 - 2])));
            }
        } 
    } 
}
