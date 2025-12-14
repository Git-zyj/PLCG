/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201721
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) 56385464U)) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (13710551407459167250ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_1])) * (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_1 + 1]))))) : (((arr_3 [i_0] [i_1 - 1] [i_1 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1 + 1]))) : (var_2)))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_1 - 1]))));
                arr_7 [(unsigned short)8] [(unsigned short)8] |= ((/* implicit */unsigned char) arr_2 [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_4);
}
