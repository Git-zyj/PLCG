/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35500
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (+(min((arr_2 [i_1] [i_1] [i_2]), (arr_2 [i_0] [i_1] [i_0])))));
                    var_11 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_1]);
                    arr_8 [i_0 - 1] [i_1] [i_1] [i_2] = min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))))));
                }
            } 
        } 
    } 
}
