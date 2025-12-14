/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21728
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) (-(((int) (+(((/* implicit */int) var_3)))))));
                    arr_10 [i_0 + 1] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((unsigned long long int) max((var_11), ((~(var_11))))));
}
