/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244956
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1 - 1] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (arr_3 [i_1 - 1])))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0]))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_9))))))));
                    var_15 = ((/* implicit */int) ((unsigned short) min((arr_6 [i_0] [i_1 - 1] [i_2] [i_1]), (arr_6 [i_0] [i_1 - 1] [i_0] [i_2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_13))))));
}
