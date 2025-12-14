/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27560
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551615ULL))), (var_7))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)77)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))))))))));
    var_19 = var_8;
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0 + 2] [16ULL] [i_0] &= ((((((/* implicit */_Bool) 1892191705733655379ULL)) ? (((/* implicit */unsigned long long int) 765713292U)) : (((arr_6 [i_0] [i_0 - 1] [i_0]) ^ (((/* implicit */unsigned long long int) var_3)))))) >> (((var_3) - (343024540U))));
                    var_20 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_2])) ? (((/* implicit */int) arr_0 [4ULL])) : (((/* implicit */int) (signed char)0))))));
                }
            } 
        } 
    } 
}
