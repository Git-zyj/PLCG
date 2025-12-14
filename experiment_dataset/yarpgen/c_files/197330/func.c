/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197330
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
    var_11 *= max((max((min((var_0), ((signed char)32))), ((signed char)-32))), (var_5));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 = var_0;
                arr_4 [i_0] = arr_2 [i_0] [i_1];
            }
        } 
    } 
    var_13 = (signed char)63;
    var_14 -= var_2;
    var_15 = min((var_0), ((signed char)-1));
}
