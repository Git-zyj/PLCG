/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28085
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max(((+(var_11))), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])))))));
                    var_19 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])) * (((/* implicit */int) (short)-1350)))) - (((/* implicit */int) arr_2 [i_2]))));
                    var_20 -= ((/* implicit */_Bool) var_7);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_10);
}
