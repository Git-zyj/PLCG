/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229853
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
    var_18 = ((/* implicit */unsigned char) (unsigned short)42346);
    var_19 |= ((/* implicit */signed char) -2061217623);
    var_20 = ((/* implicit */short) (unsigned short)2845);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)112);
                arr_7 [i_0] [i_1] [i_0] = (signed char)-122;
                arr_8 [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)2845);
                var_21 = ((/* implicit */unsigned int) (unsigned short)30720);
            }
        } 
    } 
}
