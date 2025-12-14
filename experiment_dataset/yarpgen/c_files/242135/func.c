/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242135
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
    var_13 = var_5;
    var_14 = ((/* implicit */unsigned char) var_0);
    var_15 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1 - 1] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) ((long long int) ((arr_6 [i_2] [i_1 - 3] [i_0 - 4] [i_0 + 3]) ? (((/* implicit */int) arr_6 [i_2] [i_1 + 1] [i_0 - 2] [i_0])) : (((/* implicit */int) var_0)))));
                    var_16 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)63)))) >> ((((-(arr_3 [i_1 - 2]))) - (1272726887U)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((unsigned short) (-(max((-8400310814957138745LL), (1176019877666167216LL))))));
}
