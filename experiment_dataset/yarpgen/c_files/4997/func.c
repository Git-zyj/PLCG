/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4997
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
    for (int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)26612)) : (1217625359)));
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 1] [i_1])) : (((/* implicit */int) var_1)))))));
                var_15 = var_8;
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_16 = ((/* implicit */short) ((int) min((((/* implicit */unsigned char) var_10)), ((unsigned char)0))));
                    arr_8 [i_1] [i_1] [6LL] = ((/* implicit */short) arr_2 [i_1] [i_2]);
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    var_17 = ((/* implicit */unsigned char) var_2);
                    var_18 -= ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)26595));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1])) - (((/* implicit */int) arr_9 [i_0 - 4] [i_0 - 2] [i_0 - 4] [i_0 - 1]))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    arr_14 [i_0] [i_0] [i_1] [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) / (var_6))) * (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0 + 1] [i_0]))));
                    var_20 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 7; i_6 += 4) 
                        {
                            {
                                arr_21 [i_6] [i_6] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_1] [i_4] [i_6 + 2] [(unsigned char)7])) ? (((/* implicit */int) (short)-2707)) : (((/* implicit */int) arr_19 [i_0 - 3] [i_1] [i_0 - 3] [i_6 + 3] [i_1]))));
                                var_21 = ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_5] [8LL])) & ((~(arr_7 [(short)3] [(short)3] [(short)3] [i_5]))));
                                var_22 = ((/* implicit */unsigned int) arr_19 [i_5] [i_5] [i_5] [1] [i_5]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) var_8);
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_1] [i_1] [i_0] [i_0 - 4]))) * (var_2))))));
                }
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 4; i_9 < 9; i_9 += 1) 
                        {
                            {
                                arr_30 [i_1] [i_1] [i_1] [i_7] [i_8] [i_1] = ((/* implicit */unsigned char) (((-(((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)255))))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))))))));
                                arr_31 [(unsigned short)1] [i_1] [i_7] [i_1] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_9] [i_8] [i_8] [i_0] [5] [5] [i_0])) && (var_12)))), (var_5)))) && ((((!(((/* implicit */_Bool) var_0)))) || (((((/* implicit */_Bool) (unsigned short)38918)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
                                var_25 = ((/* implicit */signed char) ((((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned short)7] [i_0 - 4] [i_9 - 2] [(_Bool)1]))))) % (arr_29 [i_0])));
                                arr_32 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */_Bool) ((short) ((long long int) var_11)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 6; i_11 += 3) 
                        {
                            {
                                arr_37 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((var_6) - (7221966295968183732LL)))))), (min((arr_36 [8ULL] [8ULL] [i_1] [i_7] [i_10] [(_Bool)1] [i_11]), (arr_7 [i_11] [i_10] [i_7] [i_1]))))));
                                var_26 = min((((/* implicit */long long int) (unsigned char)0)), (-6143269145931880881LL));
                                var_27 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) min((((/* implicit */short) var_10)), (arr_28 [i_0 - 2] [i_0] [0ULL] [i_0 - 4] [i_0 - 3])))) ^ (((/* implicit */int) var_12)))) + (2147483647))) >> (((((/* implicit */int) var_10)) + (59)))));
                            }
                        } 
                    } 
                    arr_38 [4LL] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0 + 1])) ? (arr_34 [i_0 - 1] [i_1] [i_7] [i_7] [i_0 - 4] [i_0]) : (arr_34 [i_0 + 1] [i_1] [i_7] [(unsigned char)9] [i_0] [i_1])))) ? (min((var_2), (((/* implicit */unsigned long long int) arr_22 [i_0 - 4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_28 [i_0 - 1] [i_0] [(unsigned short)8] [i_0 - 4] [i_0 + 1]), (((/* implicit */short) var_7))))))));
                    arr_39 [i_1] [i_1] [i_1] [(unsigned char)1] = ((((/* implicit */_Bool) arr_29 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_7])))))) : (max((((/* implicit */long long int) var_0)), (var_8)))))) : (var_5));
                }
                /* LoopSeq 2 */
                for (unsigned short i_12 = 1; i_12 < 9; i_12 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) (((~(arr_23 [i_0] [i_0] [i_0] [i_0 + 3]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0 + 3]))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        arr_45 [i_0] [i_1] [i_12] [i_1] = ((/* implicit */unsigned int) var_9);
                        var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_22 [(unsigned short)0])) || (((/* implicit */_Bool) arr_12 [5LL] [i_1] [(_Bool)1])))) || (((/* implicit */_Bool) arr_27 [i_0 - 4] [i_1] [i_12 + 1] [i_12 - 1]))))), (((((/* implicit */_Bool) (unsigned short)65521)) ? (16507234512788049889ULL) : (7173151103072828981ULL)))));
                        var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                    {
                        var_31 ^= ((/* implicit */unsigned char) (((~(((/* implicit */int) min((arr_1 [i_12]), (((/* implicit */short) arr_46 [(short)9] [i_0 + 3] [i_1] [i_0 + 3]))))))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3045646699610995188ULL)) ? (10836050144569271843ULL) : (((/* implicit */unsigned long long int) var_6))))))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((_Bool) arr_7 [9ULL] [i_1] [i_1] [i_1]))))) / (((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0 - 1] [i_12 - 1] [i_14] [i_12 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1080863910568919040LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [6ULL]))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_12])) ? (1080863910568919040LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                        arr_51 [i_0] [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_0] [i_0] [(unsigned char)4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (12012512019755479512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3])))));
                        var_34 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (4996687485499195059LL)))));
                        /* LoopSeq 4 */
                        for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            arr_54 [i_15] [i_1] = ((/* implicit */short) arr_7 [i_0 + 1] [i_12 - 1] [i_1] [i_0 + 1]);
                            arr_55 [i_0] [i_15] [i_0] [i_0] [i_0 + 3] |= ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_12] [(signed char)5] [(unsigned short)6])) : (((/* implicit */int) (unsigned short)37361))));
                        }
                        for (signed char i_17 = 0; i_17 < 10; i_17 += 3) 
                        {
                            arr_58 [i_1] [8] [8] [i_15] [8] [i_17] = ((/* implicit */long long int) arr_26 [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 + 3]);
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_12 - 1] [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_12] [i_15] [i_17]) / (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) arr_16 [i_15]))))));
                            arr_59 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_6);
                            var_36 = ((/* implicit */unsigned char) ((long long int) arr_53 [i_17]));
                            var_37 = ((/* implicit */short) arr_2 [7LL] [i_1]);
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_38 = ((/* implicit */int) ((unsigned long long int) arr_50 [i_12 + 1] [(unsigned short)1] [i_0 - 4] [i_0 - 3]));
                            arr_63 [i_1] [i_1] [(unsigned short)4] [0U] [i_18] = ((/* implicit */long long int) (+((+(-937737267)))));
                        }
                        for (short i_19 = 3; i_19 < 6; i_19 += 4) 
                        {
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_12 - 1] [i_12 - 1] [4ULL])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_12))));
                            var_40 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_0] [i_1] [(_Bool)1] [i_15] [i_19])) ? (arr_25 [i_0 - 2] [i_12 + 1] [i_15] [i_19] [i_19] [i_19 - 3]) : (((/* implicit */unsigned long long int) arr_52 [i_0 + 1]))));
                            var_41 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                        }
                    }
                    arr_67 [i_0 - 4] [i_1] = (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))));
                }
                /* vectorizable */
                for (unsigned short i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    var_42 ^= ((/* implicit */long long int) arr_20 [i_0 + 3] [i_0 - 4] [i_0 - 2] [i_0 - 2] [2U] [i_0 + 1] [i_0 + 1]);
                    arr_71 [i_1] [i_1] [i_20] [i_1] = ((/* implicit */unsigned char) var_6);
                    var_43 = ((/* implicit */unsigned char) var_13);
                    var_44 = ((((/* implicit */_Bool) 133169152U)) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_0 - 4] [i_0 - 2] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_50 [i_0 - 4] [i_0 + 1] [i_0 + 3] [i_0 - 4])));
                    var_45 = ((/* implicit */_Bool) var_2);
                }
            }
        } 
    } 
    var_46 = ((/* implicit */_Bool) ((int) ((unsigned long long int) var_4)));
}
