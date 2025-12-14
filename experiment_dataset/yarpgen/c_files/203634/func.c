/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203634
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_0] [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_1 [i_2] [i_3]);
                        var_19 = ((unsigned short) (unsigned short)0);
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 19; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned char) ((max((var_14), (((/* implicit */long long int) var_8)))) - (arr_13 [i_0] [i_0] [i_1] [i_0] [i_4 + 1] [i_1] [(unsigned char)1])))))));
                                var_21 = ((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (var_5))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)8]))) : (arr_13 [i_0] [i_0] [i_0] [10ULL] [i_0] [i_4] [i_5])))) ? (((arr_2 [(unsigned char)6] [i_1] [i_0]) >> (((/* implicit */int) (signed char)36)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (long long int i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_8] [i_8 + 1] [i_7 + 1] [i_8 + 1] [i_7] [i_7 + 1]))))))));
                        arr_23 [i_6] [18ULL] [i_0] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_7 + 1] [2LL] [i_6] [i_6] [i_6] [(_Bool)1] [i_6])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) max((arr_15 [i_0] [i_6] [i_0]), (((/* implicit */unsigned short) arr_11 [i_7] [(unsigned char)13] [i_7] [i_7] [i_7]))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-36)))))));
                                var_24 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [(signed char)10] [i_10])) >> (((((((((/* implicit */_Bool) (signed char)-53)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_6] [6LL] [i_9] [i_9] [i_10]))))) - (-9223372036854775798LL))) + (25LL)))));
                                var_25 = ((/* implicit */_Bool) arr_4 [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_28 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 17670689159386094188ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (7414551033123262155ULL)))));
    }
}
