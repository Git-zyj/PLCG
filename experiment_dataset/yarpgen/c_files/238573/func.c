/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238573
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
    var_10 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)62888)), (3212621403903996618ULL)));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_2] [i_1] [i_1] = min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (arr_6 [i_1] [i_2 + 1]))), (((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_0] [i_0 - 1] [i_0 + 2])));
                    var_11 += ((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))) + (11024)))));
                }
            } 
        } 
    } 
    var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)2648))))) ? ((+(3752705378U))) : (((/* implicit */unsigned int) -721880800))))));
}
