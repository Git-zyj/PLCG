/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34835
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
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0 - 1] = ((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1 - 3] [i_2] [i_2]);
                    arr_8 [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned short) var_13)), (var_6))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1LL)))))));
                }
            } 
        } 
    } 
}
