/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244661
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((((/* implicit */unsigned int) var_8)), (2795667488U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */unsigned int) 2419848596849164656LL);
                var_14 ^= ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_5)) ? (arr_0 [2U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) & ((~(arr_2 [i_0 + 2])))));
                var_15 = ((/* implicit */int) arr_2 [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)127)), (4294967295U)))) ? ((+(arr_6 [i_2]))) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        arr_7 [i_2] = min((min((((/* implicit */unsigned long long int) var_2)), (min((var_6), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) (+(4294967295U)))));
    }
    var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (var_10) : (((/* implicit */int) var_8))))));
}
