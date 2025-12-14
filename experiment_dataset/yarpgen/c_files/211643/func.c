/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211643
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-123)) ? (265959635U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123)))));
    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(4029007669U))), (((2166837080U) << (((var_3) - (11288586652814598826ULL)))))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) 4029007657U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)0))))))) : (min((((/* implicit */long long int) (signed char)121)), (-5359697526449509301LL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) && (((/* implicit */_Bool) arr_12 [i_2 - 3] [i_2 - 1] [i_2 - 4] [i_2 - 4] [i_2 - 1]))))), (min((((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */short) arr_8 [i_3]))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)10])) ? (arr_4 [i_4]) : (arr_1 [i_0])))))));
                                var_17 = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)154))) & (arr_1 [i_2 + 1]))), (((/* implicit */long long int) (~(arr_11 [i_2 + 1] [(_Bool)1] [i_2] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                    var_18 = (~((+(min((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_1] [(short)13])))))));
                }
            } 
        } 
    } 
}
