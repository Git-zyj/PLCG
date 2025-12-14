/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20980
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((arr_6 [i_0] [i_2] [(unsigned char)19] [i_0]), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-124)) ? (2394824236U) : (2852282039U))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0]), ((_Bool)1))))))))));
                    arr_7 [i_0] = ((/* implicit */unsigned short) (((((-(-1565494083))) + (((/* implicit */int) max((var_9), (var_7)))))) - (((/* implicit */int) var_2))));
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))) * (((/* implicit */int) ((((/* implicit */_Bool) ((int) var_11))) && (((/* implicit */_Bool) var_10)))))));
}
