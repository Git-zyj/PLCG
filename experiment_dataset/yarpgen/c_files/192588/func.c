/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192588
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
    var_17 = (signed char)-21;
    var_18 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((var_2) > (((((/* implicit */_Bool) min((arr_0 [i_0] [i_2]), (((/* implicit */unsigned long long int) -1253542298))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) 1253542315)), (arr_7 [i_0] [i_0])))) : (max((((/* implicit */long long int) var_12)), (-23LL))))));
                    var_20 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (166))))) : (((arr_5 [i_0]) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (152)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((((((/* implicit */int) arr_1 [i_0] [i_0])) - (166))) + (65))) - (24))))) : (((arr_5 [i_0]) >> (((((((/* implicit */int) arr_1 [i_0] [i_0])) - (152))) + (57))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_5);
}
