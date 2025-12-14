/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38196
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) 3398797450U)) ? (9840390292521286389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))));
                var_13 = ((/* implicit */int) arr_2 [i_0] [9ULL]);
                var_14 = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4]))) : (8606353781188265224ULL))))));
                                arr_14 [i_0] [i_1] [i_0] [7LL] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) min(((-(1415798712U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_4 - 3] [i_4 + 1] [i_4 - 1] [i_4] [i_4])) ? (((/* implicit */int) arr_13 [i_3 + 1] [i_0] [i_4 - 2] [i_0] [i_4])) : (((/* implicit */int) arr_13 [(_Bool)1] [i_0] [i_3] [i_3] [i_3])))))));
                                var_16 = ((((((/* implicit */_Bool) 574784193U)) ? (598943882) : (((/* implicit */int) (signed char)63)))) - (((/* implicit */int) arr_5 [i_3 + 2] [i_0])));
                                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)4095)) > ((-2147483647 - 1))))) > (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_3] [i_4])))) ? ((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_4 - 2] [i_4] [i_4 - 4])))) : (((((/* implicit */_Bool) min((4294967295U), (arr_7 [i_4] [i_0] [i_0] [(short)1])))) ? ((-(((/* implicit */int) arr_0 [i_2] [17ULL])))) : (((/* implicit */int) var_10))))));
                                var_18 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_0 [i_0] [(short)17])))) <= ((~(((/* implicit */int) arr_2 [i_0] [i_4])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 896169845U)) > (8606353781188265226ULL)))) : (((/* implicit */int) arr_5 [i_1] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_19 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [(short)16] [i_2] [i_0])) ? (2937261574U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) / (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 14869975571901043066ULL)) ? (arr_11 [i_0] [i_1] [18] [(signed char)15]) : (((/* implicit */int) arr_10 [(signed char)0] [i_1] [(signed char)0] [i_5] [i_1] [(signed char)0])))))))));
                        var_20 |= ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_2] [i_0]);
                        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) / (896169817U)));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2210591483U)))) ? (arr_16 [i_1] [i_1] [i_2] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)5)))))))));
                        var_24 = ((/* implicit */int) ((arr_4 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65512)))));
                        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (var_11) : (((/* implicit */int) (unsigned short)34539)))) - (((/* implicit */int) arr_0 [i_1] [i_1]))));
                    }
                    arr_20 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_0] [(unsigned char)17] [5LL] [17U] [i_1] [i_0]))));
                }
                for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_0] [18ULL] [i_9] = ((arr_22 [i_1]) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) -1249351692)) > (9329438175965640779ULL)))));
                                var_26 |= ((/* implicit */unsigned int) ((_Bool) ((((var_0) & (((/* implicit */unsigned long long int) arr_19 [i_1] [i_1])))) / (((/* implicit */unsigned long long int) (-(arr_1 [i_1])))))));
                                var_27 = ((((/* implicit */unsigned int) ((int) -1444073321))) * (2430908693U));
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((unsigned char) 3398797446U)))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) / (9329438175965640786ULL)));
                }
                var_30 = ((/* implicit */long long int) arr_12 [(unsigned short)15] [i_0]);
            }
        } 
    } 
    var_31 *= ((/* implicit */unsigned long long int) (short)0);
    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)21)))))));
}
