/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228259
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(signed char)8] &= ((/* implicit */int) ((unsigned int) ((unsigned long long int) arr_0 [2])));
                var_10 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) arr_4 [i_1 - 3] [i_1 - 2] [i_0 - 3]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 336561489397431847LL)) : (arr_0 [4ULL]))) : (((/* implicit */unsigned long long int) ((int) 336561489397431858LL)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (var_3) : (((/* implicit */unsigned int) var_4))));
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_7))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((long long int) var_1))) : (((unsigned long long int) (-(18446744073709551613ULL))))));
}
