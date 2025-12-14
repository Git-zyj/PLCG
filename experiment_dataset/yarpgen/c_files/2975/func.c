/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2975
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
    var_17 = ((/* implicit */long long int) var_13);
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (7250006093062699444ULL)));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32740)) ? ((~(13121075422687797121ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (3811515017267319851LL))))))) ? (((((/* implicit */_Bool) var_14)) ? (((13121075422687797125ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) : (var_16))) : (((/* implicit */unsigned long long int) var_12)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))), (max((((/* implicit */unsigned long long int) (short)21685)), (5325668651021754490ULL)))));
                    var_21 &= ((/* implicit */unsigned short) var_12);
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((13121075422687797142ULL), (((/* implicit */unsigned long long int) (unsigned char)119))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_8);
}
