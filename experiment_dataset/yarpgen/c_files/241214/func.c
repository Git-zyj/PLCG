/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241214
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_16);
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [22ULL] [22ULL]);
                    var_17 = ((/* implicit */long long int) (unsigned short)41276);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_12);
}
