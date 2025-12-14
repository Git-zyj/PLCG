/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32282
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (max(((unsigned short)124), ((unsigned short)65535)))));
                var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) (unsigned short)22)), (347320029)))))), (arr_2 [i_1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                arr_9 [i_3] = ((/* implicit */short) min((((/* implicit */long long int) var_2)), (var_12)));
                var_16 = ((/* implicit */short) var_2);
            }
        } 
    } 
}
