/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246925
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) -1075299360606723935LL);
                    var_10 = var_9;
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) max((var_9), (var_3)))) >= (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) arr_0 [(unsigned char)6] [i_1]))))))));
                    var_11 |= ((/* implicit */int) arr_3 [2]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_1);
}
