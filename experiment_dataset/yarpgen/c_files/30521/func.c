/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30521
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_14 += ((/* implicit */unsigned int) arr_0 [8U]);
                    arr_8 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((_Bool) arr_5 [i_1] [i_0] [i_1 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1 - 1])) ? (arr_7 [1U] [i_1] [i_1 + 1]) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))) : (min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_5 [i_1] [i_0] [i_1 - 2]))))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */_Bool) var_5);
    var_16 = ((/* implicit */long long int) var_5);
}
