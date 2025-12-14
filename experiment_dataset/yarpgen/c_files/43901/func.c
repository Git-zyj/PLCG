/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43901
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
    var_12 &= ((/* implicit */signed char) var_11);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_1);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) var_8)))), (((((/* implicit */_Bool) 2549097310U)) && (((/* implicit */_Bool) (unsigned short)5493))))));
                        arr_9 [(short)4] [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */short) ((signed char) var_4));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 3; i_4 < 24; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (unsigned int i_6 = 1; i_6 < 24; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 4; i_8 < 22; i_8 += 2) 
                        {
                            var_14 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                            var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_4 - 1]))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 3) 
                        {
                            var_16 = (-(((unsigned int) (unsigned short)3)));
                            var_17 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (var_7))));
                            arr_26 [i_9 + 2] [i_5] [(unsigned short)15] [3] [i_9 + 2] [11] [(unsigned short)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_5] [i_6])))))) : (arr_18 [i_4 + 1])));
                            arr_27 [i_4] [(unsigned short)4] [6ULL] [(unsigned short)4] [i_7] [i_9] |= ((((/* implicit */_Bool) (unsigned short)61440)) ? (1745869979U) : (1745869995U));
                            arr_28 [13ULL] [i_5] [i_6] [i_7 + 3] [i_9] = ((/* implicit */unsigned int) ((arr_17 [i_4 - 2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 2; i_10 < 22; i_10 += 2) 
                        {
                            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_10))) > (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_29 [i_4] [i_7 + 1] [i_4] [i_4] [i_4]))))));
                            var_19 ^= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 647618725)) || (((/* implicit */_Bool) -647618725)))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [22ULL])) || (((/* implicit */_Bool) var_3)))))));
                            arr_31 [i_10] [i_10] [i_5] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((~(arr_10 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-3925))))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (_Bool)0)))));
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [(_Bool)1]))))) ? (((/* implicit */int) arr_30 [i_4 - 2])) : (((/* implicit */int) arr_15 [i_4 - 2] [i_4 - 2]))));
                            arr_35 [i_4 + 1] [24U] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_6 - 1] [(signed char)19])) ? (((/* implicit */int) arr_12 [i_4] [i_4])) : (((/* implicit */int) arr_24 [i_11] [i_11] [i_5] [i_5] [i_6 + 1] [i_5] [i_4 - 1]))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))))));
                        }
                        for (unsigned char i_12 = 4; i_12 < 22; i_12 += 2) 
                        {
                            arr_40 [i_12] [i_5] [19LL] [i_7] [(unsigned char)21] [2U] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_18 [i_6]) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_29 [i_4 + 1] [i_6 + 1] [1LL] [i_7 + 3] [i_12 - 4]))));
                            var_23 -= ((/* implicit */unsigned short) var_10);
                            var_24 = ((/* implicit */unsigned int) var_10);
                            arr_41 [i_4] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [(short)0] [i_12] [i_12 - 1] [i_7 + 2] [i_4])) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((var_8) - (2734515943U)))))) : (((((/* implicit */_Bool) arr_37 [i_4])) ? (arr_37 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        }
                        var_25 *= ((unsigned int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_11))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */int) ((unsigned int) var_11));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 1; i_13 < 24; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_32 [i_4] [i_4] [(signed char)15] [i_4 - 1] [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_4] [i_13 - 1] [i_14] [i_15])) ? (((/* implicit */int) arr_45 [i_4 + 1] [i_13] [i_14])) : (((/* implicit */int) var_6)))))));
                        /* LoopSeq 4 */
                        for (long long int i_16 = 0; i_16 < 25; i_16 += 2) 
                        {
                            arr_52 [i_13] [13LL] [i_14] [i_15] [i_16] = var_6;
                            arr_53 [i_13] [21ULL] [(short)8] [i_15] [(short)8] [i_13] [i_13] = ((/* implicit */unsigned char) ((arr_19 [i_13 - 1] [i_13] [i_4 - 2] [(_Bool)1]) - (((/* implicit */int) arr_39 [i_4 - 1] [i_13] [i_14] [i_13 + 1] [i_14]))));
                            arr_54 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_23 [i_4] [i_13 + 1] [i_14] [i_4] [i_16])))) ? ((+(((/* implicit */int) arr_21 [(_Bool)1] [i_15] [i_14] [i_15] [i_16])))) : (((/* implicit */int) ((_Bool) var_11)))));
                            var_28 -= ((/* implicit */unsigned int) (-((+(var_1)))));
                            arr_55 [i_4] [i_13] [i_14] [i_15] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [4LL] [i_13 + 1])) : (((/* implicit */int) arr_29 [i_13] [i_13] [i_13 - 1] [i_13 + 1] [i_13 - 1]))));
                        }
                        for (unsigned char i_17 = 2; i_17 < 24; i_17 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_33 [i_4] [i_13] [(unsigned char)20] [i_15] [i_15]))))));
                            arr_59 [i_13] [i_15] [18ULL] [18ULL] [i_13] = ((/* implicit */unsigned int) ((((arr_46 [i_4] [i_13] [i_14] [(_Bool)1]) ^ (((/* implicit */int) var_10)))) & ((+(((/* implicit */int) var_5))))));
                            arr_60 [i_4] [i_13] [i_13] [i_15] [(unsigned short)22] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 647618724)) : (2549097310U));
                        }
                        for (unsigned long long int i_18 = 1; i_18 < 23; i_18 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_18] [i_18] [i_18] [8ULL] [8ULL] [i_13 + 1] [i_4]))) | (var_7)))) | ((~(arr_47 [i_4] [(short)23] [8U])))));
                            var_31 = ((/* implicit */_Bool) var_3);
                        }
                        for (unsigned short i_19 = 0; i_19 < 25; i_19 += 1) 
                        {
                            arr_66 [i_4] [(unsigned short)14] [9U] [(_Bool)1] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                            arr_67 [i_13] [(short)9] [i_14] [i_15] [(unsigned char)21] [i_19] = ((/* implicit */short) (!(((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_11))))));
                            var_32 = ((/* implicit */short) var_7);
                            arr_68 [i_4 - 2] [i_13] [i_4 - 2] [i_15] [i_13] = ((/* implicit */signed char) var_8);
                        }
                    }
                } 
            } 
            arr_69 [8U] [i_13] = ((/* implicit */unsigned char) ((unsigned long long int) var_1));
        }
    }
}
