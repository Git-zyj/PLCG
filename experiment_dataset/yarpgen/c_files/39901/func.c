/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39901
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
    var_11 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] [i_1] = ((/* implicit */short) (-2147483647 - 1));
                var_12 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((long long int) arr_3 [i_0] [i_1] [(short)4]))) * (min((((/* implicit */unsigned long long int) arr_3 [i_0] [(signed char)16] [(unsigned short)7])), (arr_0 [i_0]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_2);
    var_14 -= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)29566))));
}
