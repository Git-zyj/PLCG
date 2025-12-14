/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201789
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((var_15) | (arr_7 [i_2 - 1] [i_2 + 1] [i_2 - 1]))) + (((/* implicit */long long int) ((4294967295U) ^ (((1058577010U) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                    var_20 = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 4; i_3 < 24; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                arr_17 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_9)))), (((((/* implicit */int) arr_11 [i_3 - 4])) ^ (((/* implicit */int) var_4))))));
                var_21 *= ((unsigned char) min((((/* implicit */long long int) arr_14 [i_3 - 3])), (var_10)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((min((var_18), (var_10))) | (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-848)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (var_18) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
}
