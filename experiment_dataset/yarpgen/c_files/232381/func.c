/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232381
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
    var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3666513946U)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (unsigned char)104))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((3885150740779622192ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */unsigned long long int) ((0LL) * (((/* implicit */long long int) 3287701556U))))) : ((+(arr_4 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) 3287701555U)))))));
                var_19 = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
                var_20 |= ((min((((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_1] [i_0 - 2])), (arr_4 [i_0 - 3] [i_1]))) ^ (((/* implicit */unsigned long long int) min((536870912), (((/* implicit */int) (signed char)17))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max((17591649173504ULL), (((/* implicit */unsigned long long int) 3287701566U))))) ? (max((14U), (((/* implicit */unsigned int) (signed char)-60)))) : (max((((/* implicit */unsigned int) (unsigned char)246)), (469038855U))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (1007265722U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10)))))) ? (((((/* implicit */_Bool) (-(1534023784759910689ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) (signed char)0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8741))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
