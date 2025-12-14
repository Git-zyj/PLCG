/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39656
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
    var_19 = ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_20 = ((/* implicit */signed char) (~(max((((((/* implicit */long long int) ((/* implicit */int) (short)29874))) ^ (var_13))), (((/* implicit */long long int) (unsigned char)170))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((int) arr_2 [i_0] [i_0 - 3] [i_0]))) ? (((((/* implicit */_Bool) 3524966997276309684LL)) ? (3524966997276309684LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [5] [i_0] [i_0] [i_0])) == (((/* implicit */int) (unsigned char)234))))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) (unsigned char)23);
                                var_22 = min((((/* implicit */long long int) var_17)), (max((((/* implicit */long long int) arr_7 [i_0 + 1] [i_1] [i_2] [i_3])), (-3524966997276309695LL))));
                                arr_13 [0] [0] [i_1] [i_3] [i_3] [0] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 4) 
                {
                    var_23 = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 - 3])) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-6)) + (((/* implicit */int) (signed char)-21))))) : (min((((/* implicit */long long int) var_10)), (arr_1 [i_0 - 2]))));
                    arr_16 [i_0 - 1] [(unsigned char)2] [(unsigned char)2] [i_0 + 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned long long int) arr_11 [i_5] [i_1] [(unsigned char)2] [i_5] [(_Bool)1])) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32539)) ? (-705861280) : (((/* implicit */int) (signed char)-93)))))))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((((/* implicit */long long int) arr_4 [i_0 - 1] [i_0] [i_1] [i_5])), (-1LL))))));
                    var_25 &= ((/* implicit */long long int) (unsigned char)0);
                }
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 3; i_7 < 9; i_7 += 3) 
                    {
                        arr_23 [i_7] [i_6] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(-1339736518)));
                        arr_24 [(_Bool)1] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_13)) ? (arr_18 [i_7] [i_7 + 1]) : (arr_18 [i_7] [i_7 - 3]))), (((((arr_18 [i_7 - 1] [i_7 - 1]) + (2147483647))) << (((((arr_18 [i_7] [i_7 - 3]) + (1940834875))) - (7)))))));
                        arr_25 [9] [i_7 - 3] [i_6] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_8 [i_7 + 2] [i_6] [i_0 - 3] [i_0 - 2] [i_0])) << (((((/* implicit */int) var_16)) - (136))))));
                        arr_26 [i_7 - 3] [i_6] [i_6] [i_1] [i_0 + 1] [(unsigned char)10] |= var_6;
                    }
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_26 |= ((/* implicit */unsigned char) (((-(((/* implicit */int) var_16)))) < (((/* implicit */int) (signed char)-10))));
                        arr_29 [i_0] [i_0 - 3] [i_0] [i_0 - 1] |= ((/* implicit */short) arr_1 [i_0]);
                        var_27 = (~(((((((/* implicit */_Bool) (unsigned char)10)) ? (arr_2 [i_1] [i_1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0 - 2] [i_0]))))) + (((((/* implicit */_Bool) var_1)) ? (var_2) : (var_2))))));
                        var_28 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_17)) & (((/* implicit */int) (unsigned char)27)))))))));
                    }
                    for (int i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        var_29 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)12288))));
                        var_30 = arr_15 [i_9] [i_0] [i_1] [i_0];
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((3524966997276309705LL), (((/* implicit */long long int) arr_20 [i_9 - 1] [i_6] [i_0 - 3] [i_0 - 3]))))))))));
                        arr_33 [9ULL] [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) ((var_13) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_9 + 1] [i_9 + 1] [i_1] [i_9 + 1])), ((unsigned char)20)))))));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(var_7))))));
                    }
                }
                /* LoopSeq 1 */
                for (int i_10 = 4; i_10 < 8; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 10; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 1; i_12 < 10; i_12 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) var_2);
                                arr_44 [i_10] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_10))))))) <= (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) (-(var_1)))) : ((-(var_13)))))));
                                var_34 = ((/* implicit */unsigned char) arr_38 [i_0] [i_1] [i_10] [i_11 + 1] [i_0] [i_12 - 1]);
                            }
                        } 
                    } 
                    var_35 ^= ((/* implicit */long long int) ((((((var_3) == (((/* implicit */int) (unsigned char)28)))) || (((/* implicit */_Bool) ((var_4) ^ (((/* implicit */long long int) arr_32 [i_0 + 2] [i_0 + 2] [i_1]))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_41 [i_10 - 2] [i_0 - 1] [i_0])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_17))));
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        arr_47 [i_0 - 3] [(unsigned short)10] [0LL] [i_0 - 3] |= ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [i_0] [i_10]), ((unsigned char)227))))))));
                        var_36 += ((/* implicit */long long int) (~(((/* implicit */int) arr_37 [i_0] [i_1] [i_10 + 1] [i_0]))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        arr_50 [i_14] [i_1] [i_1] [2] &= ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)54429))))) % (var_2));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_15 = 1; i_15 < 7; i_15 += 2) 
                        {
                            var_37 &= ((/* implicit */unsigned short) ((arr_15 [i_15] [3LL] [3LL] [i_14]) << (((((long long int) arr_4 [i_0 - 3] [i_0 - 3] [i_10 + 3] [i_15 - 1])) - (173LL)))));
                            arr_53 [i_0] [i_14] [i_0] [i_0 + 2] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_15 - 1] [i_15] [i_10 - 4] [i_14] [i_15 + 3])) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)20454)) ? (8552897369894753925ULL) : (var_15))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8552897369894753925ULL)) ? (((/* implicit */int) var_10)) : (arr_32 [i_0 - 1] [i_1] [i_14])))))))));
                            var_38 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) / (arr_11 [i_14] [i_14] [i_14] [i_10] [i_14])))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((unsigned char) arr_27 [i_0] [i_1] [0ULL] [2ULL] [i_1]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_10 - 3] [9ULL] [i_15 + 1] [i_15])), (var_8))))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 3) 
                        {
                            var_39 ^= max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((+((~(arr_30 [(short)9] [i_1] [i_1]))))));
                            arr_56 [i_0 - 3] [i_1] [i_10] [i_14] [i_16] = ((/* implicit */unsigned short) 4ULL);
                            arr_57 [i_14] = ((/* implicit */int) (unsigned char)228);
                        }
                        for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                        {
                            arr_61 [8LL] [6ULL] [i_1] [i_10] [6ULL] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) ((unsigned char) arr_34 [i_10 + 1] [i_10 + 1] [i_10 + 2]))) : (((/* implicit */int) var_18))));
                            var_40 = ((/* implicit */short) min((var_9), (arr_40 [i_17] [i_0] [i_10 - 4] [i_1] [i_0])));
                            arr_62 [i_14] [i_14] [i_10] [i_14] [i_17] [i_0] [i_17] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1] [i_1]);
                            arr_63 [i_0] [i_14] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (+(var_15))))), ((+((-(((/* implicit */int) (unsigned char)42))))))));
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))))) ? (((/* implicit */int) arr_22 [i_0] [i_0 + 2] [i_10 - 2] [i_17])) : (((/* implicit */int) arr_54 [0LL] [i_0] [i_0 - 3] [i_0 + 2] [i_14]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) arr_18 [i_17] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_14] [i_14] [i_10]))) : (max((var_4), (((/* implicit */long long int) arr_7 [i_10 - 2] [i_1] [i_10] [i_14]))))))));
                        }
                        var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((144115188075855871ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))))))));
                    }
                    var_43 = ((/* implicit */long long int) ((((/* implicit */int) ((((var_7) / (((/* implicit */unsigned long long int) -1905204336)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) % (((((/* implicit */int) arr_58 [i_10 - 2] [i_0 + 1] [i_10 - 4] [i_0 + 1])) + (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_10] [i_10 + 2])) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_10] [i_10 - 1]))))))));
                }
            }
        } 
    } 
    var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 2) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            {
                var_45 ^= ((/* implicit */long long int) arr_64 [i_19]);
                var_46 = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_47 = ((/* implicit */int) min(((~(max((var_15), (4520491411780902471ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5653811464509602272ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))))));
}
