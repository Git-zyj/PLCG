/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5030
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) 72622802)), (4294967295U)))), (((((/* implicit */_Bool) (unsigned short)10881)) ? (((/* implicit */long long int) var_5)) : (12LL)))))) ? (((/* implicit */long long int) ((var_5) << (((((/* implicit */int) var_8)) - (25533)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)10904)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) var_6)) ? (6779266707550146939LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)32962))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1 + 2] [i_2] = ((/* implicit */_Bool) 2601932682603978822LL);
                    var_14 = ((/* implicit */long long int) (signed char)127);
                    arr_11 [i_2] [i_0] [i_2] = min((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))) / (2338344537U)))), (((((/* implicit */_Bool) (signed char)0)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (((/* implicit */long long int) var_8)));
                }
            } 
        } 
    } 
}
