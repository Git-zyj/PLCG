/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210683
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (+(((((/* implicit */_Bool) arr_8 [i_2 - 3] [i_2 - 3] [i_0 + 3] [i_0])) ? (arr_8 [i_2 + 2] [(unsigned short)16] [i_0 + 3] [(short)7]) : (arr_8 [i_2 + 2] [i_2] [i_0 - 3] [i_0 - 3]))));
                    arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 15246673094863979503ULL)))))) : (max((arr_1 [i_2 + 2]), (arr_1 [i_2 - 1])))));
                    arr_11 [i_0] [i_2] [i_2] [i_2 - 1] = ((/* implicit */signed char) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (max((max((8836271474744971628LL), (((/* implicit */long long int) (unsigned char)68)))), (var_8)))));
}
