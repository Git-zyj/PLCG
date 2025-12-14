/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25175
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [(unsigned char)3] [i_1] [(short)8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [13U]))))) ? (9223372036854775807LL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) : (arr_0 [i_0])))) ? (var_11) : (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
                        var_15 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (-9223372036854775801LL))), (((/* implicit */long long int) arr_2 [i_3] [i_0]))));
                        arr_13 [i_0] [i_1] [(signed char)14] [i_0] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((min(((~(arr_6 [(signed char)14]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))))))), (((max((arr_8 [i_0] [i_0]), (((/* implicit */unsigned int) (short)(-32767 - 1))))) - ((~(arr_8 [8ULL] [i_0]))))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            {
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [(unsigned char)2])), (17179869184ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_16 [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (unsigned char i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_23 [i_7 + 3] [i_7 + 3] [(unsigned char)4] [i_7 + 3] [i_7] [i_6])) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_11) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [10LL] [i_7 - 3] [i_7 + 4] [i_7]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)93))))) ? ((~(((/* implicit */int) (unsigned char)44)))) : (((((/* implicit */int) (signed char)-32)) | (((/* implicit */int) arr_25 [(signed char)12] [i_5] [i_8] [i_7] [i_8]))))))))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((+(var_9))) : (((/* implicit */unsigned long long int) 0U))))) ? (((min((((/* implicit */unsigned int) arr_14 [(short)2])), (0U))) - (arr_29 [i_7 - 2] [i_7] [i_7 + 2] [i_6] [i_5] [i_4]))) : (955388859U)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_11])) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_17 [(short)1]))))), (((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (955388859U)))));
                                var_21 |= ((/* implicit */unsigned char) arr_29 [(unsigned char)6] [(signed char)3] [i_5] [10U] [i_10] [(unsigned char)4]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 0U)), (((((/* implicit */_Bool) 18446744073709551611ULL)) ? ((~(9046610640113894138ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                            var_23 |= ((/* implicit */unsigned int) (unsigned char)0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_4))));
    var_25 = ((/* implicit */unsigned char) max((var_25), (var_10)));
}
