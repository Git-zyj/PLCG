/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240649
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned long long int) var_2));
        var_10 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (short)0)) ? (845681426U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) + (((((/* implicit */_Bool) 79288789999530571LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_0 [i_0]))))) - (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) arr_1 [1ULL])))))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_11 [i_2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 5212998758981276866ULL)) ? (arr_4 [i_1] [i_1]) : (var_0))));
                    arr_12 [i_1] [(unsigned char)3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 + 1])) < (((/* implicit */int) arr_9 [i_1 + 1]))))) >= (((/* implicit */int) arr_9 [i_1 + 2]))));
                }
            } 
        } 
        var_11 -= ((/* implicit */long long int) (short)-3521);
        arr_13 [i_1] [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned char)36))))))) | (var_2)));
    }
    for (unsigned int i_4 = 3; i_4 < 13; i_4 += 2) 
    {
        var_12 = ((/* implicit */long long int) arr_3 [(signed char)7]);
        arr_18 [i_4] = ((/* implicit */_Bool) -817481906);
        arr_19 [i_4] = ((((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_4] [i_4 - 2]))))) & (min(((-(var_3))), (((/* implicit */long long int) (signed char)127)))));
        var_13 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) arr_8 [(_Bool)0]))), (((((/* implicit */_Bool) arr_17 [i_4 + 1])) ? (arr_17 [i_4 + 2]) : (arr_17 [i_4 + 3])))));
    }
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 10; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                var_14 |= ((/* implicit */int) var_1);
                arr_25 [i_5] = ((/* implicit */signed char) ((-562949953421312LL) <= (((/* implicit */long long int) 193327117))));
                arr_26 [i_5 - 1] [i_5 - 1] = ((/* implicit */int) ((signed char) var_7));
                arr_27 [1LL] [i_5] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) (signed char)-39))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) : (193327117))), (((/* implicit */int) var_5))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        for (unsigned int i_8 = 3; i_8 < 17; i_8 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_30 [i_8] [i_7]);
                arr_33 [i_7] [(short)2] = ((/* implicit */long long int) (+((~((~(17753990020634707328ULL)))))));
            }
        } 
    } 
}
