/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23464
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)25897))))), (min((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1]))))), (4LL)))));
                var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)25890)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)59142)) >= (((/* implicit */int) (signed char)0))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_4))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max(((signed char)-114), ((signed char)5))))));
}
