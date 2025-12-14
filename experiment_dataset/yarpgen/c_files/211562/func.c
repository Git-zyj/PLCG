/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211562
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (short)-6322)) - (((/* implicit */int) var_3)))));
                    arr_9 [i_0] [i_2 + 1] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) arr_1 [i_0] [i_1 - 1])), ((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))), ((~(((/* implicit */int) (_Bool)1))))));
    var_14 = ((/* implicit */signed char) var_9);
}
