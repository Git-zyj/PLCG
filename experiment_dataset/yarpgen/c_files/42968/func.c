/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42968
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
    var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_9) > (((((/* implicit */_Bool) var_2)) ? (16777215) : (((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = (signed char)-81;
                arr_4 [4ULL] [(unsigned short)4] |= ((/* implicit */long long int) min((arr_3 [6ULL] [i_0] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0 - 2] [i_1]))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                var_14 = ((/* implicit */long long int) arr_0 [i_0 + 3] [i_0 + 4]);
                var_15 += ((/* implicit */_Bool) (signed char)125);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-3095))));
}
