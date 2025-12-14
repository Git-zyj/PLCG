/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43770
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
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-22481))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) var_11));
                arr_5 [9U] [i_0] = max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (9930442819365969891ULL))), (((/* implicit */unsigned long long int) (((~(arr_1 [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_19)), (6284503684527672665LL))))))));
            }
        } 
    } 
}
