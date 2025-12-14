/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39074
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
    var_19 = ((/* implicit */int) var_17);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_1 - 2])) ? (((/* implicit */int) (short)1948)) : (((/* implicit */int) (signed char)-125))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_2]))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_0] [i_1 - 2] [i_0] [i_2]), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)126)) <= (((/* implicit */int) var_6))))))))))))));
                    var_21 -= ((/* implicit */_Bool) max((min((arr_3 [i_1 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_0 + 1])) >= (arr_3 [i_1 - 2] [i_0 + 1]))))));
                }
            } 
        } 
    } 
}
