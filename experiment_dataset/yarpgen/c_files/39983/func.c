/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39983
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((unsigned long long int) ((signed char) 2369276191755842100ULL))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_16 [i_2] [i_1] [i_2] [i_3] |= ((/* implicit */signed char) (~(min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 2])))));
                                var_13 = (~(((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [1ULL] [i_2])) ? (arr_14 [i_0 - 2] [0U] [i_2] [i_3] [(signed char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_4] [i_4] [13ULL])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                var_14 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(arr_19 [i_5] [i_6])))))) ? (arr_18 [2ULL]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(unsigned char)14]))) : (arr_18 [i_5])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [(signed char)14]))))) : (((unsigned long long int) arr_22 [(signed char)6]))))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (arr_22 [(unsigned char)6])));
                arr_24 [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6])) ? (arr_20 [i_6]) : (arr_18 [15ULL])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)78))))) : ((-(arr_17 [i_5])))))) ? (arr_17 [i_5]) : (((((/* implicit */_Bool) ((signed char) arr_21 [i_5]))) ? ((+(arr_17 [(signed char)7]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_6])))))))));
                arr_25 [6ULL] &= ((((/* implicit */_Bool) arr_20 [12U])) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)187)) ? (301977050U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))), (((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6]))) : (arr_19 [i_5] [(unsigned char)2]))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_17 [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6] [i_6]))))) : (((/* implicit */int) arr_22 [10ULL]))))));
                arr_26 [(signed char)6] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [6ULL]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((signed char) var_2)))));
    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
}
