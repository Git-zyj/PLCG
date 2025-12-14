/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40354
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
    var_17 = (~(max((max((var_4), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_8))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_18 += ((/* implicit */unsigned long long int) ((int) ((max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_2] [i_2])), (arr_6 [(short)2] [i_1] [i_1]))) >> (((arr_4 [i_0] [i_1] [i_2] [15]) + (4576813328746442838LL))))));
                    arr_7 [i_2] [i_1 + 1] [i_2] |= ((/* implicit */unsigned int) (~(max((688654406), (2147483647)))));
                }
            } 
        } 
    } 
}
