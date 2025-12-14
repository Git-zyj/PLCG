/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244573
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
    var_17 &= ((/* implicit */unsigned long long int) var_12);
    var_18 = ((/* implicit */unsigned int) 3695562698019248324LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_2))));
                    arr_12 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (signed char)99);
                    var_20 = ((/* implicit */unsigned int) 11277032406664622651ULL);
                    var_21 = ((/* implicit */unsigned char) (-(((arr_1 [i_2 - 2]) / (-524113178)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((long long int) 1069226610));
    var_23 = ((/* implicit */unsigned char) var_4);
}
