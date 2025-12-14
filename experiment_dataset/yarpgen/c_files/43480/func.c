/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43480
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) 2242011432U);
                arr_6 [i_1] = ((/* implicit */long long int) arr_5 [i_0] [10U]);
                var_18 = ((/* implicit */unsigned char) (_Bool)1);
                var_19 = arr_2 [i_0];
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) 2242011432U);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned int) var_5)), (2242011435U))) : (2242011427U)));
}
