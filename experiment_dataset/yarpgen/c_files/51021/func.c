/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51021
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
    var_11 = ((/* implicit */unsigned short) min((min(((~(1895982098167177342LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172)))))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_0))) : (((unsigned int) var_2)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */_Bool) max((max((min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) arr_5 [i_1 - 1] [i_0]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
                    arr_7 [i_0 - 1] [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 2])) || (((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 2]))))));
                }
            } 
        } 
    } 
}
