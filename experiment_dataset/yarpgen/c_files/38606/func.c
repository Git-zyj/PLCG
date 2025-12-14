/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38606
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((int) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) var_9)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_7 [20LL] &= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (signed char)123)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */short) arr_10 [i_0] [i_1] [i_2]);
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [5U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0]) << (((((/* implicit */int) var_9)) - (7523)))))) && (((/* implicit */_Bool) arr_1 [i_1]))));
                    /* LoopSeq 1 */
                    for (int i_4 = 4; i_4 < 21; i_4 += 3) 
                    {
                        arr_20 [i_1] [i_1] = ((/* implicit */short) (((-(((/* implicit */int) var_8)))) + (((/* implicit */int) ((((/* implicit */_Bool) (signed char)123)) || (((/* implicit */_Bool) var_7)))))));
                        var_12 = ((/* implicit */long long int) ((unsigned long long int) arr_6 [i_1] [i_4 - 4] [i_3]));
                    }
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_0] [(signed char)14] [i_3])) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0] [i_1] [i_3])) + (28160))))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 3; i_5 < 24; i_5 += 3) 
                    {
                        arr_23 [i_0] [i_0] [i_5 + 1] [i_1] [i_5 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 2114284920U)) ? (-4985529103093663986LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)2))))) : ((~(-4779633262160063320LL)))));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_16 [i_3] [i_5] [i_5 + 1] [i_5] [i_5 - 3] [i_3]) : (arr_16 [i_3] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 3] [i_3]))))));
                        var_15 = ((/* implicit */int) var_8);
                        var_16 *= ((/* implicit */_Bool) arr_16 [i_2] [i_1] [i_2] [i_5] [i_5 - 2] [i_2]);
                        var_17 = ((/* implicit */unsigned long long int) ((4377316152814265354ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5 - 3] [i_5] [i_5] [i_1] [i_5 - 3] [i_5 + 1])))));
                    }
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [24U] [i_3] [i_3] [i_1] [i_0])) | (((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) arr_1 [i_6])) - (101)))))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_14 [12ULL] [i_1] [i_3] [i_3]))));
                        var_20 = ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (arr_13 [i_1] [i_3] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (2964125411936711302ULL))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_13 [i_0] [i_1] [i_7])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44518))) : (arr_11 [i_2] [i_1] [i_2])))));
                        arr_30 [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_16 [i_1] [i_7] [i_3] [i_2] [i_1] [i_1]);
                    }
                }
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    var_22 = ((/* implicit */int) arr_0 [i_2]);
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_9))));
                    arr_33 [i_1] [i_1] [i_2] [i_8] = ((/* implicit */short) var_5);
                }
                arr_34 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_2] [i_2] [i_1] [i_1] [i_0]))));
                arr_35 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_29 [i_1] [i_2] [i_1] [i_1]);
                arr_36 [i_0] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_17 [i_2] [i_1] [i_1] [i_1] [i_1] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            }
            for (unsigned char i_9 = 1; i_9 < 24; i_9 += 3) 
            {
                var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)123))));
                var_25 = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                /* LoopSeq 3 */
                for (signed char i_10 = 2; i_10 < 24; i_10 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9]))) + (4377316152814265354ULL)))) && (var_3)));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_13 [i_10 + 1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_2)) : (10756066872245233861ULL))))))));
                }
                for (unsigned int i_11 = 1; i_11 < 24; i_11 += 3) /* same iter space */
                {
                    var_28 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) | (((/* implicit */int) (signed char)-82))));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((arr_9 [6U]) ? ((+(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [10U] [i_11]))))))));
                }
                for (unsigned int i_12 = 1; i_12 < 24; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 2; i_13 < 24; i_13 += 2) 
                    {
                        arr_49 [i_1] [i_1] [i_13 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_0]))) / (arr_13 [i_13 - 2] [i_13 - 1] [i_13 - 2])));
                        arr_50 [i_1] [i_1] = ((/* implicit */long long int) arr_37 [i_1]);
                        var_30 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_9] [i_13]))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((arr_41 [i_0] [i_14] [i_9 - 1] [i_1]) != (arr_13 [i_12 + 1] [i_9 + 1] [i_9])));
                        var_32 = ((arr_18 [i_14] [i_1] [i_14] [i_14] [i_1] [i_12 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_12 - 1] [i_12 + 1] [i_1] [i_1] [i_9 - 1] [i_9 + 1]))));
                        arr_54 [i_0] [(unsigned char)16] [i_9 + 1] [i_12 - 1] [i_1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_0] [i_1] [i_9 - 1] [i_12] [i_14])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) ((signed char) arr_46 [i_1] [i_9] [i_12 - 1] [i_1])))));
                    }
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                    {
                        arr_57 [i_0] [i_0] [i_9] [i_12] [i_1] [i_15] = ((/* implicit */unsigned int) var_6);
                        arr_58 [i_15 + 1] [i_12 - 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((var_4) ? (arr_16 [i_1] [i_1] [i_9] [i_12 + 1] [i_15] [i_1]) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_12] [i_15 + 1]))))));
                        arr_59 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_10 [i_15] [i_1] [i_9])) : (7690677201464317778ULL)))) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_12 - 1] [i_15] [i_15] [i_15 + 1])) : (((/* implicit */int) arr_26 [i_15 + 1] [i_15] [i_1] [i_15 + 1] [i_15 + 1]))));
                        var_33 += ((/* implicit */int) (+(arr_27 [i_15] [i_15 + 1] [i_15] [i_15] [(_Bool)1])));
                    }
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) min((var_34), (var_2)));
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_41 [i_1] [i_9] [i_12 - 1] [2])))) ? (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) var_9)) : (var_5))) : (((/* implicit */int) arr_46 [i_1] [i_9] [i_12 + 1] [22U])))))));
                    }
                    var_36 *= ((/* implicit */short) arr_42 [i_0] [i_1] [(signed char)20] [i_9 + 1] [i_9] [i_1]);
                }
            }
            /* LoopSeq 2 */
            for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                var_37 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-20930)) - (((/* implicit */int) var_6))))) : ((-(4985529103093663986LL)))));
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    for (short i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) arr_37 [i_19]))));
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 2775900251U)) : (arr_4 [i_19])))) ? (((/* implicit */int) arr_38 [i_19])) : (((((/* implicit */int) var_6)) * (((/* implicit */int) var_8)))))))));
                        }
                    } 
                } 
                arr_68 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_4))))));
            }
            for (signed char i_20 = 0; i_20 < 25; i_20 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 4) /* same iter space */
                {
                    arr_74 [i_1] [i_20] [i_21] = ((unsigned long long int) var_1);
                    var_40 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_0] [i_21] [i_0] [i_0] [i_1]))) : ((+(arr_45 [(_Bool)1] [i_1] [i_1] [i_1] [i_1]))));
                    var_41 &= ((/* implicit */int) arr_46 [i_0] [i_1] [i_20] [i_21]);
                }
                for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 4) /* same iter space */
                {
                    arr_78 [i_0] [i_1] [i_20] [i_20] [i_20] &= ((/* implicit */unsigned int) ((unsigned long long int) (-(1571431337999037776ULL))));
                    arr_79 [i_0] [i_1] [i_20] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_13 [i_1] [i_20] [i_22]) : (arr_60 [i_0] [i_1] [i_1] [i_20] [i_22])))) ? (((((/* implicit */int) (signed char)85)) << (((/* implicit */int) arr_66 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_20] [(_Bool)1] [i_1] [i_22])) && (((/* implicit */_Bool) var_1)))))));
                    /* LoopSeq 2 */
                    for (short i_23 = 0; i_23 < 25; i_23 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((signed char) var_9)))));
                        var_43 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_47 [i_0] [i_1] [i_20] [i_22] [i_24])))))));
                        arr_87 [i_1] [24ULL] [i_20] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)234))))) : (var_2)));
                        arr_88 [(unsigned short)6] [i_1] [i_22] [i_22] [i_0] [i_24] [i_20] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_77 [i_0] [i_1] [i_20] [i_22] [i_20] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_20] [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned char)200)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-44)))))));
                        var_45 = ((/* implicit */unsigned int) ((arr_52 [i_0] [i_1] [i_1] [i_22] [i_24] [i_1]) != (var_0)));
                    }
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) arr_66 [i_1]))) : ((+(arr_63 [i_0] [i_0] [i_0])))));
                }
                var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) ((unsigned short) arr_2 [i_20] [i_1])))));
                arr_89 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_0] [i_1] [i_1] [i_0])) ? (arr_16 [i_1] [i_1] [i_20] [i_0] [i_20] [i_1]) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_44 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9))))));
            }
            var_48 = ((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))));
        }
    }
    for (long long int i_25 = 0; i_25 < 21; i_25 += 4) 
    {
        var_49 = ((/* implicit */signed char) ((long long int) arr_37 [i_25]));
        var_50 &= ((/* implicit */short) (~(((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) arr_38 [i_25]))))))));
    }
    var_51 = ((/* implicit */unsigned short) ((_Bool) var_6));
}
