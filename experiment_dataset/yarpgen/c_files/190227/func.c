/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190227
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
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_4 [i_1] [i_0] [i_0] &= ((/* implicit */unsigned int) var_13);
            arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16543)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)11] [(_Bool)1])))))) ? ((-(arr_2 [i_1]))) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1192188454) >= (((/* implicit */int) arr_3 [i_0] [1LL]))))))));
        }
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                arr_14 [i_3] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_2)), (var_8))), (((/* implicit */unsigned int) arr_10 [i_0] [i_2 + 3]))))) : (((long long int) arr_10 [i_0] [i_2]))));
                arr_15 [i_3] [i_0 + 2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_5)), (arr_1 [i_0 - 1] [i_2 - 1])));
            }
            arr_16 [i_0] = ((/* implicit */unsigned int) var_3);
        }
        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            arr_20 [i_4] [i_4] = ((/* implicit */_Bool) var_8);
            /* LoopSeq 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    arr_27 [i_0] [(unsigned short)19] [6ULL] = var_3;
                    arr_28 [i_0] [i_4] [i_0] [i_6] = ((unsigned short) var_0);
                    arr_29 [i_4] = ((/* implicit */_Bool) var_2);
                    var_16 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)47332), (arr_25 [i_6] [i_6 + 2] [i_6] [i_6 - 1] [i_6 + 3] [i_6 + 3]))))))), ((+(min((arr_23 [i_6] [i_5 - 1] [i_4] [(unsigned char)17]), (((/* implicit */unsigned int) arr_10 [i_0] [i_0]))))))));
                    var_17 *= ((/* implicit */unsigned int) var_3);
                }
                for (long long int i_7 = 3; i_7 < 21; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */short) ((unsigned char) ((unsigned int) arr_10 [i_0 - 1] [i_7 - 3])));
                        arr_37 [i_7] [i_4] [i_5 - 1] [(short)11] [i_4] = ((/* implicit */long long int) (short)31090);
                        arr_38 [i_0 + 2] [(unsigned short)0] [i_5] [i_5] [i_7 + 2] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_19 [i_0 + 2] [i_4 + 1]) - (arr_19 [i_0 - 1] [i_0 + 1]))))));
                    }
                    arr_39 [i_0] [i_5] [i_7] [i_0] [i_0] [i_7 - 1] = ((-1192188468) + (((/* implicit */int) ((unsigned short) arr_30 [i_0] [i_4] [i_7] [i_7]))));
                }
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 3) 
                    {
                        {
                            arr_44 [(short)4] [i_4] [i_5] [i_10] [i_10] = ((/* implicit */unsigned char) arr_33 [i_0] [i_4] [i_9] [i_10]);
                            var_19 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) 4294967295U)), (arr_2 [i_0 - 1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65535))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) var_4);
            }
            for (unsigned int i_11 = 1; i_11 < 22; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    for (int i_13 = 1; i_13 < 22; i_13 += 3) 
                    {
                        {
                            arr_53 [i_0 - 1] [i_4] [1U] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_33 [i_4 - 1] [i_11 - 1] [i_13 - 1] [i_13])), (min((((/* implicit */unsigned int) arr_45 [i_0] [i_12] [i_13])), (var_14))))) / (((/* implicit */unsigned int) ((/* implicit */int) (((-(18446744073709551615ULL))) != (((/* implicit */unsigned long long int) -1192188468))))))));
                            arr_54 [i_13] = ((/* implicit */short) (-(((/* implicit */int) max((arr_50 [i_4] [i_4] [(unsigned short)4] [i_13]), (((/* implicit */signed char) ((((/* implicit */int) var_10)) <= (var_11)))))))));
                            arr_55 [22U] [2LL] &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_58 [i_11] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_51 [i_0 - 1] [i_4 - 1] [i_11 + 1] [i_14] [(unsigned short)20] [i_11 + 1] [i_11 + 1]))));
                    arr_59 [i_0] [(signed char)7] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1192188468)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_4 - 1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_4 - 2]))));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_12))));
                        var_22 ^= ((/* implicit */unsigned long long int) ((arr_19 [19ULL] [i_0 + 2]) % (((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_0] [(unsigned char)2] [i_0 + 2] [(unsigned short)4]))));
                    }
                }
                arr_62 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_26 [i_0 - 1]) * (arr_26 [i_4 + 1])))) ? (((((/* implicit */_Bool) arr_26 [i_0 + 1])) ? (arr_26 [i_0 + 1]) : (arr_26 [i_11 - 1]))) : (((((/* implicit */_Bool) var_13)) ? (arr_26 [i_4 - 2]) : (arr_26 [i_4 - 1])))));
            }
        }
        arr_63 [i_0] = ((/* implicit */unsigned char) (~(((int) arr_12 [i_0] [(short)14]))));
        arr_64 [(unsigned short)16] = (_Bool)1;
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2]))))))))));
    }
    for (unsigned long long int i_16 = 1; i_16 < 22; i_16 += 2) 
    {
        arr_69 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150))) : (682828313830139574ULL)));
        var_24 = ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) arr_65 [i_16])))) ? (((/* implicit */int) ((short) arr_67 [i_16]))) : (((/* implicit */int) arr_68 [i_16]))))));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)63541))))), (var_12))))));
    }
    var_26 = ((/* implicit */unsigned int) (+(var_11)));
}
