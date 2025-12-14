/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219552
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)62)))), (((/* implicit */int) max((var_0), (((/* implicit */short) var_2)))))))) ? (min(((+(((/* implicit */int) (unsigned char)106)))), (min((1246105341), (((/* implicit */int) (unsigned short)9747)))))) : (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((unsigned int) (short)-6946));
                    arr_7 [i_0] [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((short)2023), (((/* implicit */short) max(((unsigned char)88), (var_1))))))) - (((/* implicit */int) max((((/* implicit */short) ((signed char) (unsigned short)23717))), (var_9))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (min((3018801826U), (((/* implicit */unsigned int) var_0))))));
    var_13 = ((/* implicit */unsigned short) var_6);
    var_14 = ((/* implicit */_Bool) var_8);
}
