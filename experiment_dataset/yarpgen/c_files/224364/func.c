/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224364
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
    var_20 = ((/* implicit */signed char) (short)1321);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))), (((/* implicit */int) min((arr_1 [i_0 - 3]), (arr_1 [i_0 + 1])))))))));
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                var_23 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 3])) / (((/* implicit */int) arr_1 [i_0 + 1]))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))) / (-7502087499829025382LL)))));
            }
        } 
    } 
}
