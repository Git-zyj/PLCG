/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197205
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
    var_16 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_1] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_0)))) - (30323)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) 4294967295U)) ? (5961283369560891721LL) : (((/* implicit */long long int) 1908502582U)));
                            var_18 += max((((/* implicit */unsigned int) (_Bool)1)), (1908502582U));
                            arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((arr_12 [i_3 - 2] [i_3 - 3] [i_3 - 2] [i_3 + 1]), (var_2)))), (min((0U), (917287961U)))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_1 + 2])), (arr_9 [i_1] [i_0 + 2] [i_1])))))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_6))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 1) 
        {
            {
                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551610ULL)));
                var_22 ^= ((/* implicit */int) ((((/* implicit */unsigned int) var_8)) & (min((arr_16 [i_5 + 1] [i_5]), (((/* implicit */unsigned int) arr_15 [1ULL] [1ULL]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (max((var_6), (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (_Bool)1)), (2386464724U))))))))));
}
