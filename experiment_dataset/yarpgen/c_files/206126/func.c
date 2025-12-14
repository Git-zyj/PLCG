/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206126
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
    var_10 = ((/* implicit */int) (+(5807571334302446719ULL)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_11 += (~(((11893782925427660896ULL) - (6552961148281890693ULL))));
                    arr_8 [i_1] = ((unsigned long long int) ((((int) (unsigned char)250)) != (((((/* implicit */_Bool) 2099699571)) ? (((/* implicit */int) arr_7 [i_2] [i_1 - 4] [i_0])) : (((/* implicit */int) (unsigned char)13))))));
                    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)17))) ? (((((int) (unsigned short)62906)) / (2099699571))) : (max((((/* implicit */int) (signed char)0)), (-682501415))))))));
                    var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (unsigned short)7)) / (((/* implicit */int) (signed char)39)))) : (((/* implicit */int) ((signed char) arr_5 [i_2])))))));
                }
            } 
        } 
    } 
}
