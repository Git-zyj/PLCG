/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243166
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
    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (2147483623))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (arr_4 [i_0] [i_0] [i_1] [i_2])));
                    var_18 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [24ULL] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_2] [8U] [i_2]))))), (((unsigned int) ((int) var_15)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_10))));
}
