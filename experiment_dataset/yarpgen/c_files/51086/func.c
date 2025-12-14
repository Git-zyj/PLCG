/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51086
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 + 3] [i_1] [i_1])) <= (((/* implicit */int) var_12))));
                arr_6 [i_0 - 1] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)98)), (((int) max((-3420081143159055145LL), (((/* implicit */long long int) (_Bool)1)))))));
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_17))) >> (((((unsigned int) 2147483647)) - (2147483644U)))))), (max((((unsigned int) arr_0 [i_1])), (((/* implicit */unsigned int) ((unsigned char) var_1)))))));
                arr_7 [i_1] = min((((/* implicit */unsigned int) 1795229177)), (2746246706U));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_5);
}
