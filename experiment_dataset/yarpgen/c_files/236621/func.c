/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236621
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) (_Bool)1))))) ? (((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((int) (unsigned char)185)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)70)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (var_7) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (arr_9 [i_0] [(unsigned char)18] [i_0] [i_0])))) << (((var_7) - (9766845208153019751ULL)))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (max((((((/* implicit */int) arr_4 [i_1] [i_1])) ^ (((/* implicit */int) arr_7 [i_4] [i_3] [(short)2])))), (max((955681462), (((/* implicit */int) (unsigned char)180))))))));
                                var_13 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (unsigned char)15)), (((((/* implicit */_Bool) var_4)) ? (arr_0 [(_Bool)1]) : (((/* implicit */int) var_8)))))) != (((((/* implicit */_Bool) max(((unsigned char)245), ((unsigned char)71)))) ? (847339022) : ((-(((/* implicit */int) (signed char)-74))))))));
                                var_14 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_3]))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (unsigned short)10515)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54997)) ? (-2074412865) : (((/* implicit */int) (unsigned short)10515))))) ? (((/* implicit */int) (unsigned short)9715)) : (((/* implicit */int) (unsigned char)28))))));
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) (-(min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) > (var_9)))), ((-(((/* implicit */int) (signed char)46))))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))), (min((var_0), (((/* implicit */unsigned int) arr_2 [i_0] [i_1]))))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_2]))))) >= (max((1771232513893447666LL), (((/* implicit */long long int) arr_2 [i_1] [i_2 - 3])))))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */signed char) ((var_2) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((var_7) | (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_6 = 3; i_6 < 10; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [9] [i_6 + 3] [i_7])) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_5])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_7])) : (-879348108)))));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    arr_25 [i_7] = ((/* implicit */signed char) ((arr_21 [i_5] [i_5] [i_6 + 1] [i_5]) ? (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_10 [i_5 - 1])) : (((/* implicit */int) arr_4 [i_6 - 3] [i_7])))) : (((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 1; i_9 < 11; i_9 += 3) 
                    {
                        arr_30 [i_5] [i_6] [i_7] [i_7] [i_8] [i_9 - 1] [i_7] = ((/* implicit */unsigned char) (-(-2784809034937730367LL)));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((long long int) arr_16 [3LL] [i_6 - 3])))));
                        arr_31 [i_7] = ((/* implicit */unsigned short) arr_7 [i_9 + 2] [i_7] [i_5]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
                    {
                        arr_34 [i_5] [i_5] [i_5] [i_10 + 3] [i_7] [i_10 + 1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_8] [i_6])) ? (((((/* implicit */_Bool) 223835883U)) ? (((/* implicit */int) arr_24 [i_7] [i_7] [i_8] [i_8] [(short)3])) : (((/* implicit */int) arr_8 [i_10] [i_8] [i_7] [i_7] [(signed char)4] [i_5])))) : (((/* implicit */int) arr_21 [i_6] [i_5 - 2] [i_5 + 2] [i_5]))));
                        var_19 = ((/* implicit */short) var_4);
                        arr_35 [4LL] [i_8] |= ((((/* implicit */_Bool) arr_17 [i_6 + 2])) ? (((/* implicit */int) arr_6 [i_7] [i_7] [i_5] [i_7])) : (((/* implicit */int) arr_17 [i_6 - 3])));
                        arr_36 [i_8] [i_8] [i_7] [i_8] [(_Bool)1] [(unsigned char)2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)10525)) <= (((/* implicit */int) (_Bool)0)))))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        var_20 |= ((/* implicit */int) arr_26 [i_11 + 3] [i_6 + 3] [i_7] [i_5 + 1] [i_11 - 1]);
                        arr_40 [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_11 + 1] [i_11 - 1] [i_11 + 3] [i_11] [i_11 + 3] [i_11])) ? (arr_27 [i_11 + 1] [i_11 + 1] [i_11 + 3] [i_11] [i_11 + 3] [i_11 + 3]) : (arr_27 [i_11 + 3] [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11])));
                    }
                    var_21 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_5 + 2] [i_5 + 2] [i_6 - 3])) + (((/* implicit */int) arr_20 [i_5 - 1] [i_6] [i_6 - 3]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        arr_44 [i_7] [2LL] [i_7] [i_7] [(signed char)8] [i_7] = 847339034;
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2784809034937730352LL)) ? (((/* implicit */int) (_Bool)1)) : (1048448)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */int) (short)4091)) ^ (((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 + 2]))) : (arr_43 [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 + 2])));
                    }
                }
                var_24 = ((/* implicit */signed char) var_9);
            }
            arr_45 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5 - 1] [8ULL]))));
        }
        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
        {
            arr_48 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)237)) == (((/* implicit */int) (short)4091))));
            var_25 = (-(((/* implicit */int) var_2)));
        }
        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
        {
            arr_51 [i_5] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5 - 2])) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_5 - 2])) : (((/* implicit */int) arr_19 [i_5 + 1] [i_5 - 2]))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    {
                        arr_57 [i_5] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_14])) ? (((arr_47 [(unsigned char)1] [i_14] [i_16]) + (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4))))));
                        /* LoopSeq 3 */
                        for (signed char i_17 = 0; i_17 < 13; i_17 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_15]))) * (0LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) -21)) ? (var_5) : (arr_32 [i_14] [i_14])))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (-(arr_43 [i_5 + 2] [i_5 + 1] [(_Bool)1] [i_5 + 2] [i_5 - 2]))))));
                            var_28 = arr_32 [i_14] [i_14];
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */long long int) arr_38 [i_17] [6ULL] [6ULL])) / (arr_23 [i_5] [i_5] [i_5 - 2] [i_5 + 1]))))));
                        }
                        for (signed char i_18 = 0; i_18 < 13; i_18 += 2) /* same iter space */
                        {
                            arr_63 [i_5] [i_5] [i_5] [i_14] [i_5 + 1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50630))) : (var_5)))));
                            arr_64 [i_14] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [12] [i_5] [12]))) + (arr_37 [(unsigned char)6] [2U] [i_16] [i_18])))));
                            arr_65 [i_14] = ((/* implicit */unsigned char) arr_52 [i_14] [i_14] [i_16]);
                        }
                        for (signed char i_19 = 0; i_19 < 13; i_19 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) ((long long int) arr_6 [i_5 + 1] [i_5 + 2] [i_14] [i_5 - 2]));
                            arr_70 [i_14] [i_14] [0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_5] [i_5 - 2] [i_5 - 2])) ? (((/* implicit */long long int) arr_62 [i_5] [i_5 + 1] [12LL] [9ULL] [i_19])) : (var_4)));
                            var_31 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        var_32 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)9715))));
                        arr_71 [i_14] [i_14] [i_15] [i_16] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1048449)) ? (((/* implicit */int) arr_10 [i_5 + 2])) : (((/* implicit */int) (short)-4148))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned char i_20 = 2; i_20 < 11; i_20 += 1) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (signed char i_22 = 1; i_22 < 12; i_22 += 3) 
                {
                    {
                        arr_79 [i_5] [i_20 + 1] [i_21] [i_21] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(var_2))))));
                        var_33 = (!(((/* implicit */_Bool) -1048449)));
                        var_34 = ((/* implicit */unsigned int) arr_19 [i_5 + 1] [i_20 + 2]);
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((unsigned char) (-(arr_32 [i_21] [i_5])))))));
                    }
                } 
            } 
        } 
        arr_80 [i_5 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-4081)) ? (-1905555838824034919LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)-4095)) : (((/* implicit */int) (signed char)2)))))));
    }
}
