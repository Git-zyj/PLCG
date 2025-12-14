/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46264
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
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (var_6)))) <= (((/* implicit */int) var_8))))), (min((min((var_1), (((/* implicit */unsigned long long int) 4577791946995434468LL)))), (((/* implicit */unsigned long long int) var_10))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 0ULL)) ? (var_3) : (arr_1 [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1] [i_2 + 2]) >= (((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_2] [i_2])) ? (var_2) : (7ULL)))))))));
                    var_17 += ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) (~(5586346741319292426LL)))) / (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */long long int) var_6)) : (arr_6 [i_2 + 1] [9LL] [17] [i_2 + 1]))))));
                }
            } 
        } 
    } 
}
