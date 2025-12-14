/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226674
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(arr_1 [i_0 - 2]))))));
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_1 [i_0]))))));
        var_20 = ((/* implicit */long long int) var_17);
        var_21 ^= ((/* implicit */unsigned long long int) (+(var_10)));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 3547585236U)), (var_13)));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) (((~(arr_8 [i_3] [i_4 + 1] [i_4] [i_4]))) | ((~((-(10693021600058159584ULL)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_4 + 1]))));
                            var_25 = ((/* implicit */unsigned short) (-(arr_8 [i_3] [i_4] [i_4] [i_4 + 1])));
                        }
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26905)) ? (1827086226U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26923)))));
                            arr_17 [i_1] [i_4] = min((((/* implicit */unsigned long long int) arr_4 [i_4 - 1])), (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_3]) : (arr_0 [i_4 + 2]))));
                            var_27 |= ((/* implicit */unsigned int) (!(((_Bool) ((long long int) arr_13 [i_1] [i_2] [i_3] [i_4] [i_2])))));
                        }
                        arr_18 [(unsigned short)3] = ((/* implicit */int) arr_6 [i_1] [i_3]);
                    }
                    for (unsigned int i_7 = 4; i_7 < 14; i_7 += 4) 
                    {
                        var_28 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)128))))), (3668303505277995219ULL))))));
                        arr_21 [i_1] [i_1] [(unsigned char)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)86))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((-125038614) >= (((/* implicit */int) var_6))))) << (((((((/* implicit */_Bool) 1896096057U)) ? (var_0) : (((/* implicit */unsigned long long int) 4294967295U)))) - (17601702723807271015ULL)))))) : (((max((arr_5 [i_7]), (((/* implicit */unsigned int) var_8)))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-6019)))))))));
                    }
                    var_29 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_2])), (max((((/* implicit */unsigned long long int) arr_15 [(signed char)7] [i_1] [i_2] [8U] [i_3] [i_3])), (((var_17) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79)))))))));
                }
            } 
        } 
    }
    var_30 ^= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_14)))) : (((((/* implicit */int) var_12)) >> (0U)))))));
    var_31 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)36663)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64826))))));
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (long long int i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((18446744073709551615ULL), (arr_8 [i_8] [(short)5] [i_8] [i_12])))) ? (((arr_27 [i_8] [i_10] [i_11] [i_12]) / (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_29 [i_8])))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_15))))) : (((-125038637) & (((/* implicit */int) var_14)))))))));
                                arr_34 [i_8] [i_8] [12ULL] [i_8] = ((long long int) var_13);
                                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) min(((-9223372036854775807LL - 1LL)), (4772289110695755098LL))))));
                                var_34 ^= ((/* implicit */int) (-(4270146830959407902ULL)));
                            }
                        } 
                    } 
                    arr_35 [i_8] [i_8] [2] = ((/* implicit */int) ((_Bool) var_8));
                    var_35 = ((/* implicit */long long int) arr_16 [i_8] [i_8] [1U] [1U] [i_8]);
                    var_36 = ((/* implicit */unsigned int) max(((unsigned short)38617), (((/* implicit */unsigned short) (unsigned char)14))));
                    arr_36 [i_8] [12U] [(short)0] |= ((/* implicit */unsigned int) ((long long int) (unsigned char)0));
                }
            } 
        } 
    } 
}
