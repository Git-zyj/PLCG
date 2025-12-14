/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223033
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
    var_14 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)));
    var_15 -= ((/* implicit */long long int) var_5);
    var_16 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) < (arr_1 [i_1] [i_1])))), (arr_1 [i_0] [i_2])));
                    var_17 = ((/* implicit */unsigned char) min((((((min((((/* implicit */int) (unsigned short)60491)), (var_1))) + (2147483647))) >> (((arr_4 [i_1]) - (2126407640U))))), (((/* implicit */int) var_12))));
                }
            } 
        } 
    } 
}
