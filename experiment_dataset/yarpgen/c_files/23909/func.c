/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23909
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (min(((+(var_4))), (((/* implicit */long long int) ((unsigned short) var_2))))) : (((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)127)))) / (((/* implicit */int) var_9)))))));
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)32768)))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
}
