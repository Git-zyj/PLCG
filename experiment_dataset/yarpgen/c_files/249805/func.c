/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249805
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
    var_15 = (short)-32758;
    var_16 = ((/* implicit */unsigned int) var_2);
    var_17 = ((/* implicit */signed char) ((unsigned int) (unsigned short)37444));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_2))));
                    arr_9 [i_0] [i_1] [i_2 - 1] = ((/* implicit */_Bool) arr_1 [i_2]);
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_3))));
                    var_20 = ((/* implicit */signed char) 11ULL);
                }
            } 
        } 
    } 
}
