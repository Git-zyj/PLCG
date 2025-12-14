/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243685
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
    var_15 = ((/* implicit */signed char) (_Bool)0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [2] [i_0 - 1] [i_0 - 1] [12U] = ((/* implicit */unsigned int) ((arr_1 [i_0 + 1]) != (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0])))));
                    var_16 = ((/* implicit */unsigned long long int) ((unsigned char) max(((+(var_4))), (((long long int) 9223372036854775791LL)))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 1])) >= (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) >= (((unsigned int) var_13)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) (~(var_10))))) * (min((((/* implicit */unsigned long long int) ((195916718U) <= (((/* implicit */unsigned int) var_0))))), (((unsigned long long int) 2114441989939952292LL))))));
}
