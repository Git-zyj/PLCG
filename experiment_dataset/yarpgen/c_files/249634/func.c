/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249634
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
    var_16 = ((/* implicit */unsigned char) (!((_Bool)1)));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */short) ((var_0) >= (((/* implicit */long long int) min((var_8), (((/* implicit */int) (_Bool)1)))))))), (var_14)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_1]) >> (((arr_0 [i_2]) - (2747831066U)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3573))) > (0ULL)))) : (((/* implicit */int) ((unsigned char) arr_3 [i_0]))))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0 - 1])), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) var_6);
                        /* LoopSeq 4 */
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((3U), (((/* implicit */unsigned int) (short)32754))))) ? (arr_11 [i_4 - 1] [i_3] [i_3] [i_2] [i_1] [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-32744), (((/* implicit */short) (unsigned char)255))))))))));
                            arr_12 [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_8 [i_0 - 3])) ? (arr_5 [i_0 - 3] [i_0] [i_1 - 2]) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((arr_9 [i_0 - 3] [i_0] [i_1 - 2] [i_1] [i_2 - 1] [i_2]), ((unsigned char)251))))));
                            var_21 = ((/* implicit */unsigned char) max(((short)32743), ((short)-32727)));
                        }
                        for (short i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 18U)), (((((/* implicit */_Bool) (unsigned char)240)) ? (18446744073709551611ULL) : (12ULL)))));
                            var_23 = ((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3]);
                            arr_15 [i_3] [i_1] = ((/* implicit */short) arr_4 [i_3] [i_2] [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 4; i_6 < 15; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_4 [i_1 + 1] [i_2] [i_3 + 1]))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1])) : (var_9)))) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (4294967272U)))));
                        }
                        for (short i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_3] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */long long int) ((arr_17 [i_1 + 1] [i_2 - 1]) | (((((/* implicit */_Bool) arr_17 [i_1 - 2] [i_2 - 1])) ? (arr_17 [i_1 + 1] [i_2 - 1]) : (((/* implicit */int) var_11))))));
                            arr_21 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1)), (4294967295U)))) ? (((/* implicit */long long int) 4294967290U)) : (((0LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_15))));
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    for (int i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_10 = 1; i_10 < 16; i_10 += 1) 
                            {
                                arr_30 [i_8] [i_1] [i_10] [i_9] [i_10] = ((/* implicit */_Bool) ((unsigned long long int) 18446744073709551606ULL));
                                arr_31 [i_10] [i_9] [i_10] [i_1] [i_0] = ((/* implicit */short) arr_13 [i_0] [i_1] [i_8] [i_10] [i_10] [i_10]);
                            }
                            for (int i_11 = 1; i_11 < 17; i_11 += 4) 
                            {
                                arr_35 [i_0] [i_1] [i_8] [i_11] = ((/* implicit */long long int) max((((unsigned long long int) arr_33 [i_0] [i_9] [i_8] [i_11])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(arr_10 [i_0] [i_1] [i_8] [i_9] [i_11])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25448))) == (arr_34 [i_11] [i_9] [i_8] [i_1] [i_0])))))))));
                                var_27 = ((/* implicit */long long int) var_1);
                                var_28 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_11] [i_9] [i_8] [i_1] [i_0])) | (((/* implicit */int) (short)-2114))))) ? (((unsigned long long int) arr_24 [i_9] [i_8] [i_1] [i_0])) : (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) ((unsigned char) var_14)))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned char i_12 = 2; i_12 < 17; i_12 += 4) 
                            {
                                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32763)) ? (max((4ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (2147483647) : (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)141)))))))));
                                arr_38 [i_0] [i_1] [i_8] [i_9] [i_12] [i_8] = ((/* implicit */long long int) arr_24 [i_9] [i_8] [i_8] [i_9]);
                                arr_39 [i_12] [i_9] [i_8] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_12] [i_1] [i_1] [i_9])) ? (((((_Bool) arr_9 [i_0] [i_0] [i_8] [i_8] [i_12] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25450))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (max((((/* implicit */long long int) (unsigned char)141)), (arr_27 [i_1] [i_1] [i_1] [i_1])))))))));
                            }
                            /* LoopSeq 3 */
                            for (signed char i_13 = 3; i_13 < 15; i_13 += 4) 
                            {
                                var_30 = ((/* implicit */int) max((((/* implicit */long long int) max((arr_8 [i_9 + 1]), (arr_8 [i_9 - 1])))), (max((((/* implicit */long long int) 293853954)), (-9223372036854775800LL)))));
                                var_31 = ((/* implicit */int) (short)32744);
                                arr_42 [i_0] [i_1] [i_8] [i_9] [i_13] = ((/* implicit */_Bool) min(((-(arr_11 [i_9] [i_1] [i_13 - 2] [i_9] [i_0 - 1] [i_1] [i_1]))), (((/* implicit */long long int) 4294967260U))));
                                var_32 ^= ((/* implicit */unsigned short) var_1);
                            }
                            /* vectorizable */
                            for (unsigned short i_14 = 1; i_14 < 18; i_14 += 1) 
                            {
                                arr_46 [i_0] [i_0] [i_14] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)6367)) >> (((((/* implicit */_Bool) 18446744073709551606ULL)) ? (8ULL) : (arr_5 [i_0] [i_1] [i_8])))));
                                arr_47 [i_14] [i_9] [i_8] [i_14] = ((/* implicit */signed char) ((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            }
                            /* vectorizable */
                            for (unsigned char i_15 = 2; i_15 < 18; i_15 += 4) 
                            {
                                var_33 = var_7;
                                arr_50 [i_0] [i_1] [i_8] [i_15] = ((/* implicit */long long int) (~(var_9)));
                                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (short)11495)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8 + 1] [i_1 + 1] [i_0 + 1] [i_0]))) : (((((/* implicit */_Bool) arr_32 [i_15] [i_15] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) : (var_13)))));
                                var_35 = ((/* implicit */unsigned char) (+(4294967295U)));
                                var_36 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? ((~(var_9))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                            }
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) max((((/* implicit */long long int) var_1)), (arr_23 [i_0] [i_1] [i_8] [i_9]))))));
                            arr_51 [i_9] [i_8] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_34 [i_0] [i_1] [i_8] [i_9] [i_0])))) ? (var_9) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_1] [i_1] [i_8] [i_9])))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (unsigned char)6))));
                var_39 *= ((/* implicit */unsigned char) arr_28 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned int) 7146453561136371191LL);
}
