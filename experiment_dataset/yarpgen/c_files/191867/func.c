/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191867
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
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] &= ((/* implicit */unsigned short) var_7);
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_1 [i_0 + 1]))) - (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 3]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)50598)) << (((((((/* implicit */int) var_3)) + (17485))) - (26))))) == ((-(-993434110)))));
}
