/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224573
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((18209552229191092691ULL) - (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned int) 1095965372)) : (5U)));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_2 [i_0] [i_0] [11ULL])))))) : (arr_4 [i_2 + 1] [i_1 + 2] [i_1 + 4]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 *= arr_0 [i_2 + 1] [i_1 + 2];
                                arr_12 [i_2] [i_2] = ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967286U)) && (((/* implicit */_Bool) 16383U)))))) : (2U));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [12U] [i_0] [12U] [i_0])) ? (arr_10 [i_2 + 1] [12U] [i_2 + 1] [12U] [i_0]) : (arr_10 [i_2 - 2] [(signed char)14] [i_0] [(signed char)14] [i_0])));
                }
            } 
        } 
        var_20 = ((((/* implicit */_Bool) (short)8239)) || (((/* implicit */_Bool) arr_11 [(short)14] [i_0])));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            arr_15 [2LL] [(signed char)12] [i_0] = ((/* implicit */unsigned char) 4294967290U);
            arr_16 [i_5] [i_0] [i_0] = ((/* implicit */short) (+(arr_7 [i_0] [i_0] [i_0] [i_0])));
        }
    }
    var_21 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((var_4) == (var_4))))))));
    var_22 = ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))))) : (var_9));
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 3) 
    {
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) ? ((~(((/* implicit */int) arr_21 [i_8] [i_9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_15), (arr_27 [i_6])))))))));
                                arr_30 [i_10] [i_10] [i_10] [i_10] [i_6] [i_6] = ((/* implicit */unsigned int) min((var_1), (((short) ((((/* implicit */_Bool) arr_21 [i_9] [i_9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))));
                                var_24 = ((/* implicit */signed char) (+(arr_20 [i_10])));
                                var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((max((883935415U), (((/* implicit */unsigned int) (signed char)28)))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_0 [i_9] [i_7]) : (((/* implicit */unsigned long long int) arr_28 [i_8] [i_8] [i_8]))))));
                            }
                        } 
                    } 
                } 
                arr_31 [i_6 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_7))))), (min((arr_20 [i_7]), (((/* implicit */unsigned int) var_1))))))) <= (min(((+(arr_19 [i_7] [i_6] [i_6]))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_26 [i_7] [i_7] [i_7] [i_6 - 1] [i_6])))))))));
            }
        } 
    } 
}
