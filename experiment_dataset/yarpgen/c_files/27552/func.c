/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27552
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0]) : (((int) (!(((/* implicit */_Bool) 8825703770978835708LL)))))));
                    var_18 = ((/* implicit */unsigned int) var_7);
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) 1670670064);
                }
            } 
        } 
    } 
}
