/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193527
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) 20LL)) ? (42LL) : (-17LL))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) max((((long long int) 34LL)), (((/* implicit */long long int) var_4)))))));
                    var_13 = ((/* implicit */unsigned char) (+(1907751995)));
                }
                for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    var_14 = ((/* implicit */long long int) max((var_14), ((-(20LL)))));
                    arr_12 [i_3] [4LL] [4LL] [i_3] = ((/* implicit */unsigned char) (~((-(var_4)))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */int) arr_2 [i_0 - 2] [i_1] [i_3]);
                        arr_15 [i_0 + 2] [i_3] [i_0 + 2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_3 [i_4 - 3] [i_4 - 2]) / (((/* implicit */int) arr_10 [i_4 + 3] [i_0])))))));
                        var_16 = ((/* implicit */unsigned long long int) var_8);
                        arr_16 [i_0] [15ULL] [15ULL] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_0) + (2147483647))) >> (((arr_14 [i_0] [i_0 + 1] [i_0 + 2]) + (351821986)))))) ? (var_5) : (((/* implicit */int) (!(((/* implicit */_Bool) -1507209776)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_0)) : (var_7)))), (var_2))) : (((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_13 [i_4] [12ULL] [i_0] [i_1] [12ULL] [i_0])), (var_3))), (((((/* implicit */_Bool) var_8)) ? (var_3) : (var_3))))))));
                    }
                    arr_17 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 511))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(2147483647)))) ? ((~(-511))) : (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */signed char) (((-(((/* implicit */int) ((signed char) 22))))) | ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                                arr_27 [i_0] = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_8 = 4; i_8 < 17; i_8 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -2147483647)), (1393146664921579892ULL)))) ? (((arr_29 [i_0 - 1] [i_0 - 1] [9LL] [i_0 - 1] [i_0]) | (((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
                        arr_32 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_6)) ? (arr_4 [9LL] [i_1]) : (var_4))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (2147483647)))));
                    }
                    for (signed char i_9 = 3; i_9 < 19; i_9 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 1; i_10 < 19; i_10 += 2) 
                        {
                            arr_37 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned long long int) var_4)) : (max((var_2), (((/* implicit */unsigned long long int) (-(var_9))))))));
                            var_20 ^= ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) arr_35 [i_0] [i_0 - 1] [(signed char)2] [i_0 - 1] [i_0] [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_0)))))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((9223372036854775800LL) / (((/* implicit */long long int) 65535)))))));
                            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((var_3) >> (((((/* implicit */int) ((signed char) var_7))) - (65)))))) ^ (arr_28 [i_0 + 1] [i_1] [i_1] [i_1] [i_11])));
                            arr_41 [i_0] [i_1] [i_0] [5] [i_11] |= ((/* implicit */long long int) ((max(((-(var_8))), (max((arr_4 [i_1] [i_9]), (var_0))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-108)), (9223372036854775807LL)))))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
                        {
                            var_23 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2251662374731776LL)) ? (2147483646) : (min((-31), (((/* implicit */int) (signed char)-120)))))))));
                            var_24 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */long long int) -929322173)) : (arr_34 [i_12 - 2] [i_12] [i_12 + 3] [i_12 + 2] [i_9 - 2] [i_9 + 1])))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_13 = 3; i_13 < 19; i_13 += 2) /* same iter space */
                    {
                        var_25 = ((((/* implicit */_Bool) var_0)) ? (arr_45 [i_0 - 2] [i_0] [i_0 - 2] [i_13 - 2]) : (((/* implicit */int) var_1)));
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        var_27 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_31 [i_0 + 1] [i_0 + 1] [i_5] [i_13])) ? (((/* implicit */int) var_1)) : (var_8)))));
                    }
                    for (signed char i_14 = 3; i_14 < 19; i_14 += 2) /* same iter space */
                    {
                        arr_50 [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_49 [i_14] [i_14 + 1] [2] [i_14]), (((/* implicit */unsigned long long int) ((long long int) var_6)))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_2 [i_1] [i_5] [(signed char)13])))))) : (((((/* implicit */_Bool) arr_31 [i_0 + 2] [i_1] [i_14 + 1] [17])) ? (var_5) : (var_9)))));
                        var_28 = ((((/* implicit */_Bool) max((arr_22 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0 + 2]), (arr_22 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) (signed char)-103)) ? (-1507209776) : (511))) : (((int) var_8)));
                        /* LoopSeq 3 */
                        for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1672401660098870345LL))))))))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_6)), (var_2))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (var_4))))))) ? (((((/* implicit */_Bool) arr_31 [i_0] [i_14 - 3] [i_5] [i_0])) ? (arr_31 [i_0] [i_1] [i_14 + 1] [i_15]) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((signed char) var_7)))))))))));
                        }
                        for (long long int i_16 = 1; i_16 < 18; i_16 += 4) /* same iter space */
                        {
                            var_31 = (+(((((/* implicit */_Bool) arr_7 [i_16 + 1] [i_14 + 1] [i_14 - 3] [i_0 + 2])) ? (var_6) : (((/* implicit */long long int) arr_7 [i_16 + 2] [i_16 - 1] [i_14 - 2] [i_0 - 1])))));
                            var_32 -= ((/* implicit */long long int) var_4);
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (var_4) : (var_8))))) : ((~(((int) var_8)))))))));
                        }
                        for (long long int i_17 = 1; i_17 < 18; i_17 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */long long int) (+(var_8)));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_0] [i_1] [i_5] [i_14] [3LL] [15ULL])) ? (arr_57 [i_17 + 2] [i_14 + 1] [i_5] [i_5] [i_1] [i_0 + 2]) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))) : ((+(var_2))))))));
                        }
                        var_36 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) arr_0 [i_14 - 1]))))));
                    }
                    var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_53 [(signed char)2] [16LL] [i_0 + 1] [i_1] [(signed char)2] [i_5]))))));
                    var_38 = ((/* implicit */int) min((var_38), (max((-2147483639), (-2147483647)))));
                }
                arr_59 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)105)) ? (arr_47 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 - 2]) : (18446744073709551615ULL))) | (var_2)));
            }
        } 
    } 
    var_39 = ((/* implicit */int) (((!(((/* implicit */_Bool) 2147483644)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)20))) : (var_6)));
    var_40 = ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_18 = 2; i_18 < 8; i_18 += 1) 
    {
        for (int i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            {
                arr_68 [i_18 - 1] [i_19] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_2 [i_18 - 2] [i_18 - 1] [i_18])))), (var_9)));
                var_41 = var_1;
            }
        } 
    } 
}
