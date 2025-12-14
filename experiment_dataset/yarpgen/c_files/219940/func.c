/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219940
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
    var_13 = ((/* implicit */unsigned char) var_10);
    var_14 = ((/* implicit */unsigned short) var_5);
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_7))));
    var_16 = ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) var_6);
                    arr_9 [i_0] [i_1] [i_1] = 6LL;
                }
            } 
        } 
    } 
}
