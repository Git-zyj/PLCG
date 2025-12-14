/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23120
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
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) ^ (468326716637290112LL))), (((/* implicit */long long int) arr_3 [7] [i_0] [i_1])))))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_0 [(unsigned short)2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_8)) ? (127U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))))) - (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)2108))))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_11)))) ? (((((/* implicit */int) (short)-10728)) / (314043823))) : (((/* implicit */int) ((var_9) == (var_9)))))))));
}
