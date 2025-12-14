/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232237
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_5 [i_1] [i_1 - 1]))))));
                var_19 = ((/* implicit */unsigned char) min(((short)4092), ((short)-32761)));
                arr_6 [i_1] [(unsigned short)0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_1);
    var_21 = ((/* implicit */_Bool) var_10);
}
