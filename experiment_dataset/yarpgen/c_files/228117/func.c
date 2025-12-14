/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228117
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
    var_11 &= ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) ((unsigned char) var_7)))))) ? (min((var_4), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (var_9)))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_14 = ((/* implicit */short) ((unsigned long long int) ((long long int) var_0)));
            arr_8 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) ^ (((4027053259878215795ULL) / (((/* implicit */unsigned long long int) 654536461))))));
            /* LoopNest 3 */
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) ((signed char) arr_9 [i_1] [i_2 + 1]));
                            arr_18 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [(_Bool)1] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_3 [i_0]))))) * (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2]))) : (arr_13 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        var_15 = ((/* implicit */int) arr_19 [i_5 + 2] [i_5 + 2] [i_5 + 2]);
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_29 [i_6] [(unsigned short)9] [(unsigned short)9] [i_7] = ((/* implicit */unsigned short) arr_25 [i_0] [i_7] [i_8]);
                            arr_30 [i_0] [i_6] [i_6] [2] [i_7] [13LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? ((+(((/* implicit */int) var_6)))) : (arr_16 [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_6] [i_5 + 1] [i_5 + 2] [i_5 + 1])));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_5] [i_6] [(_Bool)1] [i_7] &= ((/* implicit */unsigned char) var_6);
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(var_1)))) & ((+(arr_14 [i_0] [i_0] [i_6]))))))));
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            arr_38 [i_0] [i_0] [i_0] [i_6] [i_7] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_14 [i_10] [i_6] [i_6]) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((unsigned int) var_6))));
                            arr_39 [i_0] [i_6] [i_6] [i_7] [i_10] = ((/* implicit */unsigned int) ((unsigned char) arr_37 [i_0] [i_0] [19ULL] [i_6] [i_6] [19U] [i_10]));
                        }
                        for (long long int i_11 = 4; i_11 < 18; i_11 += 2) 
                        {
                            arr_44 [i_0] [i_5 - 1] [i_7] [i_6] [5ULL] [19ULL] [(unsigned char)18] = ((/* implicit */unsigned short) arr_7 [i_0] [i_6]);
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((signed char) ((unsigned long long int) var_3))))));
                            arr_45 [i_0] [i_5] [(_Bool)1] [i_6] [i_11 + 2] = arr_28 [i_6];
                            arr_46 [i_6] [i_7] [i_6] [i_5] [i_6] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_6))))));
                            arr_47 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) ^ (arr_16 [i_0] [i_5] [i_5 + 1] [i_6] [(unsigned short)8] [i_11] [i_11])));
                        }
                    }
                } 
            } 
            arr_48 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_15 [i_0] [i_5 + 2]) & (arr_15 [i_0] [i_5 + 1])));
            /* LoopSeq 3 */
            for (int i_12 = 3; i_12 < 18; i_12 += 2) 
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_12] [i_0] [i_0] [8ULL]))) : (arr_41 [i_0] [i_5] [i_0]))))))));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 1; i_13 < 17; i_13 += 1) 
                {
                    arr_53 [16U] [16U] [i_12] [i_13] [(unsigned char)9] = ((/* implicit */unsigned int) arr_3 [i_12]);
                    var_19 = ((/* implicit */unsigned short) var_3);
                }
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    var_20 ^= ((2067085448U) & (2067085448U));
                    arr_57 [i_0] [i_5] [(unsigned char)5] [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_7 [i_0] [i_14]));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_12 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_15 [i_0] [i_0])));
                    arr_58 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_14]);
                }
                arr_59 [i_0] [i_5] [i_12] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_0)) ? (arr_14 [i_0] [i_0] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) arr_26 [i_5 - 1] [i_5 + 2] [i_12 - 2] [i_12 - 2]))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_54 [i_0] [i_5 + 1] [i_5] [i_0] [i_12] [(_Bool)1]))));
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        {
                            var_23 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) arr_20 [i_5 + 2] [8ULL] [i_15]))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(var_4))))));
                            var_25 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_65 [i_0] [i_5 + 1]))));
                        }
                    } 
                } 
            }
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_18 = 1; i_18 < 18; i_18 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) arr_16 [i_18 + 2] [i_5 + 2] [i_17 + 1] [i_0] [(unsigned char)18] [i_5 + 2] [i_0]);
                    var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_17 + 1] [i_17 + 1] [i_0])) ? (arr_41 [i_17 + 1] [i_18 - 1] [i_0]) : (arr_41 [i_17 + 1] [i_18] [i_0])));
                    arr_73 [(short)18] = ((/* implicit */long long int) ((signed char) arr_15 [i_5 + 2] [i_0]));
                    arr_74 [i_0] [i_0] [i_0] [(unsigned short)19] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_17]))) : (var_9)))) ? (((((/* implicit */_Bool) arr_63 [(unsigned char)6] [i_17 + 1] [i_0])) ? (var_5) : (var_4))) : (arr_23 [i_17 + 1] [i_17 + 1] [i_17] [i_17])));
                }
                for (unsigned short i_19 = 0; i_19 < 20; i_19 += 4) 
                {
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~(var_5))))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((unsigned char) arr_0 [i_5 - 1] [i_5 + 1])))));
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (+(((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_5 + 1] [i_0])))))));
                        arr_82 [i_0] [5] [i_17] [i_19] [(_Bool)1] [(unsigned char)2] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_75 [(signed char)17] [i_5] [1ULL] [(signed char)15] [i_5] [(unsigned char)13]))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    arr_85 [i_0] [i_5] [i_17 + 1] [i_0] |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_83 [i_5 + 2])) : (((/* implicit */int) arr_50 [i_0] [i_5] [i_17 + 1]))))) : ((+(var_2)))));
                    arr_86 [i_21] [i_17] [i_17] = ((/* implicit */int) var_4);
                    arr_87 [i_5] [i_21] = ((/* implicit */short) (-(((/* implicit */int) arr_65 [i_17 + 1] [i_5 - 1]))));
                }
                var_31 += ((/* implicit */long long int) ((unsigned char) var_3));
            }
            for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 3) 
            {
                var_32 -= ((/* implicit */long long int) arr_49 [i_5 + 2] [i_22]);
                arr_90 [6LL] [i_5] [i_5 + 1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_0] [i_5] [i_0])) ? (arr_41 [i_0] [i_5] [i_0]) : (arr_41 [i_0] [(unsigned char)14] [i_0])));
                var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_40 [i_5 - 1] [i_5 - 1] [(unsigned char)9] [i_5 + 2] [i_5 + 1] [i_5 - 1])) ^ (var_0)));
            }
        }
        var_34 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((arr_71 [15LL] [i_0]) + (1036753547))))));
    }
    for (signed char i_23 = 0; i_23 < 21; i_23 += 1) 
    {
        arr_95 [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (min((var_7), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((long long int) arr_92 [i_23])))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) arr_94 [(unsigned char)20]))), (var_7))))));
        arr_96 [i_23] [i_23] = ((/* implicit */unsigned char) var_10);
    }
    var_35 ^= ((/* implicit */unsigned int) (-(((int) max((var_7), (var_5))))));
    var_36 &= ((/* implicit */signed char) var_1);
}
