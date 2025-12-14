/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21100
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
    var_12 = ((/* implicit */signed char) (unsigned char)255);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) var_4);
        var_14 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_9)) || ((!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_15 &= ((/* implicit */unsigned int) arr_0 [i_0]);
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((arr_2 [i_0 + 2]) >> (((((/* implicit */int) (unsigned short)65510)) - (65496))))) : (((/* implicit */unsigned long long int) min((var_1), (arr_0 [i_0 - 3])))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((unsigned long long int) min((((/* implicit */unsigned long long int) var_4)), (var_11)))) * (((/* implicit */unsigned long long int) min((min((var_5), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) arr_3 [i_1])))))));
                                arr_19 [i_1 - 1] [i_2 - 1] [i_3] [i_4] [i_4] [9LL] [i_5 - 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_14 [i_2 - 2] [i_2 + 1] [i_2 - 1]), (arr_14 [i_2 - 1] [i_2 - 2] [i_2 - 2])))), (max((arr_2 [i_5 + 2]), (((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_2 - 3] [i_5 + 1] [i_4] [i_5] [i_1]))))));
                                var_17 = max((((/* implicit */unsigned long long int) ((max((((/* implicit */int) (short)-24086)), (var_1))) / ((-(((/* implicit */int) var_2))))))), ((-(arr_7 [i_1 + 1]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_2 [i_1 - 1]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 + 1] [i_3] [i_1 + 1])))))));
                    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_14 [i_1 + 1] [i_2 + 1] [(unsigned short)15]) : (((/* implicit */int) arr_11 [i_1] [i_2 - 2] [i_3] [12LL] [(unsigned short)19] [i_1]))))) == (max((arr_17 [i_1 - 1]), (((/* implicit */long long int) var_2))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_7 [(short)0]))) | (((/* implicit */unsigned long long int) arr_12 [i_6] [i_6] [10LL] [(signed char)7])))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((var_1) / (((/* implicit */int) var_6)))))))));
            arr_25 [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_15 [i_6] [i_6] [i_6] [i_1] [(signed char)15])), (max((((unsigned long long int) (unsigned short)25)), (((unsigned long long int) arr_7 [i_6]))))));
        }
        for (unsigned short i_7 = 3; i_7 < 20; i_7 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65510)) ? (arr_15 [i_1] [i_1] [20] [(unsigned short)19] [i_7]) : (arr_17 [i_1])))))))) : (((unsigned long long int) var_7))));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) >= (arr_6 [(signed char)4] [(signed char)4] [i_7])))), ((-(((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) (short)24080)) ? (arr_6 [i_1] [i_7 - 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                var_22 = ((/* implicit */int) ((unsigned int) var_9));
                arr_32 [i_1] [i_1] [i_7] [i_1 - 1] = ((/* implicit */_Bool) (~(var_1)));
            }
        }
        for (signed char i_9 = 3; i_9 < 20; i_9 += 2) /* same iter space */
        {
            arr_35 [7ULL] [(short)11] = var_3;
            arr_36 [i_9 - 1] [i_9] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) && (((/* implicit */_Bool) arr_34 [i_1 + 1] [i_9 - 3]))))) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)88)) >= (((/* implicit */int) (short)-24095)))))));
        }
        for (signed char i_10 = 3; i_10 < 20; i_10 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_11 = 1; i_11 < 17; i_11 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) min((arr_27 [i_1] [i_10]), (max((min((var_11), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_11 + 1])) && (((/* implicit */_Bool) var_10)))))))));
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_26 [i_1]))));
            }
            var_25 = ((/* implicit */int) ((((((/* implicit */int) var_3)) != ((-(((/* implicit */int) var_9)))))) ? (arr_4 [(signed char)3]) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_9)))))));
            var_26 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (-(var_5)))) ? ((-(var_10))) : (((/* implicit */int) var_4))))));
            arr_42 [(unsigned short)2] [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) max(((-((-(arr_16 [i_1] [i_10] [20] [10]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24084)) >> (((((/* implicit */int) var_4)) - (113))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_1 - 1] [i_1 - 1] [i_1 + 1]))) / (arr_13 [i_1 - 1])));
                arr_48 [i_12] = ((/* implicit */unsigned int) ((arr_6 [i_1 - 1] [i_12] [i_13]) - (arr_6 [i_1 + 1] [(short)18] [(short)3])));
            }
            for (unsigned long long int i_14 = 2; i_14 < 18; i_14 += 2) 
            {
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_3))));
                arr_51 [i_12] = ((/* implicit */unsigned short) arr_3 [i_1 - 1]);
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    var_29 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_1 + 1] [i_1 + 1] [(unsigned short)4] [i_1])))))) * (var_5)));
                    arr_56 [i_1] [i_12] = ((/* implicit */signed char) var_2);
                }
            }
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 3) 
            {
                for (unsigned short i_17 = 2; i_17 < 20; i_17 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (arr_9 [i_1] [i_12] [i_16 - 1]) : (((/* implicit */long long int) arr_40 [i_1] [i_1] [i_17])))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_11))))))))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_33 [i_1 + 1])) : (((/* implicit */int) arr_30 [(short)16])))))));
                    }
                } 
            } 
            arr_62 [i_12] [i_12] = ((/* implicit */unsigned long long int) var_5);
        }
        for (int i_18 = 2; i_18 < 20; i_18 += 1) 
        {
            var_32 = ((/* implicit */unsigned short) max(((short)-24073), ((short)24085)));
            var_33 = ((((/* implicit */int) arr_39 [i_1] [10])) < (2147483647));
            /* LoopSeq 3 */
            for (signed char i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                arr_67 [i_19] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (((((/* implicit */int) (unsigned short)65510)) << (((arr_52 [i_1 + 1]) - (7813098667003046641ULL))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (arr_52 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    for (signed char i_21 = 3; i_21 < 20; i_21 += 3) 
                    {
                        {
                            var_34 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_18 - 2] [i_19] [i_19] [i_21] [i_18 - 2])) ? (min((arr_64 [18ULL] [i_1 - 1] [i_1 - 1]), (arr_64 [i_1] [i_1 - 1] [i_1 + 1]))) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_30 [(unsigned char)20]))) << (((((((/* implicit */unsigned long long int) var_7)) | (var_11))) - (7871644600645894056ULL))))))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (arr_9 [i_18 + 1] [i_18 - 1] [i_18 - 1]))))));
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) min((min((((/* implicit */long long int) arr_12 [i_18 - 2] [i_18 - 2] [i_18] [i_18 - 1])), (((((/* implicit */_Bool) var_8)) ? (arr_17 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) var_1)))))));
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_18 + 1] [i_18 - 2] [i_18 - 2] [i_18 - 1] [i_18 - 2])) + (((/* implicit */int) var_3))))) ? (arr_16 [i_1] [(_Bool)1] [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_57 [(unsigned short)2] [(unsigned short)10])) : (((/* implicit */int) var_9))))), (((long long int) var_4))))))))));
                        }
                    } 
                } 
            }
            for (long long int i_22 = 2; i_22 < 19; i_22 += 1) 
            {
                arr_76 [20LL] [11] [i_22] [11] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_7)) * (18446744073709551615ULL)));
                var_38 = ((/* implicit */_Bool) ((signed char) max((arr_17 [i_1 + 1]), (((/* implicit */long long int) var_7)))));
                arr_77 [i_1] [i_18] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (short)24085)))), (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_45 [i_1] [i_1] [i_22 + 1])))))))), ((~(max((((/* implicit */unsigned long long int) var_4)), (arr_16 [i_1] [i_18] [4LL] [i_18 - 2])))))));
            }
            for (unsigned int i_23 = 0; i_23 < 21; i_23 += 2) 
            {
                arr_80 [(signed char)13] [i_18] [i_23] [i_23] = ((/* implicit */signed char) arr_1 [i_1]);
                /* LoopSeq 2 */
                for (long long int i_24 = 3; i_24 < 19; i_24 += 2) 
                {
                    var_39 = ((((int) ((unsigned int) var_5))) == (min((((arr_69 [(unsigned short)8] [i_24 - 1] [i_23] [i_24]) / (((/* implicit */int) var_3)))), (((/* implicit */int) var_0)))));
                    /* LoopSeq 1 */
                    for (long long int i_25 = 0; i_25 < 21; i_25 += 2) 
                    {
                        arr_85 [i_25] [i_18 - 1] [0U] [i_24 - 2] [i_25] [i_25] |= max((arr_69 [i_24] [i_24] [i_24] [i_24]), (max((((/* implicit */int) (_Bool)1)), (-2147483630))));
                        var_40 ^= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1] [i_1 - 1])) ? (arr_14 [i_1 - 1] [i_1] [i_1 - 1]) : (((/* implicit */int) var_8)))));
                        var_41 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (signed char)31))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_1] [i_18] [i_24 - 1] [i_24] [i_25]))) : (((((/* implicit */_Bool) (short)4095)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24098))))))))));
                    }
                    arr_86 [i_24] [i_18 + 1] [i_18 + 1] [7U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_1 - 1] [(_Bool)1] [i_23] [i_24 - 3])) ? (arr_54 [i_1] [(signed char)3] [i_23] [i_24 - 3]) : (arr_54 [i_1 - 1] [i_18] [i_23] [i_24 - 3])))) ? (((((/* implicit */_Bool) var_11)) ? (arr_54 [i_1] [i_18] [(unsigned short)6] [i_24 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (max((arr_54 [i_18 - 1] [i_18] [14U] [i_24 - 3]), (arr_54 [i_1] [i_18] [i_23] [i_24 - 3])))));
                    var_42 = ((/* implicit */int) ((max((((((/* implicit */_Bool) arr_17 [i_1 - 1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [(short)4] [i_24]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_10)) < (arr_41 [i_1 - 1] [(signed char)12] [i_24])))))) == (min((var_11), (arr_34 [i_1 - 1] [i_18 + 1])))));
                }
                for (unsigned long long int i_26 = 0; i_26 < 21; i_26 += 4) 
                {
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (-(var_10))))));
                    arr_89 [i_1 - 1] [i_18 + 1] [i_23] [i_26] [i_26] = ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) arr_9 [i_1] [i_18] [i_23])) ? (var_1) : (((/* implicit */int) var_8)))), (((/* implicit */int) (short)-24077))))));
                    var_44 = ((/* implicit */unsigned int) (+(max((arr_27 [i_1 - 1] [i_26]), (((/* implicit */unsigned long long int) var_9))))));
                }
            }
            var_45 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_31 [i_1 + 1])), (arr_33 [i_1 + 1]))))) * (min((arr_65 [i_1 + 1] [i_18 + 1] [3]), (((/* implicit */long long int) min((arr_3 [i_1]), (((/* implicit */unsigned int) (_Bool)1)))))))));
            arr_90 [15LL] [i_18 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-16641)) >= (((/* implicit */int) var_9))))) - ((-(((/* implicit */int) var_3))))))) + ((~(var_5)))));
        }
        var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_71 [i_1] [i_1 + 1]))))));
    }
}
