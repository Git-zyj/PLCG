/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225122
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = var_4;
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (arr_7 [i_1])))))))) ? (min((max((var_10), (((/* implicit */long long int) (signed char)67)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_4 [i_1]) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0] [i_0 - 3])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_12);
    var_15 = ((/* implicit */_Bool) var_4);
}
