/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23770
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_1 - 1])) ? (arr_2 [i_0 - 1] [i_0 - 1] [i_1 - 1]) : (arr_2 [i_0 - 1] [i_0 - 1] [i_1 - 2]))))))));
                    arr_6 [i_2] = ((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)133)) : (((((/* implicit */_Bool) max((3ULL), (((/* implicit */unsigned long long int) 3005196563U))))) ? (var_6) : ((~(var_16)))))));
}
