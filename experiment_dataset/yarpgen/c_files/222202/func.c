/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222202
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
    var_12 = ((/* implicit */unsigned int) var_5);
    var_13 = (_Bool)1;
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [12U] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_2]))))))))));
                    var_15 = ((/* implicit */long long int) ((int) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_0 + 1] [20] [i_1] [i_2])), (arr_5 [13] [i_0] [i_0] [i_0])))))));
                    arr_8 [i_2] [i_2] [i_1] [5U] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [3LL] [3LL] [i_0])) << (((var_8) - (1686895552U)))));
                }
            } 
        } 
    } 
}
