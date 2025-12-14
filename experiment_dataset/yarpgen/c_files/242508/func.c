/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242508
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
    var_20 = ((/* implicit */short) var_13);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1019450263)));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((/* implicit */int) var_14)))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((long long int) arr_3 [i_1] [(unsigned char)17])))));
        arr_7 [(signed char)18] [(signed char)18] |= ((((/* implicit */_Bool) 2147483630)) ? (-1237142604) : (((/* implicit */int) (unsigned char)12)));
        arr_8 [i_1] = ((/* implicit */short) var_13);
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) var_17);
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (int i_5 = 2; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_25 = ((/* implicit */long long int) var_11);
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (+(var_3))))));
                        var_27 = ((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1] [i_3 - 2]);
                        var_28 += ((/* implicit */int) ((((/* implicit */_Bool) (~(var_8)))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)125)) ? (1019450246) : (-1237142623))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) -1326141418979234303LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)151))))))));
        }
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2]))));
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 16; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        for (signed char i_9 = 2; i_9 < 17; i_9 += 3) 
                        {
                            {
                                arr_30 [i_2] [i_6] [i_7] [4ULL] [14] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((arr_19 [7ULL] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
                                var_31 = ((/* implicit */unsigned char) min((var_31), (var_11)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_32 -= ((/* implicit */unsigned short) var_16);
                        arr_35 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) var_11);
                    }
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_15 [(short)11] [i_6 - 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6]))) : (var_6)))))) ? ((-(arr_12 [i_2] [i_6] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-48)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_11 = 1; i_11 < 8; i_11 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            arr_40 [i_11] = ((/* implicit */unsigned short) arr_26 [i_11 + 1] [i_11 - 1] [i_12] [i_11 + 1]);
            arr_41 [2U] [i_12] [i_12] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1471943264)) ? (var_6) : (((/* implicit */long long int) arr_14 [i_12] [i_12] [i_11] [i_11]))));
            var_34 ^= ((/* implicit */unsigned short) var_3);
        }
        var_35 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(short)2])) ? (-1) : (((/* implicit */int) (signed char)103))));
        arr_42 [i_11] = (+(arr_32 [i_11 + 1] [i_11 + 2] [i_11 + 2]));
        /* LoopSeq 2 */
        for (unsigned short i_13 = 2; i_13 < 9; i_13 += 1) 
        {
            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(-1237142581)))))))));
            /* LoopSeq 2 */
            for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                var_37 ^= ((/* implicit */unsigned char) ((unsigned long long int) 2575129451405062865LL));
                var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)202)) ? ((~(arr_1 [14U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
            }
            for (int i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                var_39 = ((/* implicit */int) ((unsigned int) arr_39 [i_11]));
                arr_51 [i_11] [i_13] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_11 [i_11 + 3]));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            var_40 = ((/* implicit */signed char) ((long long int) arr_11 [i_11 + 3]));
            arr_55 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_11] [i_11 + 1] [i_11 + 1] [i_16])) % (((/* implicit */int) arr_33 [i_11] [i_11] [i_16] [i_11] [i_16]))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_11 [i_11]) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) arr_10 [(_Bool)1]))));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_60 [i_11] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-34)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) 7628499161405028220LL)))));
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (signed char)53))));
                        /* LoopSeq 3 */
                        for (unsigned char i_19 = 2; i_19 < 10; i_19 += 3) 
                        {
                            var_42 = ((((/* implicit */int) arr_53 [i_11] [i_19 - 2] [i_19 - 2])) % (((/* implicit */int) var_7)));
                            var_43 = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)-34));
                            var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_11 + 1] [i_11 - 1])) < (((/* implicit */int) arr_3 [i_11 + 2] [i_11 + 1])))))));
                        }
                        for (signed char i_20 = 0; i_20 < 11; i_20 += 3) 
                        {
                            arr_67 [i_11] [i_16] [i_17] [4] [i_20] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)224))));
                            var_45 = (~(((/* implicit */int) arr_38 [i_11 + 1])));
                        }
                        for (int i_21 = 0; i_21 < 11; i_21 += 1) 
                        {
                            arr_70 [i_11] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_11 + 3] [i_11 - 1] [i_11 - 1] [i_11])) ? (((/* implicit */int) arr_53 [i_11] [i_11 + 1] [i_11])) : (((/* implicit */int) (unsigned char)75))));
                            var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)163)) ? ((-(((/* implicit */int) arr_9 [(_Bool)1])))) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                } 
            } 
        }
    }
}
