/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227826
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
    var_11 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 *= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 4] [i_2 - 2])) - (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) arr_5 [i_0])))))), (max((11923796387599020158ULL), (11923796387599020180ULL)))));
                    var_13 = ((/* implicit */unsigned short) arr_2 [7ULL] [14ULL]);
                    arr_7 [i_0] [(unsigned char)12] [(unsigned char)12] = ((/* implicit */unsigned long long int) arr_1 [i_1 + 4] [i_0]);
                }
            } 
        } 
    } 
}
