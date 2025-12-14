/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194152
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+((~(((/* implicit */int) var_6)))))))));
    var_21 = ((/* implicit */_Bool) ((unsigned long long int) ((int) var_11)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 23; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) var_0)), (-1647426275289919614LL)))))) != (max((9566789052487093311ULL), (((/* implicit */unsigned long long int) (~(-2LL))))))))));
                    arr_8 [i_0] [i_0] [i_2 + 2] [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
}
