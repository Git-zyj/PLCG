/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231494
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [17])) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), (((/* implicit */int) var_10))));
                arr_4 [i_1] = ((/* implicit */int) 0U);
                var_16 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(var_12)))), (var_2)))), (min(((+(arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 3; i_2 < 18; i_2 += 1) 
    {
        for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_17 |= ((/* implicit */signed char) (-(min((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) ((short) var_1)))))));
                    var_18 = var_14;
                }
            } 
        } 
    } 
}
