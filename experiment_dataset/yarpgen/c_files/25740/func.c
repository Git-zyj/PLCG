/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25740
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (arr_0 [i_0] [i_0])))));
                    arr_7 [9] [i_1] [i_1] [i_1] = var_1;
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 3157446745361949680LL)), (var_1))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-13362)))))))))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_1)))))));
}
