/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21149
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
    var_15 = ((/* implicit */signed char) var_8);
    var_16 = ((/* implicit */unsigned short) -1039216014083905994LL);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_17 = ((/* implicit */unsigned char) ((((arr_0 [i_0 + 1]) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) ((unsigned short) var_14)))));
                var_18 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_4 [i_2])))));
            }
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    var_19 ^= ((/* implicit */signed char) arr_3 [(short)0]);
                    arr_14 [i_0] [i_0] [i_3] [i_3] [i_4] [i_0] = ((_Bool) ((long long int) var_1));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_11 [i_0 + 1] [i_0 - 2] [i_3] [i_4])));
                    var_21 = ((/* implicit */short) (unsigned short)27596);
                    arr_15 [i_4 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_0] [i_1] [i_3] [i_5] = var_5;
                    var_22 = arr_6 [i_0] [i_1] [i_3] [(unsigned short)7];
                    var_23 *= ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 2] [i_0 - 2])) > ((+(((/* implicit */int) arr_7 [i_1]))))));
                    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)37919)))))));
                }
                arr_19 [i_1] = ((/* implicit */unsigned short) var_2);
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_0))));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((_Bool) ((arr_3 [i_1]) || (((/* implicit */_Bool) arr_11 [i_8] [i_6] [i_0 - 2] [i_0 - 2])))));
                            var_27 = ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [i_1]));
                            var_28 = ((/* implicit */short) arr_17 [(unsigned char)13]);
                            arr_27 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_0 - 2] [i_0 - 1] [i_6 + 3]));
                            var_29 = ((/* implicit */signed char) var_12);
                        }
                    } 
                } 
                arr_28 [i_6] = ((/* implicit */unsigned short) arr_2 [9U]);
                var_30 = ((/* implicit */long long int) var_1);
                var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_6] [i_0]))));
            }
            for (int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 2; i_10 < 13; i_10 += 4) 
                {
                    arr_34 [i_10 - 1] [i_0 + 1] = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0 + 1] [1LL]);
                    arr_35 [i_9] [i_1] [i_1] [i_10] = ((/* implicit */int) ((unsigned short) 0));
                }
                arr_36 [4LL] [i_1] [i_1] [(_Bool)1] = ((/* implicit */long long int) (unsigned short)0);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    var_32 ^= ((/* implicit */unsigned long long int) var_8);
                    var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) var_8)))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((short) 750804143));
                        var_35 = ((/* implicit */short) ((int) arr_2 [i_9]));
                    }
                    arr_42 [i_0] [i_1] [i_9] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
                }
                for (unsigned char i_13 = 2; i_13 < 12; i_13 += 1) 
                {
                    arr_46 [i_0] [3] [i_1] [i_9] [i_9] = ((/* implicit */_Bool) (unsigned short)37919);
                    var_36 = ((/* implicit */_Bool) (unsigned short)27610);
                }
                arr_47 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((((((/* implicit */int) var_0)) >= (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_0] [i_0] [(_Bool)1]))) : (arr_10 [i_0] [(short)0] [i_0] [i_9]))))) == (((/* implicit */unsigned long long int) arr_39 [i_1] [i_0]))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 4; i_14 < 11; i_14 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    var_37 = ((/* implicit */int) ((long long int) 17553568176808103284ULL));
                    var_38 = ((/* implicit */signed char) ((short) arr_40 [2U] [2U] [6ULL] [i_14] [i_15 + 1]));
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_39 = ((/* implicit */signed char) ((int) var_1));
                        arr_56 [i_0] [i_1] [i_14] [i_15] [i_16] [i_16] [i_16] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : ((+(arr_11 [i_1] [(unsigned char)13] [i_15] [i_15])))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1)))))));
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((signed char) ((_Bool) var_1))))));
                        arr_59 [i_0] = ((/* implicit */short) arr_37 [i_14 + 3] [i_14 - 1] [i_14 - 2] [i_14 + 3] [i_14 - 3]);
                    }
                }
                for (unsigned short i_18 = 3; i_18 < 11; i_18 += 2) 
                {
                    arr_63 [(unsigned short)10] [6LL] [i_14] [i_18 - 2] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) var_10)))));
                    var_42 = ((/* implicit */int) var_0);
                }
                /* LoopSeq 3 */
                for (unsigned short i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    arr_66 [i_14] [i_14] [i_14 - 3] [i_14] = ((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) | (((/* implicit */int) (_Bool)0))));
                    var_43 ^= ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
                    arr_67 [i_0] [i_0] [i_14] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_50 [i_14 - 2] [i_14 + 2] [i_0 + 1]))));
                }
                for (short i_20 = 1; i_20 < 10; i_20 += 2) 
                {
                    var_44 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7))));
                    var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6))))))));
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_10 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_14] [(short)8] [i_14]))) : (140601299U)));
                    arr_70 [i_0 - 2] [i_1] [i_20] [i_20 - 1] = ((/* implicit */unsigned int) ((int) arr_12 [i_20] [i_14 + 2] [i_1] [i_0 - 1]));
                }
                for (int i_21 = 3; i_21 < 11; i_21 += 1) 
                {
                    var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_71 [i_0] [i_1] [i_14] [i_0])) < (((/* implicit */int) arr_21 [i_0 - 2] [i_1] [i_0 - 2]))));
                    var_48 = ((/* implicit */short) 608107183948188273LL);
                }
            }
        }
        var_49 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) ((var_5) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)0)))))), (((unsigned int) var_13))));
    }
    /* vectorizable */
    for (signed char i_22 = 1; i_22 < 14; i_22 += 4) 
    {
        var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) % (((/* implicit */int) ((unsigned char) var_0)))));
        arr_75 [i_22] [3U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_73 [i_22]))))) ? (4133690973U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
        arr_76 [i_22] [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) arr_73 [i_22 - 1]))));
    }
    var_51 = ((/* implicit */short) var_2);
}
