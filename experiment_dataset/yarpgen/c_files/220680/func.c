/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220680
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] = min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 - 2])) >= (((/* implicit */int) arr_0 [i_1 - 1]))))), (arr_3 [i_0]));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) ((((max((arr_3 [i_0]), (arr_7 [i_2]))) != (min((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1] [i_2])), (0LL))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0])))))));
                    arr_9 [i_1 - 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_3 [i_0]) | (((((0LL) | (9223372036854775807LL))) | (2199022731264LL)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_3] [i_4 - 1] [(short)12]), (arr_2 [i_3] [i_4 + 2] [(unsigned short)10])))) ? (max((((/* implicit */long long int) arr_1 [i_3])), (arr_2 [i_4] [i_4 - 1] [i_4 - 1]))) : (((/* implicit */long long int) ((arr_1 [i_3]) * (arr_1 [i_3])))))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-1)), (0LL)))) ? (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))) : (arr_11 [i_4 + 1]))) : (-2199022731254LL))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -26LL)) ? (((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 2])) : (((/* implicit */int) arr_15 [i_5 + 1]))));
        arr_18 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_5 - 1])) ? (((/* implicit */int) arr_15 [i_5 - 2])) : (((/* implicit */int) arr_15 [i_5 - 2]))));
        var_21 = ((/* implicit */_Bool) (+(arr_16 [i_5 - 2] [i_5 + 1])));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5 - 2])) ? (((/* implicit */int) arr_15 [i_5 + 1])) : (((/* implicit */int) arr_15 [i_5 - 1]))));
        var_22 -= ((/* implicit */unsigned char) arr_14 [i_5 - 1] [i_5]);
    }
    for (unsigned int i_6 = 2; i_6 < 16; i_6 += 4) 
    {
        arr_23 [i_6 - 1] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_5 [i_6 + 1] [i_6] [i_6] [i_6])), (((((/* implicit */_Bool) (short)7680)) ? (-6994266172280288127LL) : (arr_3 [i_6]))))) & (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_6])) * (((/* implicit */int) arr_0 [i_6 - 2])))))));
        arr_24 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-777)) && (((((((/* implicit */_Bool) (short)4398)) && (((/* implicit */_Bool) arr_6 [i_6])))) || (((/* implicit */_Bool) min((arr_20 [10ULL]), (arr_6 [i_6]))))))));
    }
}
