/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233995
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
    var_19 = ((/* implicit */signed char) ((int) (-(((/* implicit */int) (unsigned char)204)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0] [i_0]) <= (arr_4 [i_1] [i_2])))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))) <= (824633720832ULL)))) : (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_0 + 1] [i_0 - 4] [i_0 - 4] [i_0 - 4])))));
                    var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)0)), ((~(min((((/* implicit */unsigned long long int) (unsigned char)254)), (1152921496016912384ULL)))))));
                    arr_8 [i_0] [i_1] [1LL] = ((/* implicit */short) max((((arr_0 [i_0 - 4]) * (arr_0 [i_0 - 2]))), (((/* implicit */unsigned long long int) ((int) arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 - 1])))));
                }
            } 
        } 
    } 
}
