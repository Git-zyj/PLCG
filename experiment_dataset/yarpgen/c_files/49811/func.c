/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49811
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
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_13))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10873))) : (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))));
                }
            } 
        } 
    } 
}
