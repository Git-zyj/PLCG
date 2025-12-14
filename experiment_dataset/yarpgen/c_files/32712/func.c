/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32712
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_11 [2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_7 [i_1 - 2] [(unsigned short)5] [i_2 + 2] [(unsigned char)3]))) ? (((/* implicit */int) ((short) arr_3 [i_3]))) : (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_3 [i_1]))))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                arr_15 [(short)8] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [(short)6] [(_Bool)1] [i_3] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [(unsigned char)4] [i_4])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_6 [i_1] [i_3] [(signed char)1]))))) ? (((/* implicit */int) max((arr_12 [i_0] [i_3] [i_0] [i_3] [i_4] [2U] [i_4]), (arr_10 [1ULL])))) : (((/* implicit */int) arr_2 [i_2 + 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_7 [2U] [2ULL] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_4]))))) : (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_13 [i_0] [i_3] [i_2 + 1] [i_3] [(short)0])))))));
                                arr_16 [(unsigned char)2] [i_3] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [i_4] [(_Bool)1] [i_3] [i_2] [(unsigned char)10] [i_0])), (arr_10 [(_Bool)1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(arr_1 [7])))))) : ((((~(arr_5 [i_0] [i_2] [(_Bool)1]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned short)0] [i_3] [(unsigned short)0])))))));
                            }
                            for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
                            {
                                arr_19 [i_3] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_2 [3ULL])) | (max((arr_0 [i_1] [(unsigned char)4]), (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 2] [i_3] [i_3] [i_5])))))));
                                arr_20 [(unsigned char)0] [i_0] [i_2 - 1] [(short)2] [(short)2] &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((short) arr_14 [i_0] [i_0] [i_1 + 1]))) ? ((~(arr_18 [i_0] [(signed char)0] [(signed char)0] [(unsigned char)10]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2]))))))))));
                                arr_21 [(unsigned short)5] [i_1 - 1] [i_2] [i_2] [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_2 [i_0])) - (arr_0 [i_0] [i_0]))));
                            }
                            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) arr_14 [(short)6] [i_3] [4])), (arr_7 [(unsigned char)5] [i_1] [(signed char)7] [i_3])))))));
                            arr_22 [(unsigned char)0] [i_1 + 1] [i_0] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_8 [8U] [(unsigned char)5] [5] [i_2] [i_3] [i_3]) ? (((/* implicit */int) arr_8 [(unsigned char)11] [i_1] [i_1 - 2] [i_1 - 2] [i_3] [9LL])) : (((/* implicit */int) arr_3 [i_3])))) / (arr_0 [i_2 + 1] [2])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_13 [(unsigned char)6] [i_0] [i_2] [i_2] [i_3]))) != (((/* implicit */unsigned long long int) (-(arr_7 [i_0] [i_1 - 2] [i_2] [i_3]))))))) : ((+(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_0] [(signed char)8] [i_1] [i_0] [i_3] [2U])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_2]))))))));
                        }
                    } 
                } 
                arr_23 [i_0] [i_0] [i_1 + 1] = ((/* implicit */_Bool) arr_18 [i_0] [i_1 - 2] [i_1 - 1] [(short)0]);
                arr_24 [(_Bool)1] = ((/* implicit */unsigned int) (~(-1687611071)));
            }
        } 
    } 
}
