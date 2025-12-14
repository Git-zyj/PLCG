/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51872
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [(_Bool)0] [i_1 - 2] [(unsigned short)9] |= ((/* implicit */long long int) arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 1]);
                arr_7 [i_0] [(short)7] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (unsigned char)173)))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_3))))));
}
