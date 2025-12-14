/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38547
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) max((min((((arr_0 [i_1]) + (arr_0 [i_1]))), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) arr_3 [i_0])))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
                arr_7 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    var_20 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    var_21 = ((/* implicit */unsigned char) ((unsigned short) var_0));
}
