/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227264
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
    var_13 = ((/* implicit */unsigned int) var_6);
    var_14 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 = arr_0 [(unsigned char)0];
                    arr_10 [4LL] [i_2] [(signed char)0] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_4 [i_2 - 3] [i_1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (((unsigned long long int) var_3))));
                }
            } 
        } 
    } 
}
