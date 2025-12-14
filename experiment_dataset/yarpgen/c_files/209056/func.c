/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209056
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
    var_16 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), (var_9)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) var_3);
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (short)4095);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_3])), (var_9)));
                var_19 = var_1;
            }
        } 
    } 
    var_20 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)-1)), (5U)));
}
