/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2215
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
    var_11 -= ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max((min((arr_3 [i_2 - 2] [i_1] [i_0]), (arr_3 [i_2 + 2] [i_1] [i_0]))), (((/* implicit */long long int) max((var_2), (arr_6 [i_2 + 2] [i_2] [i_1 + 2])))))))));
                    arr_7 [i_1] [(signed char)16] [i_0] = ((/* implicit */short) ((((min((var_7), (arr_0 [i_1]))) + (2147483647))) >> (((arr_4 [i_1 - 1]) - (750164176)))));
                    var_13 &= var_8;
                    var_14 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) var_2))));
                }
            } 
        } 
    } 
}
