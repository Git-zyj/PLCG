/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48157
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min(((short)6724), ((short)6703)))) : (((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) var_3))))))) : (var_3)));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((int) arr_1 [i_0 + 3]));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0 + 3])), (arr_1 [i_0 - 1])))) ? (((int) arr_0 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 2])) != (((/* implicit */int) (unsigned char)199)))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_16 [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_8 [i_3]) : (arr_8 [i_2]))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_14 [6ULL])) ? (((/* implicit */long long int) arr_4 [i_1])) : (arr_8 [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (signed char)-112))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) ^ (arr_8 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [(unsigned char)13])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_12 [i_3] [i_1] [7ULL] [i_1]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_6 [i_1])))))))));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-6709)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (signed char)-48))));
                            }
                        } 
                    } 
                    arr_25 [i_3] [5U] [i_2] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */short) arr_6 [i_3])), (arr_17 [i_1] [i_2] [i_3] [i_3]))))) ? (arr_15 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_1] [i_2 + 1] [i_2] [i_2 + 1]), (((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-48)), ((unsigned char)168))))))))));
                    arr_26 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) min((((int) arr_7 [i_2 - 1])), (((/* implicit */int) (short)-26813))));
                }
            } 
        } 
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)169)) < (((/* implicit */int) (signed char)55)))) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)7] [i_1])) : (max((17), (((/* implicit */int) (unsigned char)11))))))) / (min((7696581394432ULL), (((/* implicit */unsigned long long int) arr_23 [i_1] [i_1] [i_1] [i_1] [(short)8]))))));
        var_15 += ((int) (unsigned char)103);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (+(((int) arr_7 [i_1])))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        arr_37 [i_8] [i_8] = ((/* implicit */unsigned int) ((((((-5140859673464482346LL) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */_Bool) (signed char)-25)) ? (25U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) - (25U)))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_32 [i_1] [i_7] [i_1]))) ? (((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) arr_18 [i_7] [i_6])) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_7] [i_8])))) : (((/* implicit */int) ((unsigned char) arr_22 [i_6]))))))));
                        arr_38 [i_1] [i_6] [i_8] [i_8] = ((/* implicit */unsigned char) ((int) ((signed char) arr_11 [i_7])));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_6])))))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 4; i_9 < 19; i_9 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1])) < (((/* implicit */int) arr_5 [i_1])))))));
            var_21 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_21 [(unsigned char)2] [i_9 + 2] [(short)13] [9LL] [(short)13] [i_1] [i_1])) ? (677202179) : (((/* implicit */int) arr_6 [(unsigned char)0])))));
            arr_41 [4] [i_9 - 2] = ((/* implicit */short) ((_Bool) ((unsigned long long int) arr_22 [i_1])));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((short) arr_35 [i_9] [i_9] [i_9 + 2] [i_9] [(signed char)16])))));
        }
    }
    /* vectorizable */
    for (short i_10 = 1; i_10 < 15; i_10 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            arr_47 [5ULL] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (short)6716)) << (((/* implicit */int) (short)15))));
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_11] [i_11] [1LL] [i_11 - 1] [i_11 - 1]))) & (arr_43 [i_10 + 2]))))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (short)-6725)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-48)))))));
        }
        for (short i_12 = 3; i_12 < 15; i_12 += 1) 
        {
            arr_50 [i_12] [(short)0] [i_12 - 3] = ((/* implicit */unsigned char) arr_9 [i_10] [i_12 + 1]);
            arr_51 [i_10] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_10] [i_12 - 1])) ? (arr_36 [i_10] [i_10 - 1] [i_10 - 1] [(unsigned char)2]) : (((/* implicit */int) arr_46 [i_10 - 1] [i_10 + 2] [i_10]))));
            arr_52 [i_10 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_13 [i_10] [i_12] [i_12]))) ? (((((/* implicit */_Bool) arr_36 [i_10 - 1] [i_10 - 1] [i_10 - 1] [(unsigned char)12])) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) (short)-6703)))) : (((/* implicit */int) (short)(-32767 - 1)))));
            var_25 = arr_14 [i_12 + 1];
            var_26 = ((/* implicit */short) ((arr_35 [i_10] [i_12] [i_10] [i_12 + 1] [i_12 - 2]) != (arr_34 [(short)12] [i_12] [i_12] [i_12])));
        }
        for (int i_13 = 3; i_13 < 16; i_13 += 3) 
        {
            var_27 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 902035728)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6714))) : (arr_15 [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) : (((((/* implicit */_Bool) arr_48 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10]))) : (arr_48 [i_13]))));
            var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_10 + 1] [i_10 + 2])) ? (((/* implicit */int) arr_18 [i_10 + 1] [i_10 - 1])) : (((/* implicit */int) arr_18 [i_10 - 1] [i_10 + 1]))));
        }
        arr_57 [i_10] [i_10] &= ((/* implicit */unsigned int) ((short) arr_54 [i_10 - 1] [i_10 + 2]));
        arr_58 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6722)) ? (((/* implicit */int) arr_21 [(unsigned char)13] [(unsigned char)13] [i_10] [i_10] [i_10] [i_10 - 1] [(unsigned char)5])) : (((/* implicit */int) arr_33 [i_10]))))) ? (arr_39 [i_10] [i_10 + 2] [i_10]) : (((((/* implicit */_Bool) arr_39 [(unsigned char)12] [i_10] [(unsigned char)12])) ? (((/* implicit */int) (short)-4)) : (arr_49 [i_10] [i_10])))));
        arr_59 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_10 + 2] [i_10] [i_10 + 2])) ^ (((/* implicit */int) (short)14972))))) ? (((((/* implicit */_Bool) (short)14977)) ? (((/* implicit */int) arr_14 [(short)1])) : (((/* implicit */int) arr_30 [i_10] [i_10] [i_10])))) : (((int) (short)-14958)));
        /* LoopNest 2 */
        for (unsigned char i_14 = 3; i_14 < 15; i_14 += 2) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((3329357057U) ^ (947320363U))))));
                    var_30 = ((/* implicit */unsigned long long int) ((short) arr_7 [i_10 + 2]));
                }
            } 
        } 
    }
}
