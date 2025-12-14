/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240996
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned long long int) min((1487902694U), (1487902694U))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_1 [i_1] [i_1])), (min((var_13), (((/* implicit */unsigned short) arr_1 [i_1] [i_1]))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */long long int) var_0)) : (var_8)))), (arr_5 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_4])))) << (((((((/* implicit */_Bool) min((var_3), (var_4)))) ? (arr_7 [i_2] [i_1]) : (((/* implicit */unsigned long long int) var_9)))) - (1603544869906775357ULL)))));
                        arr_15 [i_4] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [4LL])) ? (var_6) : (((/* implicit */int) (unsigned short)1))))), (min((((/* implicit */unsigned int) arr_0 [i_3])), (var_3))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            arr_18 [i_3] [i_3] [i_3] [i_3] [2ULL] [i_3] [i_3] = ((/* implicit */unsigned short) var_10);
                            arr_19 [i_4] [i_2] [i_3] [i_2] [i_4] = ((/* implicit */unsigned short) arr_4 [i_4] [i_4]);
                        }
                        arr_20 [i_1] [(unsigned char)10] [i_4] [i_3] [i_4] = ((((/* implicit */_Bool) 2807064601U)) ? (max((18ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65525))))))) : (((/* implicit */unsigned long long int) (~(var_10)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned int) var_10);
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                {
                    arr_30 [i_6] [i_7] [i_8] = ((((/* implicit */_Bool) (signed char)41)) ? ((~(18446744073709551597ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_28 [(_Bool)1] [11] [i_8] [i_7]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_33 [1] [i_6] [i_7] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_12))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) -28LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_34 [i_8] [i_9] = ((/* implicit */short) var_7);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        arr_37 [i_7] [i_7] [i_6] [(_Bool)1] [i_10] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(var_6)))), (((((/* implicit */_Bool) arr_35 [i_6] [i_7] [i_6] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_10]))) : (arr_7 [i_8] [i_8])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 1; i_11 < 24; i_11 += 3) 
                        {
                            arr_40 [(short)0] [(short)0] [(short)0] [i_8] [i_10] [i_11] = ((/* implicit */short) ((unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5)))))));
                            arr_41 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_10] [i_7] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)17))) : (var_8)))) ? (var_8) : (((/* implicit */long long int) (+(arr_25 [i_6])))))));
                        }
                        arr_42 [i_6] [i_6] [i_7] [11U] [i_10] [i_6] = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (unsigned short)65532)))));
                    }
                    arr_43 [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) var_17);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        arr_47 [i_12] [i_12] [i_7] [i_7] [i_12] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_7 [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) arr_13 [i_12] [i_7] [i_6])) : (5710967700073887182ULL)));
                        arr_48 [i_6] [i_6] [i_12] = ((/* implicit */_Bool) (unsigned short)65523);
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 2; i_13 < 23; i_13 += 2) 
                        {
                            arr_52 [i_12] [i_13] = ((/* implicit */short) var_10);
                            arr_53 [i_13 - 1] [i_13] [(signed char)6] [i_8] [i_6] [i_13] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_13] [i_6])) ^ (((/* implicit */int) ((unsigned short) arr_25 [(short)20])))));
                            arr_54 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [4LL] [i_6] [i_12])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */int) ((short) (short)20375))) : (((/* implicit */int) arr_24 [(short)15] [i_13 - 2] [i_13 + 1]))));
                        }
                    }
                }
            } 
        } 
    }
    var_20 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)255));
    /* LoopSeq 1 */
    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        arr_57 [i_14] = ((/* implicit */unsigned int) ((short) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (7180106876028135491ULL) : (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_7)))));
        arr_58 [i_14] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) var_17))));
    }
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)-20376)), ((unsigned short)65535))))));
}
