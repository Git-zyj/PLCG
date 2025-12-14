/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197519
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0 - 1] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_4 [i_0 - 2]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) ((arr_2 [i_0]) ? (((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (arr_0 [(short)6] [i_0]))))));
                arr_7 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)12))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((-(var_9))) : (var_9)));
}
