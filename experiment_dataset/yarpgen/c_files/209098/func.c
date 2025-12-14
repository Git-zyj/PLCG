/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209098
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
    var_11 += min((var_6), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_8)), (min(((unsigned short)25525), (((/* implicit */unsigned short) (short)-30953))))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min(((~(var_5))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1 - 1])) && (((/* implicit */_Bool) ((arr_5 [i_0]) >> (((var_7) - (355112339549876437ULL)))))))))));
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_1] [i_0] [i_1])))), (((((/* implicit */_Bool) ((unsigned int) (short)30948))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])) : ((~(15082810280485150558ULL)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) ((15082810280485150558ULL) - (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_3])))));
                            arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) -6259350390432099757LL);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    arr_14 [i_1] [i_1] [i_4] [i_0] = ((/* implicit */short) var_9);
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) ((unsigned short) arr_3 [i_1 - 2] [i_0] [i_0]));
                        var_16 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_1 [i_5])) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */short) (+(((/* implicit */int) arr_16 [i_6] [i_6] [i_4] [i_6]))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */long long int) var_6)) : (arr_18 [i_7] [i_1] [i_4] [i_1] [i_0])))) ? (arr_22 [i_0] [i_0] [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 131071LL)) ? (33488896) : (((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                }
                for (long long int i_8 = 1; i_8 < 15; i_8 += 2) 
                {
                    arr_28 [i_0] [i_1] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) -4851654434135182524LL))) >= (((/* implicit */int) ((((/* implicit */int) min(((short)-11994), ((short)-28561)))) < ((~(((/* implicit */int) (_Bool)0)))))))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) (-(arr_4 [i_8] [i_1] [i_8])))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (arr_13 [i_0] [i_1] [i_0])))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) arr_25 [i_0] [i_1] [i_0])) : (var_6))) : (min((((/* implicit */unsigned int) (_Bool)1)), (arr_22 [(unsigned short)14] [i_1] [(unsigned short)14]))))) : ((~(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_1] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_4 [i_0] [i_0] [i_0])))))))));
                    arr_29 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -302358327590574787LL)) ? ((~(4294967295U))) : (min((max((((/* implicit */unsigned int) (_Bool)1)), (var_6))), (((/* implicit */unsigned int) max((arr_26 [i_1] [i_1]), (((/* implicit */short) var_2)))))))));
                    arr_30 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((~(max((((/* implicit */unsigned int) (unsigned char)226)), (arr_22 [i_0] [i_1] [i_0]))))) | (((((/* implicit */_Bool) arr_22 [i_1 - 2] [i_1] [i_0])) ? (arr_22 [i_1 + 1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    arr_34 [i_0] [i_1] [i_0] = ((/* implicit */short) 131056LL);
                    arr_35 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max((min(((~(3475708686U))), (((/* implicit */unsigned int) arr_5 [i_0])))), (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_0])) + (((/* implicit */int) (signed char)125))))), ((+(arr_17 [i_1] [i_9])))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_8), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
}
