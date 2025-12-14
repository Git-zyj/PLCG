/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30417
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */short) max((((arr_3 [i_0] [i_1] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_4 + 1] [i_4 - 3] [i_0] [i_4 - 3] [i_4 + 1])) : (((/* implicit */int) (signed char)3))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_0] [i_4] [i_4 - 2] [i_4] [i_4 + 1] [i_3] [i_0])))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_4 - 1])), (arr_11 [i_4] [i_4] [i_4] [i_0] [i_4 - 1])))) ? (((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_0] [i_4 - 3])) ? (arr_11 [i_4] [i_4] [i_4] [i_0] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))))) : (((/* implicit */unsigned int) (~(2147483647))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_14)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (min((var_1), (-9088177890700069829LL)))))) ? (((/* implicit */unsigned long long int) var_7)) : (min(((~(var_6))), (((/* implicit */unsigned long long int) var_15))))));
}
