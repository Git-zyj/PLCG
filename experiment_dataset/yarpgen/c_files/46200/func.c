/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46200
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) var_8);
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 2; i_4 < 24; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49884))) * (arr_9 [i_1] [i_3 - 1] [i_3 + 1] [i_4 - 1] [i_4])))), (min((((/* implicit */unsigned long long int) (signed char)-116)), (6618197942276231088ULL)))));
                                arr_12 [i_4] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */unsigned short) (-(var_11)));
                                var_15 = ((/* implicit */unsigned long long int) (((+((~(-519743407))))) > (((((/* implicit */int) (!(((/* implicit */_Bool) (short)-3476))))) >> (((/* implicit */int) arr_3 [i_2]))))));
                            }
                            for (unsigned short i_5 = 2; i_5 < 23; i_5 += 4) 
                            {
                                var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) (+(arr_1 [i_1] [(unsigned short)21])))) ? (arr_7 [i_3] [i_3] [i_3 - 3] [11LL]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_5 + 1] [i_2] [(unsigned char)1]), (((/* implicit */unsigned short) arr_6 [i_1] [5ULL]))))))))));
                                arr_15 [i_5 - 2] [i_3] [i_2] [(signed char)14] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)-3476)) != (((/* implicit */int) (short)3471))));
                                arr_16 [i_0] [(short)7] [i_2] [(short)7] [i_5] [i_5] = ((/* implicit */signed char) max((max((min((((/* implicit */unsigned long long int) var_1)), (var_2))), (((/* implicit */unsigned long long int) ((-420666734060267504LL) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), ((+((-(var_10)))))));
                                var_17 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned short)62115))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -316367109)) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))));
                                arr_21 [i_0] [16] [i_6] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (0U) : (arr_9 [i_0] [i_3] [i_2] [20] [i_0])))) ? (min((17592186044415ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [(short)4])))) : (((/* implicit */unsigned long long int) (~(arr_13 [i_0] [i_1] [(unsigned short)13]))))))));
                                arr_22 [i_0] [i_0] [i_3] [(signed char)13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) min((var_4), (((/* implicit */unsigned long long int) 2100450065)))))) ? (arr_7 [1ULL] [i_2] [i_3] [i_6]) : (((/* implicit */long long int) arr_11 [i_2] [i_2] [i_3]))));
                                var_19 = ((/* implicit */unsigned int) arr_5 [i_3 - 4] [i_3 - 3] [i_3 + 1]);
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) max(((~(arr_7 [i_0] [i_0] [(_Bool)1] [i_0]))), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (143523583U)))) / (var_3))) * (((/* implicit */long long int) -316367109))));
    /* LoopSeq 3 */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (2147483647) : (((/* implicit */int) (unsigned char)246))))) ? (max((((/* implicit */int) var_8)), (1073741696))) : (((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7] [i_7]))))) ? (((((/* implicit */_Bool) max((arr_14 [i_7] [i_7] [i_7] [(unsigned short)21] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_5 [i_7] [i_7] [i_7]))))) ? (var_11) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_7] [i_7])), (-1LL)))))) : (var_11)));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : (arr_7 [i_7] [i_7] [(short)8] [i_7]))))))) ? ((~(15293088770150019502ULL))) : (((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_4)))))))));
    }
    for (long long int i_8 = 1; i_8 < 16; i_8 += 3) 
    {
        var_24 = ((/* implicit */short) arr_2 [22LL] [i_8 + 1]);
        var_25 = ((/* implicit */signed char) max((min(((~(var_0))), (((/* implicit */int) var_1)))), (((/* implicit */int) arr_18 [(signed char)13] [i_8] [i_8 + 1] [i_8] [i_8]))));
        arr_28 [i_8] [i_8 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((arr_17 [i_8] [(short)18] [i_8] [i_8]), (var_4)))))) ? (min(((+(7442518752562158401LL))), (((/* implicit */long long int) ((unsigned char) arr_23 [i_8]))))) : (((/* implicit */long long int) (~((-(arr_13 [i_8] [i_8] [i_8]))))))));
        var_26 |= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)107))));
    }
    for (int i_9 = 3; i_9 < 13; i_9 += 4) 
    {
        arr_31 [i_9] [i_9 + 1] = ((/* implicit */unsigned long long int) var_8);
        arr_32 [i_9] [i_9] = ((/* implicit */short) arr_14 [i_9] [i_9] [i_9] [i_9] [i_9 + 2] [i_9] [i_9]);
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            var_27 = ((/* implicit */_Bool) min((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) ((unsigned char) 0U)))))), ((~(902965332)))));
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(17870283321406128128ULL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_9] [i_9] [i_9 + 1] [i_9] [i_10]))))) : (arr_10 [i_9] [(unsigned char)24]))))));
            arr_36 [i_10] [i_10] [i_9 + 3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((-(2561362392U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9 - 2])))))), (((max((arr_23 [i_10]), (((/* implicit */unsigned long long int) arr_25 [i_9])))) - (((unsigned long long int) arr_7 [i_9] [i_10] [(signed char)6] [i_10]))))));
        }
    }
    var_29 = var_12;
}
