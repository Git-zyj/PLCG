/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226603
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [5U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U)))))) ? (max((((((/* implicit */_Bool) -1)) ? (arr_5 [i_0] [i_1] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))))), (((/* implicit */unsigned int) arr_0 [i_0])))) : (arr_7 [i_0] [i_0] [i_1] [i_2])));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) -8918512441942560883LL);
                    arr_10 [i_0] [3] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1 - 2])) << (((((/* implicit */int) arr_3 [i_0] [i_1 - 1])) - (27568)))))), (((arr_1 [i_1 - 2]) ^ (arr_1 [i_1 - 1])))));
                    var_12 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) var_0)) & (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-8090206503230166836LL)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_9) / (((/* implicit */int) var_1)))), (((((/* implicit */int) var_7)) - (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (15045780410921789904ULL) : (((/* implicit */unsigned long long int) 524287LL))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_3))));
}
