/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39981
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)6282)), (var_14)))) ? (((((/* implicit */_Bool) ((var_5) ^ (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 66846720U)) ? (var_19) : (((/* implicit */int) var_16))))) : (var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)60114)))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    var_22 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */int) arr_3 [i_3] [i_1])) >> (((11805577827763682326ULL) - (11805577827763682316ULL))))) : (((/* implicit */int) (unsigned short)5422))))) ? (max((arr_5 [i_0] [i_1 + 1] [11U] [i_2 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_19))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (((((/* implicit */_Bool) arr_0 [11U])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                        arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [i_3] = ((long long int) ((short) (signed char)45));
                        arr_11 [i_1] = ((/* implicit */short) (-(var_14)));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) var_7);
                            var_24 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (signed char)45)), (2031799237U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])) | ((~(((/* implicit */int) var_10)))))))));
                            var_25 = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60135)) ? (((/* implicit */long long int) var_19)) : (arr_7 [i_0] [i_1] [i_1 - 1] [i_2 + 1])))) ? (((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_4])) + (2147483647))) << (((((/* implicit */int) arr_1 [11LL] [i_2])) - (5361)))))) : (var_18))) : (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60135)) ? (((/* implicit */long long int) var_19)) : (arr_7 [i_0] [i_1] [i_1 - 1] [i_2 + 1])))) ? (((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_4])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_1 [11LL] [i_2])) - (5361)))))) : (var_18))) : (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])))));
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_18 [7U] [i_1] [i_2] [i_2] [(signed char)17] [i_5] = ((/* implicit */short) (signed char)-27);
                            arr_19 [(_Bool)1] [i_1 - 1] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) var_10);
                            arr_20 [i_5] [i_5] [i_2] [i_0] &= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_2 - 1] [i_1 + 1] [i_5] [10LL]))) < (var_13)))), (((long long int) arr_17 [i_1 + 1] [i_0] [i_2] [i_1] [i_5]))));
                            var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)18))))) <= (((((/* implicit */_Bool) (short)-27542)) ? (arr_16 [i_1 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5400)))))));
                        }
                        var_27 = ((/* implicit */signed char) min((var_9), (arr_7 [(unsigned short)2] [i_1] [i_2] [(unsigned short)2])));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        arr_24 [i_1] [i_1] [6LL] [i_6] = ((/* implicit */unsigned int) ((unsigned short) var_16));
                        var_28 &= 1057871933;
                    }
                    arr_25 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) ((long long int) min((619191868), (((/* implicit */int) (short)6255)))));
                }
            } 
        } 
    } 
}
