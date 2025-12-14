/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26717
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) max((5239917407439853077ULL), (((/* implicit */unsigned long long int) (unsigned short)14741))));
                    arr_9 [i_1] = (-((-(((unsigned long long int) arr_3 [i_1])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) ((signed char) var_13))), (var_11))));
    var_20 = ((/* implicit */unsigned char) var_7);
}
