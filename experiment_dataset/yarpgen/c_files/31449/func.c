/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31449
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) 503884881));
                arr_5 [i_0] [i_0] = ((/* implicit */int) var_3);
                var_12 |= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (((/* implicit */long long int) -503884888))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) 503884882);
}
