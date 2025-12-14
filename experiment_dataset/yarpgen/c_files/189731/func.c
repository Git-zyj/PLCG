/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189731
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_19)))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) -2629909177103210168LL)) ? (((/* implicit */int) (short)2407)) : (((/* implicit */int) var_0))))), (((arr_4 [i_1] [17ULL] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))))));
                    arr_9 [i_1] [0ULL] [i_1] = ((/* implicit */short) (-((((!(((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_2])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2]))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_2 [i_0] [10ULL])))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2 - 1] &= ((/* implicit */short) max((((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) : (((unsigned long long int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((int) arr_7 [i_0] [i_2 + 1] [i_0])))));
                    var_21 ^= ((/* implicit */unsigned int) ((int) ((unsigned short) (unsigned char)122)));
                    arr_11 [i_1] [i_1 + 1] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)131)) << (((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1])) - (68))))) | (((/* implicit */int) max((arr_7 [i_0] [i_1 + 2] [i_1]), (arr_7 [(short)3] [i_1 + 1] [i_1]))))))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)131)) << (((((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1])) - (68))) + (33))))) | (((/* implicit */int) max((arr_7 [i_0] [i_1 + 2] [i_1]), (arr_7 [(short)3] [i_1 + 1] [i_1])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) max(((-(var_1))), (((/* implicit */unsigned long long int) (unsigned short)6705))));
}
