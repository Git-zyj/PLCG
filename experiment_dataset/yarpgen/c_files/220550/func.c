/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220550
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
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) 2246886425U);
                    var_17 ^= ((/* implicit */unsigned int) min((var_1), (((/* implicit */int) var_14))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */_Bool) var_13);
    var_19 = ((/* implicit */int) var_6);
    var_20 = ((/* implicit */int) max((((/* implicit */long long int) ((max((2048080871U), (2246886425U))) | (((/* implicit */unsigned int) var_0))))), (min(((+(var_12))), (((/* implicit */long long int) (+(var_4))))))));
}
