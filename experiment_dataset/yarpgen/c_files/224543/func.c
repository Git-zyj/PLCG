/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224543
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
    for (short i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [(signed char)6] &= max((max((((unsigned short) var_1)), (((/* implicit */unsigned short) var_18)))), (((/* implicit */unsigned short) ((short) var_16))));
                var_20 ^= ((/* implicit */short) arr_3 [(signed char)2]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned char)63)))))) - (((((int) var_19)) ^ ((~(((/* implicit */int) var_4))))))));
        arr_8 [i_2] = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_4 = 3; i_4 < 13; i_4 += 4) 
            {
                var_22 -= ((/* implicit */unsigned char) arr_11 [i_3] [i_3]);
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                {
                    arr_16 [i_2] [(short)6] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_5] [i_3] [i_3] [i_2])) : (((/* implicit */int) ((short) arr_15 [i_4] [i_4] [i_2] [i_2]))));
                    arr_17 [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */short) var_8);
                    arr_18 [i_2] [i_3] [i_4] [i_4] [12U] [10] |= ((short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_11 [i_5] [i_3 + 1]))));
                    var_23 |= ((/* implicit */int) ((signed char) ((signed char) var_5)));
                    arr_19 [i_3] [i_3] [i_3] [i_5] = ((((/* implicit */_Bool) arr_11 [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_11 [i_4] [i_4 - 3])) : (((/* implicit */int) arr_11 [(unsigned char)14] [i_4 + 2])));
                }
                for (signed char i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                {
                    arr_22 [i_2] |= ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)251))))));
                    var_24 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_3])))) >= ((~(((/* implicit */int) arr_14 [(signed char)4] [i_2] [i_2] [(short)8]))))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (arr_21 [i_2] [i_2] [(signed char)4] [(signed char)4] [0])));
                        arr_26 [i_7] [i_3] [(short)2] [(short)2] [11U] [i_3] [i_2] = ((/* implicit */signed char) var_14);
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                    {
                        arr_29 [i_2] [i_3] [i_2] [(short)1] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_13 [i_2] [i_3] [i_3])))));
                        var_26 = ((/* implicit */short) (((-(((/* implicit */int) arr_20 [i_2] [i_3] [i_4] [i_6] [i_8] [i_3])))) - ((+(((/* implicit */int) (unsigned char)9))))));
                    }
                }
                for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) var_7);
                    /* LoopSeq 1 */
                    for (signed char i_10 = 3; i_10 < 14; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_2] [i_2])) - (((/* implicit */int) var_5)))))));
                        var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_17) / (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_2] [i_2])))))) ? (((((/* implicit */_Bool) arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_15 [i_2] [i_3] [(signed char)10] [i_10]) : (arr_9 [i_10 - 2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2])))));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)245)) && (((/* implicit */_Bool) 4294967295U))))))));
                    }
                }
                arr_36 [i_2] [i_3 - 2] [i_2] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_4] [14] [i_2])) | (((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (unsigned char)254)) : (-279681536)))));
                var_31 = ((/* implicit */short) min((var_31), (((short) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32738))) : (15U))))));
                arr_37 [i_2] [i_3 + 1] &= ((/* implicit */unsigned short) ((int) (signed char)-1));
            }
            /* vectorizable */
            for (short i_11 = 1; i_11 < 14; i_11 += 3) 
            {
                var_32 += ((/* implicit */unsigned short) arr_28 [(signed char)8] [i_2]);
                arr_42 [i_2] [i_3] [i_3] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */int) arr_39 [i_3] [i_3 + 1] [i_11])) + (((/* implicit */int) var_4))));
            }
            var_33 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_3)) <= ((+(((/* implicit */int) var_4))))))) / ((~(((/* implicit */int) arr_41 [i_2] [i_3 - 2] [i_2]))))));
            var_34 = ((/* implicit */short) (((~(((((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_2] [7])) >> (((((/* implicit */int) arr_41 [i_2] [i_2] [i_3 - 1])) - (60012))))))) < ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-73))))))));
        }
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_2] [i_2] [i_2])))))));
    }
    for (unsigned char i_12 = 3; i_12 < 9; i_12 += 1) 
    {
        var_36 = ((/* implicit */unsigned int) ((((var_17) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_12] [i_12])) | (arr_23 [i_12] [i_12] [i_12])))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)232)) > (((/* implicit */int) (unsigned char)15)))))))));
        arr_45 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12 - 2])) >= (((/* implicit */int) var_2))));
        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15775))) / (19U))))));
        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [(short)8] [i_12 + 1] [(short)8]))))) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) var_18)))) ^ (((/* implicit */int) arr_35 [(signed char)12] [(signed char)12] [(signed char)8] [(signed char)12] [(unsigned short)12] [i_12 - 3]))))) : (33U))))));
    }
}
