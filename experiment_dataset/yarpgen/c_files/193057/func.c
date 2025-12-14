/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193057
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
    var_10 += ((/* implicit */_Bool) var_1);
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1928300959U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-125))))) : (min((((unsigned int) var_1)), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)60)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = arr_2 [i_0];
                arr_6 [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [4])) ? (((/* implicit */unsigned long long int) min((var_4), (arr_0 [i_1])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) : (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) <= ((+(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
}
