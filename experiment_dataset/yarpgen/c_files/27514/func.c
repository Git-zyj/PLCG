/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27514
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [6U] = (~(min((((/* implicit */unsigned int) (unsigned short)60791)), (arr_2 [i_1]))));
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)26)))), (((/* implicit */int) (unsigned char)186))))) ? ((-((-(var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0] [i_1]) < (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (var_6))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))) : (min((((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) (signed char)-102))))), (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (234193544U)))))));
                arr_7 [i_0] [i_0] [10U] = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) var_1))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) : (var_0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_15 [i_2] [i_2] [i_4] [i_2 - 1] = ((/* implicit */unsigned short) max(((!((!(((/* implicit */_Bool) (unsigned short)39535)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (948510681U)))) && (((/* implicit */_Bool) max((arr_11 [i_2] [i_3]), (((/* implicit */unsigned char) var_4)))))))));
                    arr_16 [i_2 - 2] [i_2] [i_2] = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
}
