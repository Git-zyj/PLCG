/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216645
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (unsigned char)255;
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (268435455ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (var_9))))) : (var_19)));
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_19)) : (arr_5 [13ULL] [i_1]))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    for (short i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) : ((-(2075309082U)))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_14 [i_4] [i_4 - 1] [i_4] [10U])))) ? (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_3 - 1] [(unsigned char)11])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0] [i_3 - 2] [i_4])), (var_2)))) : (((/* implicit */int) max(((signed char)0), (((/* implicit */signed char) arr_1 [i_0] [i_1]))))))) : (((((/* implicit */_Bool) (-(arr_0 [i_1 + 1])))) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [3]))) : (((/* implicit */int) ((short) var_3)))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_8 [i_3]);
                        }
                    } 
                } 
                arr_17 [i_0] = arr_7 [(short)6] [8LL];
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_17)) : (2219658213U)))) ? (((((/* implicit */unsigned long long int) var_5)) | (18446744073709551597ULL))) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            {
                var_24 *= ((/* implicit */short) arr_19 [i_5] [i_5]);
                /* LoopSeq 4 */
                for (int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_25 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))))), (min((var_5), (((/* implicit */unsigned int) 2147483647))))))));
                    var_26 = ((((/* implicit */int) (unsigned char)0)) - ((-(((/* implicit */int) var_2)))));
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) ((var_4) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [13ULL])))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (arr_5 [i_5] [i_6])))) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (arr_5 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_6] [i_5] [i_9] [i_6]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6917529027641081856ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_6] [i_8] [i_8] [i_10]))))));
                                var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [10LL] [i_8] [i_9] [i_10]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_10] [i_10] [i_10])) % (((/* implicit */int) (signed char)44))))) : (arr_29 [i_5] [i_5] [i_8] [i_8] [i_10])));
                                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_5] [i_5])) || ((!(((/* implicit */_Bool) var_1))))));
                                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) -1494081399))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    arr_36 [i_11] [i_6] [i_6] [7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_11])) ? (((/* implicit */int) ((short) (signed char)-53))) : (((/* implicit */int) (!(((/* implicit */_Bool) 11529215046068469744ULL)))))))) ? (((/* implicit */int) ((var_16) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_5])))))) : (((/* implicit */int) arr_9 [i_11] [i_11] [i_11]))));
                    arr_37 [i_5] |= arr_29 [i_5] [i_6] [i_11] [i_11] [i_11];
                }
                for (long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_41 [i_5] [i_6] [i_12])) ? (arr_26 [i_5]) : (((/* implicit */int) (short)-26524)))), (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_19 [i_6] [i_12])), (arr_34 [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) arr_39 [i_12])) ? (arr_21 [i_5] [i_5] [i_12]) : (3672559776169122193ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_5] [i_6] [i_12] [i_6]))))));
                    var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_6] [i_6])) & (((/* implicit */int) ((unsigned short) max((arr_40 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */long long int) arr_9 [i_5] [i_6] [(short)12]))))))));
                }
            }
        } 
    } 
}
