/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236255
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_11)), (var_3))), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_7)));
    var_20 = ((/* implicit */_Bool) max(((+(6850840431357395506ULL))), (((/* implicit */unsigned long long int) (short)-29899))));
    var_21 = ((/* implicit */long long int) (signed char)-86);
    var_22 = ((/* implicit */unsigned int) ((long long int) var_18));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    var_23 *= ((/* implicit */unsigned char) -1884257639);
                    arr_9 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (11595903642352156103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 2]))))) % (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (short)-32760)))), (((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 2])))))));
                }
            } 
        } 
    } 
}
