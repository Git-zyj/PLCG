/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211849
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
    var_14 |= ((((((/* implicit */long long int) ((/* implicit */int) var_12))) + (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29084))) : (var_1))))) - (((/* implicit */long long int) (+(((((/* implicit */_Bool) 2144253667U)) ? (((/* implicit */int) var_3)) : (-31)))))));
    var_15 = ((/* implicit */unsigned char) min((676389935U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */_Bool) max((min((arr_3 [i_2 + 1] [i_2 + 2]), (arr_3 [i_2 - 1] [i_2 + 2]))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44544)) && (((/* implicit */_Bool) (unsigned short)0))))) | ((+(((/* implicit */int) (unsigned short)20992)))))))));
                            var_17 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-105))));
                            arr_11 [i_0] [i_2 + 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1])) ? (((/* implicit */int) ((unsigned char) var_5))) : (((((/* implicit */_Bool) (-(503293100U)))) ? (((/* implicit */int) arr_1 [i_2 - 3])) : (((/* implicit */int) arr_4 [i_0 - 3] [i_0] [i_0 - 3]))))));
                            arr_12 [i_0] [2U] [i_0] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 1]);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 3])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_0] [i_0 + 1] [(short)7]));
                var_18 = ((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 + 2])) ? (arr_3 [i_0 + 1] [i_1 - 2]) : (arr_3 [i_0 + 2] [i_1 + 2]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11079)) ? (((/* implicit */int) (unsigned short)44554)) : (1907761031)))));
            }
        } 
    } 
    var_19 |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2251799813685248ULL)))))));
}
