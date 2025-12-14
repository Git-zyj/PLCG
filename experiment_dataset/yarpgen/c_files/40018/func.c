/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40018
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
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned char) var_2))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-120)) ? (16LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65237)))))));
                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)298)), (((unsigned int) (unsigned short)65535))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5857667263214866487ULL)) ? (min((arr_3 [i_1 - 2] [i_1 - 2] [i_1 + 1]), (var_9))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_12);
}
