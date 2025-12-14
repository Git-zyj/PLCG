/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45538
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [i_0] [i_0] [i_0]))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) -1384671282);
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9832146319788033018ULL)) ? (((var_14) ? (var_11) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [2])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [(short)3])))))))) ? (3036591867U) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (2U) : (arr_2 [i_0])))) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) var_5))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((var_14) ? (var_4) : (((/* implicit */int) var_13))))) : (min((9832146319788033007ULL), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) var_7))));
}
