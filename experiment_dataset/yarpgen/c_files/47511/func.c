/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47511
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
    var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) 129443164)) ? (1533519922) : (1300863126)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [(unsigned char)12] = ((/* implicit */_Bool) ((int) var_4));
                    arr_9 [i_0] = ((/* implicit */int) var_11);
                }
            } 
        } 
    } 
}
