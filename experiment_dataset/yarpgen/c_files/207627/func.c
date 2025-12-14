/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207627
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
    var_19 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) ((unsigned char) arr_1 [i_0]));
                arr_5 [i_1] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) min(((signed char)-23), ((signed char)54)))), (max(((unsigned short)55600), (((/* implicit */unsigned short) (signed char)46))))));
            }
        } 
    } 
}
