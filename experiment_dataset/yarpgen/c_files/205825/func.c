/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205825
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned char)7] [i_1] [i_2] = ((/* implicit */unsigned short) var_14);
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (-12049864))) + (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) arr_2 [i_0]))))))) ? (max((arr_4 [i_2 - 2] [i_2 - 2] [i_2 + 1]), (((/* implicit */unsigned long long int) 12049870)))) : (min((arr_4 [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) min((arr_6 [i_0] [(signed char)2] [i_0]), (arr_6 [i_2] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */int) var_14);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) -12049864)) ^ (min((var_5), (((/* implicit */long long int) var_13))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min((((/* implicit */long long int) min((12049845), (-12049868)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) - (var_9)))))));
}
