/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29670
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
    var_10 &= ((/* implicit */unsigned short) var_0);
    var_11 &= ((/* implicit */unsigned long long int) ((((unsigned long long int) max((var_0), (((/* implicit */unsigned long long int) var_7))))) >= (((/* implicit */unsigned long long int) ((unsigned int) min((var_1), (((/* implicit */unsigned int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])) ? (var_9) : (arr_4 [i_1] [i_1 - 1])))));
                var_12 = ((/* implicit */unsigned short) min((2096678115U), (var_1)));
                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-104))));
            }
        } 
    } 
}
