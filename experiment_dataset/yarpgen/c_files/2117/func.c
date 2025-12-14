/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2117
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
    var_20 = ((/* implicit */unsigned short) ((signed char) min(((+(((/* implicit */int) var_19)))), ((-(((/* implicit */int) var_17)))))));
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))));
    var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((int) (_Bool)1)) : (((/* implicit */int) var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_1] [(short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0 + 3] [i_0] [i_0]))) ? ((-(arr_5 [i_0 + 3] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 3] [i_0])) : (arr_0 [i_0 + 3])))));
                var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_5 [i_0 - 2] [2LL] [i_0]) : (arr_0 [i_1])))))), (((unsigned long long int) (-(3879945131485316236ULL))))));
            }
        } 
    } 
}
