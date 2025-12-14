/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50281
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
    var_13 = ((/* implicit */unsigned char) ((var_5) >= (((/* implicit */long long int) max((((((/* implicit */int) (signed char)-32)) / (((/* implicit */int) var_6)))), (((/* implicit */int) ((signed char) var_8))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_1]), (arr_8 [i_0] [i_2])))) ? (min((arr_8 [i_1] [i_1]), (arr_8 [i_0] [i_0]))) : (min((arr_8 [i_0] [i_0]), (arr_8 [i_0] [11LL])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [(unsigned char)18] [i_2] [i_3] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_3 - 1] [i_3] [1U])) != (((/* implicit */int) arr_6 [i_0] [i_3 + 2] [i_3 + 2]))))) - (((/* implicit */int) var_2))));
                                var_15 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [0] [i_2] [i_3] [i_4])) >= (((/* implicit */int) arr_14 [i_4] [i_4] [i_2] [i_0] [i_4] [(signed char)20]))))) >> (((var_1) + (1884769399278995357LL)))));
                                var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_2))))))));
                                arr_17 [(unsigned char)2] [i_3 + 2] [i_0] [i_1] [i_0] [(unsigned char)8] [i_0] &= ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-54)), ((unsigned char)16)))), (((((((/* implicit */int) (signed char)-123)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_9 [(signed char)11] [(unsigned short)18] [i_0] [11LL] [i_0] [i_0])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [(signed char)1] [(signed char)1] [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_7 [i_0] [i_5] [3])))) | (((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_15 [11U] [11U] [i_5])) - (13076)))))))) ? (((/* implicit */int) arr_19 [i_0] [14LL])) : (((((/* implicit */int) arr_5 [i_0] [i_0] [12U])) & (((/* implicit */int) var_2))))));
            var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_12 [i_5] [(_Bool)1] [i_5])) | (((/* implicit */int) arr_7 [i_0] [i_5] [i_5]))))));
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
        {
            arr_24 [(unsigned short)7] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned int) var_2)), (1662748927U))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (arr_8 [i_0] [i_6])))) % ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) : (var_5)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    arr_32 [(unsigned char)1] [13U] [(unsigned char)18] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0])) ? (arr_30 [i_0] [i_7] [i_8]) : (arr_30 [i_0] [i_0] [i_0])));
                    arr_33 [7LL] [7LL] [i_7] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)19)))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        arr_36 [(unsigned char)3] [i_8] [(unsigned short)0] [i_6] [i_0] = ((/* implicit */unsigned int) (+(-1249944003)));
                        arr_37 [i_0] [i_6] [i_6] [i_6] [i_9] = ((/* implicit */_Bool) (-(var_1)));
                        arr_38 [0LL] [i_7] [i_8] [i_9] [(unsigned char)16] [0LL] = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)235)) >> (((((/* implicit */int) (unsigned char)248)) - (226)))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_7] [i_8])) << (((((/* implicit */int) arr_6 [3ULL] [i_6] [i_8])) - (31)))));
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -5027202841743232575LL)) ? (arr_21 [i_0] [i_6]) : (((/* implicit */long long int) -406867163)))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72)))));
                    }
                    arr_39 [i_8] [20U] [(short)20] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */int) arr_29 [i_0] [i_0] [i_7] [i_7] [i_7])) <= (((/* implicit */int) var_4))))));
                }
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_0] [i_7])))))));
                    arr_42 [i_0] [i_6] [15U] [15U] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_6] [i_6] [i_6] [i_6] [(signed char)18])) % ((~(((/* implicit */int) var_2))))));
                }
            }
            for (long long int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((arr_43 [i_6] [i_6] [i_6] [i_6]) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_0] [i_6] [(unsigned char)16])) || (((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0]))))))))));
                arr_46 [6U] [i_6] [i_6] [i_11] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_34 [(short)1] [i_6] [i_6] [i_6] [6U])) ? (((/* implicit */int) arr_7 [i_0] [i_6] [i_11])) : (var_7)))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_2))));
                var_24 = ((/* implicit */unsigned int) ((var_3) <= ((+(arr_30 [i_0] [i_6] [i_11])))));
            }
            var_25 = ((/* implicit */int) max(((~(arr_2 [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                var_26 &= ((/* implicit */unsigned int) (-(arr_45 [i_0] [i_0])));
                var_27 = ((/* implicit */long long int) var_12);
            }
            var_28 = ((/* implicit */unsigned int) (((+(((((/* implicit */unsigned long long int) -1249943995)) / (var_8))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_10 [i_0] [i_6] [i_0] [i_0])))))));
        }
        arr_51 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_10) - (var_12))), (2939894935U)))) ? ((-(((arr_31 [i_0] [i_0] [i_0] [i_0]) - (arr_41 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) var_2)) + (1249943994))))))));
    }
    var_29 = var_10;
}
