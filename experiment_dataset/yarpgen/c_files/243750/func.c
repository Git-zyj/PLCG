/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243750
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                for (unsigned short i_3 = 3; i_3 < 6; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */unsigned short) ((unsigned char) arr_10 [3ULL]));
                        var_11 = ((/* implicit */_Bool) arr_2 [i_0] [(short)7]);
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-15554)) : (((/* implicit */int) (short)32758))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) : (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0])) ? (7961518907959789916LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [9ULL] [i_0])) < (((/* implicit */int) arr_11 [(unsigned short)9] [i_4 + 1] [i_4 + 1] [(short)7] [i_0]))))) < ((((_Bool)1) ? (var_6) : (((/* implicit */int) (signed char)118))))))))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (unsigned char i_7 = 1; i_7 < 8; i_7 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) arr_17 [i_0] [i_0] [2ULL] [i_4]);
                            arr_25 [i_4 - 1] [i_4 - 1] [6ULL] [i_4] [(unsigned short)1] [1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_24 [i_0] [i_5] [i_5] [(short)4]))));
                            arr_26 [i_0] [i_4] [i_0] [i_5] [1LL] [1LL] = ((((/* implicit */int) ((unsigned char) arr_3 [i_4 - 1]))) != (((/* implicit */int) (!(((((/* implicit */_Bool) (short)-11684)) && (((/* implicit */_Bool) var_1))))))));
                            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((short) (_Bool)1))) << (((min((arr_20 [6ULL] [(short)4] [(short)4] [i_7 + 2]), (arr_14 [i_0] [0LL] [1]))) - (8278100025975839694ULL))))))));
                        }
                    } 
                } 
            } 
            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3101011200727063736ULL)) ? (arr_17 [i_4] [i_4] [6LL] [4LL]) : (arr_17 [i_0] [(unsigned char)4] [i_0] [2U])))) ? (((/* implicit */int) arr_7 [4LL] [6LL])) : ((~(((int) (_Bool)1))))));
        }
        for (unsigned short i_8 = 1; i_8 < 7; i_8 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) arr_1 [i_8 + 2]);
            var_19 += ((/* implicit */short) ((((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_8 + 2] [i_8 + 1])))))) + (((/* implicit */int) (short)21079))));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) var_3)), (var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [5ULL] [(unsigned short)5] [i_8 + 3] [(unsigned short)6] [(short)8]))))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) arr_21 [i_8 + 1] [i_10 + 1] [i_10 + 1] [(signed char)9] [(short)7] [(short)7]);
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_10 + 1] [i_8 + 1] [i_9])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_14 [i_10 + 1] [i_8 + 1] [i_9])));
                    arr_33 [i_0] [i_8 + 1] [i_8 - 1] [i_9] [i_10 + 1] [i_10 + 1] = ((/* implicit */int) var_8);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        var_23 = ((((((/* implicit */int) arr_3 [i_8 + 2])) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_8 + 3])) + (1770))));
                        arr_40 [i_0] [0LL] [i_9] [i_11] [i_12] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [(unsigned short)5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_9] [i_9]))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_13 = 1; i_13 < 6; i_13 += 2) 
                    {
                        arr_45 [8LL] [(_Bool)1] [i_9] [i_11] [i_13] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (((-6991089033167288057LL) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))))) ^ (((max((((/* implicit */long long int) arr_44 [(short)6] [(short)6] [i_13] [i_9] [(unsigned short)7] [(short)6])), (arr_15 [i_13 + 3]))) / (max((arr_39 [i_0] [i_8 + 2] [i_9] [i_11] [(short)2]), (((/* implicit */long long int) var_3))))))));
                        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_8 + 2])) ? (((/* implicit */int) arr_12 [i_8 + 2])) : (((/* implicit */int) arr_12 [i_8 + 2])))) * (((((/* implicit */_Bool) arr_12 [i_8 - 1])) ? (((/* implicit */int) arr_12 [i_8 + 2])) : (((/* implicit */int) arr_12 [i_8 + 2]))))));
                        arr_46 [i_13] = max((((unsigned long long int) -1939692326)), (((((/* implicit */unsigned long long int) var_6)) / (var_2))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 8; i_14 += 2) 
                    {
                        arr_49 [i_14 - 1] [(short)1] [i_8 + 1] [i_8 + 1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (-(arr_19 [i_0] [0LL] [2ULL] [(short)8]))));
                        arr_50 [i_0] [i_8 + 3] [i_8 + 3] [(signed char)9] [i_8 + 3] [i_11] [(unsigned short)7] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_20 [i_8 + 3] [i_8 + 3] [i_14 - 1] [i_14 + 1]) ^ (arr_14 [i_8 + 3] [i_8 - 1] [i_14 + 2])))) ? (max((var_7), (((/* implicit */unsigned long long int) var_4)))) : (arr_37 [3LL] [(unsigned short)6] [i_9] [i_11] [2LL])));
                    }
                    arr_51 [i_0] [(short)1] [(signed char)3] [i_11] = ((/* implicit */unsigned int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (35184372088830ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_32 [i_0] [9ULL] [9U] [i_0] [i_0]))))) != (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_36 [i_8 + 2])), ((-(arr_47 [i_9] [i_8 - 1] [(short)0] [2] [8]))))))));
                    var_25 = ((/* implicit */unsigned char) max((((arr_14 [i_0] [i_0] [2LL]) >> ((((-(arr_47 [i_0] [i_0] [(signed char)4] [i_0] [i_0]))) - (3015278864U))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_8 + 3] [i_8 - 1])) & (((((/* implicit */int) arr_27 [i_8] [i_8] [9ULL])) << (((var_2) - (4374305810957257971ULL))))))))));
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) - (var_4)))));
                        var_27 += ((/* implicit */signed char) ((short) (~((~(arr_47 [i_0] [i_8 + 1] [(_Bool)1] [(short)4] [i_15]))))));
                        arr_54 [i_0] [i_0] [i_0] [(unsigned char)8] [(short)2] [i_15] |= ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (18446744073709551615ULL)))) ? (26ULL) : ((~(var_7))))) ^ (((/* implicit */unsigned long long int) (~(arr_0 [3])))));
                    }
                }
                for (long long int i_16 = 1; i_16 < 9; i_16 += 3) 
                {
                    arr_57 [i_0] [i_0] [i_0] [1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)1870)) : (((/* implicit */int) (_Bool)1))))), (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_0] [i_0] [(signed char)7] [i_0]))))))))));
                    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_36 [3ULL]))))));
                }
                var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) var_6))))) ? (((int) arr_39 [i_0] [i_0] [i_0] [i_0] [(short)5])) : (((((/* implicit */int) arr_42 [i_0] [(signed char)0] [0LL] [8LL] [(short)8] [i_9] [i_9])) * (((/* implicit */int) arr_10 [i_8 - 1])))))) == (((/* implicit */int) ((short) arr_5 [(short)4] [i_9])))));
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_37 [(unsigned short)9] [(unsigned short)9] [i_8 - 1] [i_8 - 1] [i_9])))))));
            }
            var_31 = arr_48 [4] [9ULL] [(short)4] [(unsigned char)8] [(short)9];
        }
    }
    for (long long int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_18 = 2; i_18 < 8; i_18 += 3) 
        {
            for (short i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                {
                    arr_66 [i_17] = max((max((arr_43 [i_17] [i_18 - 1] [i_18 - 2] [i_18 - 1] [i_17]), (((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_18 - 1])))), (((/* implicit */unsigned long long int) ((_Bool) max((arr_39 [i_17] [3LL] [i_17] [i_17] [i_19]), (((/* implicit */long long int) arr_36 [i_18])))))));
                    arr_67 [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) 14833856798150196394ULL)) || ((!(((/* implicit */_Bool) (-(var_5))))))));
                }
            } 
        } 
        arr_68 [i_17] = ((/* implicit */unsigned int) arr_14 [i_17] [(_Bool)1] [i_17]);
    }
    for (long long int i_20 = 0; i_20 < 10; i_20 += 3) /* same iter space */
    {
        var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_20] [i_20]))))) ? (arr_41 [2ULL] [i_20] [6] [6] [0U] [i_20]) : (((long long int) ((signed char) arr_7 [i_20] [0LL])))));
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) min((((arr_1 [(unsigned short)1]) ^ (((((/* implicit */_Bool) arr_21 [i_20] [i_20] [i_20] [8ULL] [6] [i_20])) ? (-6991089033167288057LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) (~((-(((/* implicit */int) arr_65 [i_20]))))))))))));
        arr_71 [i_20] = ((/* implicit */signed char) arr_70 [i_20] [i_20]);
    }
    var_34 = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_6)))) != (var_2)))));
}
