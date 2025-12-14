/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234101
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
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (max((10702440324222207708ULL), (((/* implicit */unsigned long long int) var_6))))))));
                arr_8 [i_0 + 1] [i_1 - 2] [(signed char)1] = ((/* implicit */short) ((arr_6 [i_1 - 2]) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_14))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (var_0)));
}
