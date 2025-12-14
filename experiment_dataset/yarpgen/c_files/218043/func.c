/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218043
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_0)), (6ULL)))))) ? (((((unsigned long long int) arr_0 [i_0])) << (((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) - (16697709093742961681ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_0)), (6ULL)))))) ? (((((unsigned long long int) arr_0 [i_0])) << (((((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) - (16697709093742961681ULL))) - (8141356132335869757ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))));
                var_14 = ((((/* implicit */_Bool) var_9)) ? ((~((~(12833390487385509250ULL))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (10694140271541467879ULL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 3] [i_3])) ? (((((/* implicit */_Bool) arr_9 [18ULL] [i_3] [i_3])) ? (arr_5 [i_2]) : (arr_5 [i_2]))) : ((((_Bool)1) ? (5ULL) : (var_9)))))) ? (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_10 [11ULL])) : (((/* implicit */int) (unsigned char)241))))), ((~(var_9))))) : (arr_8 [i_3] [i_2 + 2])));
                arr_11 [12ULL] [i_3] [i_2] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2135582015024411513ULL)) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (6009128424424422573ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [17LL]))))))), (((((/* implicit */_Bool) (+(arr_8 [i_3] [i_2])))) ? (min((18446744073709551610ULL), (((/* implicit */unsigned long long int) arr_6 [5ULL])))) : ((~(6009128424424422573ULL))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((arr_8 [i_2] [i_2]), (((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_9 [i_3] [20ULL] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (arr_8 [i_2 + 2] [i_2 - 2]))))))));
            }
        } 
    } 
}
