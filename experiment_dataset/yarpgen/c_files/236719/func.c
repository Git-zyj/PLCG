/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236719
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
    var_12 ^= ((/* implicit */short) ((unsigned char) (unsigned short)35494));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((unsigned long long int) max(((unsigned short)4094), (((/* implicit */unsigned short) (short)50))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((/* implicit */int) max((arr_2 [i_0]), ((short)-28931)))))))));
        var_15 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)70), ((short)17978))))) != (((unsigned int) (short)24200))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((unsigned short) arr_0 [14ULL] [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_17 = (short)4095;
        arr_7 [i_1] |= min((min((arr_4 [i_1]), (arr_5 [i_1]))), (arr_5 [i_1]));
    }
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17832560082524799071ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 614183991184752544ULL)))))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) ((614183991184752544ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29577)))))))))));
            arr_16 [i_2] [(short)9] [i_3] = ((/* implicit */unsigned short) 546376252U);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                arr_19 [i_2] [(short)6] [6] = ((/* implicit */unsigned char) (~(arr_12 [i_2] [i_4 + 1] [i_4])));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    arr_22 [i_3] [i_5] = ((/* implicit */int) ((unsigned short) arr_21 [i_2] [i_4 - 1] [i_2] [i_5]));
                    arr_23 [i_5] [i_4 - 1] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_12 [(unsigned char)2] [i_3] [i_4 - 1]) : (arr_12 [i_2] [i_2] [i_5])));
                    arr_24 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */short) ((arr_12 [i_2] [i_3] [i_4]) & (arr_12 [i_2] [i_3] [i_5])));
                }
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_4 - 2] [i_4 + 1])))))));
            }
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                arr_27 [i_2] [(short)9] [i_6] = ((/* implicit */short) (unsigned char)0);
                /* LoopNest 2 */
                for (unsigned char i_7 = 4; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 614183991184752570ULL)) ? (((/* implicit */int) arr_10 [i_7 - 3])) : (var_11)));
                            var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_32 [i_7 - 4] [i_7 - 1] [i_7 + 1] [i_8] [i_7 - 1] [i_7 - 1] [(short)1]))));
                            var_22 = arr_15 [i_8];
                            var_23 *= ((/* implicit */unsigned char) ((int) (short)32767));
                            var_24 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) var_5)))));
                        }
                    } 
                } 
            }
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                arr_37 [i_3] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) arr_34 [i_2] [i_2] [i_3] [i_9] [i_2] [i_9]))))) && (((/* implicit */_Bool) max((arr_25 [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_36 [i_3])))))));
                arr_38 [i_3] [(short)7] &= ((/* implicit */short) arr_3 [i_9]);
            }
            arr_39 [i_2] = ((/* implicit */short) (unsigned short)22268);
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((short) arr_33 [i_2] [i_2] [i_2] [i_10] [i_2])))));
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                arr_47 [i_11] = arr_33 [i_2] [(short)12] [i_2] [i_2] [i_11];
                arr_48 [i_2] [(short)3] [(short)3] [i_11] = ((/* implicit */int) ((short) 17832560082524799060ULL));
                var_26 = ((/* implicit */unsigned short) arr_44 [i_2] [i_10] [(short)12] [i_11]);
            }
            for (unsigned char i_12 = 2; i_12 < 14; i_12 += 4) 
            {
                arr_51 [i_2] [i_10] [i_12 + 1] = ((/* implicit */short) arr_50 [i_12 - 1] [i_12] [i_12 - 1] [i_12]);
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((unsigned int) arr_25 [i_2] [i_14]));
                            arr_57 [(unsigned char)4] [i_12 - 2] [(unsigned char)2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)1))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)6424)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1117974916U)))) : (arr_55 [(unsigned char)7] [i_12 - 2] [12ULL] [i_12 - 2] [i_12 - 2] [i_12 - 2])));
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 15; i_16 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_12 + 1] [i_12 - 1] [(unsigned char)14])) >= (((/* implicit */int) arr_42 [i_12 + 1] [i_12 - 1] [(unsigned char)2]))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)18)))))));
                        arr_62 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (short)15113))) ? (((/* implicit */int) ((((/* implicit */int) arr_44 [(unsigned char)8] [i_10] [i_12 - 2] [i_16])) < (((/* implicit */int) var_8))))) : (((/* implicit */int) ((unsigned char) (short)48)))));
                        arr_63 [i_2] [i_15] = ((/* implicit */unsigned char) arr_25 [i_2] [i_2]);
                        arr_64 [i_2] [i_10] [i_15] [(short)2] [1U] = var_11;
                    }
                    for (unsigned short i_17 = 3; i_17 < 13; i_17 += 2) 
                    {
                        var_31 = ((/* implicit */int) ((short) arr_67 [i_2] [i_10] [i_12 - 1] [11] [i_10] [i_15] [i_17 - 1]));
                        arr_68 [i_15] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_2] [i_10]))));
                        arr_69 [i_2] [(unsigned char)3] [i_12 + 1] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_12 - 2]))));
                    }
                }
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [(unsigned char)10] [i_10] [i_10] [i_10] [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_54 [i_10] [i_10] [12] [i_12] [i_12 - 2] [i_12 - 1]))));
            }
        }
        arr_70 [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */int) arr_4 [i_2])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) (short)32704))))));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) - (((/* implicit */int) arr_4 [i_2])))), (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) arr_58 [i_2])) : (-1)))))) > (arr_9 [(unsigned char)9] [i_2])));
        var_34 = ((/* implicit */short) (-(min((1542397321), (((/* implicit */int) (short)48))))));
    }
}
