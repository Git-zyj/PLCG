/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21111
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
    var_14 = ((unsigned long long int) (((((-(1658944582))) + (2147483647))) << ((((((+(((/* implicit */int) var_11)))) + (31162))) - (27)))));
    var_15 &= ((/* implicit */unsigned long long int) var_2);
    var_16 = 2147483647;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 880352915)), (((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [11])) ? (12838281581973381259ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))))));
                    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (((((/* implicit */_Bool) 1189614776)) ? (arr_7 [i_2] [i_1]) : (((/* implicit */unsigned long long int) 880352937)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) || (((/* implicit */_Bool) arr_7 [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
}
