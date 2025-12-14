/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222040
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
    var_10 = ((/* implicit */long long int) (~(((var_2) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (931295946488298087LL)))) : (((unsigned long long int) (unsigned char)2))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) arr_0 [i_0 - 3] [i_0 + 1])) : (((((/* implicit */_Bool) -6110982012012941836LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (arr_4 [i_0] [i_1]))))));
                var_11 = ((/* implicit */signed char) (-((-(arr_5 [i_1] [i_0 + 2])))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_2 + 1] [i_2 + 1] [i_4] [i_2 + 1] [i_0]))))) ? (-6110982012012941813LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_12 [i_0] [i_0 + 2] [i_0] [i_2 + 1] [i_4] [i_2 + 1] [i_2 + 1]), (arr_12 [i_1] [i_0 + 2] [i_1] [i_2 + 1] [i_4] [i_2 + 1] [i_0])))))));
                                var_12 = ((/* implicit */signed char) (((-(-6110982012012941800LL))) >= (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_12 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
