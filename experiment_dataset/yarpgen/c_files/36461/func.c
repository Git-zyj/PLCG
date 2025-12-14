/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36461
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
    var_17 &= ((/* implicit */unsigned char) (~(4883936676890849089LL)));
    var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) var_2))))) != (min((((/* implicit */long long int) (_Bool)1)), (var_9)))))) >> ((((-(min((var_1), (((/* implicit */unsigned int) (_Bool)1)))))) - (4294967274U)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 -= ((_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_2])), (max((((/* implicit */unsigned long long int) (_Bool)1)), (4778018020643357156ULL)))));
                    arr_9 [i_0] [(short)5] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + ((~(((/* implicit */int) arr_5 [i_2] [i_1] [i_2 - 1]))))));
                }
            } 
        } 
    } 
}
