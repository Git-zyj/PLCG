/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3280
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
    var_12 = ((/* implicit */unsigned int) min((7291422815852018536ULL), (((/* implicit */unsigned long long int) (unsigned char)86))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */long long int) arr_5 [1U]);
                arr_8 [(_Bool)1] [i_1 - 1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)46437))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_1);
}
