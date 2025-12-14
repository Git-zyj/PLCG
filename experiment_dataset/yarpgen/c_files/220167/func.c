/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220167
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
    var_12 = ((/* implicit */unsigned int) var_8);
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_2)))) ? (((/* implicit */int) var_3)) : (((((((/* implicit */int) (short)-20110)) + (2147483647))) << (0ULL))))) << (((((((/* implicit */_Bool) ((unsigned short) var_5))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_7))) : (max((((/* implicit */unsigned long long int) (unsigned short)31088)), (18446744073709551615ULL))))) - (4660721711599844523ULL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2] [i_1 + 1] [i_2])) - (((/* implicit */int) var_9))))), (min((18446744073709551585ULL), (16515158905746984546ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)34421)) ? (arr_2 [i_0]) : (((/* implicit */int) var_6)))), (arr_2 [i_1 - 2]))))));
                    var_15 = ((/* implicit */unsigned short) ((unsigned char) max((15ULL), (((/* implicit */unsigned long long int) var_3)))));
                    var_16 = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    } 
}
