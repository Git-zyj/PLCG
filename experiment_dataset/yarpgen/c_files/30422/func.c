/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30422
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
    var_10 = ((/* implicit */_Bool) (+(-20041551)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) 390345133300460958LL);
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)169)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)39)));
}
