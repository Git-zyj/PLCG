/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203755
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))), (max((arr_0 [i_0 + 1] [i_0 - 1]), (((/* implicit */int) var_14))))));
                var_18 *= ((/* implicit */unsigned short) 1487160397U);
            }
        } 
    } 
    var_19 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (min((2003489673U), (((/* implicit */unsigned int) ((527416683U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17153))))))))));
}
