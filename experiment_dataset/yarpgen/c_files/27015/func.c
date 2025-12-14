/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27015
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)6904))));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (short)-32433);
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_2 + 4] [i_2]))) <= (var_10)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (-(var_15)));
}
