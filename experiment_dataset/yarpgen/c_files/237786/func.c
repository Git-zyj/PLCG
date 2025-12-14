/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237786
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
    var_14 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = min((min((max((arr_2 [i_1] [i_1] [i_0]), (arr_1 [i_1]))), (min((arr_2 [i_0] [i_0] [i_1]), (arr_1 [i_0]))))), (max((max((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0])), (arr_2 [i_0] [i_0] [i_1]))), (max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_2 [i_0] [i_0] [i_1]))))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) min((arr_0 [i_0]), (arr_0 [i_1])))), (max((arr_1 [i_1]), (((/* implicit */unsigned int) arr_0 [i_0])))))), (arr_1 [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((((/* implicit */int) var_5)), (var_10)));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)127)), (-1386335415)));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_8))));
}
