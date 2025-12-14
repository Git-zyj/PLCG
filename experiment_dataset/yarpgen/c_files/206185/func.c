/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206185
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((((/* implicit */_Bool) (-(11977210294586448204ULL)))) ? (12521104841319525853ULL) : ((~(((((/* implicit */_Bool) 4299180305624981740ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44907))))))));
                arr_4 [3ULL] [3ULL] = ((((/* implicit */_Bool) ((((unsigned long long int) 18446744073709551615ULL)) << (((((((/* implicit */_Bool) var_3)) ? (arr_0 [12ULL] [3ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (11942132439891572940ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_3 [7ULL]) : (arr_2 [i_0] [6ULL])))) ? (max((18446744073709551615ULL), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) == (15030492225628802896ULL))))))) : (min(((+(arr_3 [i_0]))), (arr_2 [i_1 - 2] [i_1 + 1]))));
                arr_5 [0ULL] = ((/* implicit */unsigned short) ((((var_4) - (var_8))) - ((~(arr_1 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                arr_11 [1ULL] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_2 [i_2] [8ULL]) - (var_9))));
                var_14 *= ((/* implicit */unsigned short) min((((11977210294586448227ULL) >> (((((/* implicit */int) (unsigned short)54909)) - (54883))))), (((/* implicit */unsigned long long int) (unsigned short)8236))));
            }
        } 
    } 
}
