/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221808
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
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    arr_9 [i_0 - 1] [i_0] [i_0 + 4] [i_0] = min((((((/* implicit */_Bool) arr_7 [i_0 + 4] [1] [i_2] [i_2 + 4])) ? (((/* implicit */int) (short)29123)) : (((/* implicit */int) (short)-29124)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (arr_0 [i_0]))))))));
                    var_19 = ((/* implicit */unsigned int) max((arr_1 [i_1]), (((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (~(var_18))))) | ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
}
