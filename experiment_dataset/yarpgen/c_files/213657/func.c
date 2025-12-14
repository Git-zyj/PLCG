/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213657
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1890480602)) ? (-1890480595) : (((/* implicit */int) (!((_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0]) - (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0])), (0U))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned int) arr_2 [i_0] [i_1]));
            }
        } 
    } 
}
