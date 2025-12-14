/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243797
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 2] [i_2] [i_2 + 1])) && (((/* implicit */_Bool) arr_7 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 1]))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_3] [i_3] [i_3] [i_3] [i_4])), (arr_1 [i_0]))))));
                            var_13 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_3] [i_2 - 1] [i_3]))) - (min((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_2] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_3])) < ((-(((/* implicit */int) arr_6 [i_0] [i_3] [i_0] [i_4]))))))))));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((arr_10 [i_3] [i_1] [i_2] [i_3] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_2 + 2] [i_2 + 2])) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) >= (var_8)))))))) : (((((arr_9 [i_3] [i_3] [i_2] [i_0] [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_3] [i_0]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_3] [i_3]))))))))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
                        {
                            var_15 ^= ((/* implicit */unsigned int) ((arr_12 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 3] [i_5 - 1] [i_5 + 1]) ? (((arr_12 [i_5 + 3] [i_5 + 3] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 3]) ? (((/* implicit */int) arr_12 [i_5 - 1] [i_5 + 3] [i_5 + 2] [i_5 + 3] [i_5 - 1] [i_5 + 3])) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) arr_12 [i_5 + 3] [i_5 - 1] [i_5 + 3] [i_5 + 1] [i_5 + 3] [i_5 + 1]))))));
                            var_16 |= ((/* implicit */unsigned long long int) ((2097240524U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) < (max((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_3 [i_3] [i_5]) : (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_5])) : (var_4))))))))));
                        }
                        var_18 &= ((/* implicit */int) (-(((((/* implicit */_Bool) 1394187273)) ? (-13LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_19 = ((unsigned long long int) arr_1 [i_0]);
                        var_20 -= ((/* implicit */signed char) ((unsigned short) arr_2 [i_0] [i_0] [i_6]));
                        /* LoopSeq 4 */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) ((int) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((/* implicit */int) arr_12 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0])))));
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_2 + 2] [i_0]))) : (arr_7 [i_1] [i_2 + 2] [i_1] [i_2])));
                        }
                        for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (arr_15 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8] [i_2 - 1] [i_0]))))))));
                            arr_25 [(_Bool)1] [i_1] [i_2] [i_2] [(_Bool)1] |= ((/* implicit */long long int) var_1);
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_0] [i_2 + 2] [i_2 - 1] [i_2])) - (((/* implicit */int) arr_2 [i_0] [i_0] [i_6])))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_2] [i_6] [i_9])))));
                            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) - (((((/* implicit */int) (signed char)15)) >> (((/* implicit */int) (unsigned char)16))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_26 &= ((/* implicit */unsigned long long int) ((((var_12) >> (((var_5) + (2376037079946635974LL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_6])))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_10] [i_2] [i_10] [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 1]))) : (var_8))))));
                            arr_31 [i_10] [i_1] [i_10] [i_6] [i_10] &= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_22 [i_10] [i_10] [i_2] [i_10] [i_10]))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) < (var_12))))));
                        }
                    }
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 2]) >> (((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2])))) + (1486419041)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [i_2])) : (((((/* implicit */int) arr_10 [(signed char)0] [i_1] [i_2] [i_0] [i_1])) - (((/* implicit */int) arr_22 [(short)8] [i_0] [i_1] [i_0] [(short)8])))))))))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_12))) && (max((arr_12 [i_2 - 1] [i_2] [i_1] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_2] [i_0] [i_0] [i_0] [i_0])) ? (var_2) : (((/* implicit */long long int) arr_30 [i_0] [i_1] [i_2])))) - (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)3062), (((/* implicit */short) (_Bool)1)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551589ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)18968))))) : (((((/* implicit */_Bool) 8454106729779570674ULL)) ? (12008700950295796630ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_10 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [(unsigned short)6]))));
                        var_32 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)2]))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_0] [i_11])) < (((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_2] [i_11])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_11])) : (((/* implicit */int) arr_0 [i_0])))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_28 [i_0] [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_1]) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_11] [i_11] [i_1]))) : (min((((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_12])), (arr_15 [i_11] [i_11] [i_11])))))));
                            var_34 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_13 [i_11] [i_11] [i_2] [i_11] [i_2 - 1] [i_11])) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_1)) : (var_6))))))));
                            var_35 ^= ((/* implicit */unsigned char) ((arr_24 [i_2 - 1] [i_2 + 1] [i_2 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_36 [i_0] [i_12] [i_2] [i_12] [i_12] [i_2] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_8))))))));
                            arr_40 [i_12] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */long long int) var_1)))))) - (arr_34 [i_0] [i_0] [i_0] [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_28 [i_0] [i_0])) < (((/* implicit */int) arr_4 [i_0] [i_1] [i_11] [i_0]))))), (arr_5 [i_0] [i_2 + 2] [i_0])))))));
                        }
                        var_36 ^= ((/* implicit */short) max((var_9), (((((((/* implicit */_Bool) arr_24 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)2]))) : (arr_15 [i_2] [i_2] [i_2]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_11])) : (arr_34 [i_0] [6U] [6U] [6U]))))))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), (((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (arr_9 [i_0] [i_1] [i_2] [i_0] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_0] [i_13] [i_13])))))))) && (((/* implicit */_Bool) ((arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]) ? (min((arr_18 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_13] [i_0] [i_1] [i_0]))))))))));
                        var_38 = ((/* implicit */_Bool) arr_3 [i_2] [i_2]);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */_Bool) 16304099530133417480ULL)) ? (549747425280ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))))))));
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_44 [i_14] [i_13 - 1] [i_14] [i_14] [i_13 - 1])) >> (((((/* implicit */int) arr_44 [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 1])) - (23515))))))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
                        {
                            var_41 |= ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_2 [i_0] [i_1] [i_13 - 1]))))));
                            var_42 -= ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_15] [i_1] [i_15] [i_1] [i_15])) : (((/* implicit */int) arr_20 [i_1] [i_15])))))) && (arr_23 [i_15] [i_0] [i_13] [i_13] [i_0] [i_0] [i_0]));
                            var_43 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_0), (((/* implicit */short) arr_20 [i_1] [i_0]))))))) ? (((unsigned long long int) ((var_9) - (((/* implicit */unsigned long long int) var_5))))) : ((((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))) ? (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_13]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0])))))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
                        {
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_2] [i_13] [i_13] [i_0])) ? (((/* implicit */int) ((arr_34 [i_16] [i_16] [i_16] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_2 + 2])) && (((/* implicit */_Bool) arr_43 [i_1] [i_16] [i_13] [i_13]))))))))));
                            var_45 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_13 - 1] [i_2 + 2] [i_16] [i_16] [i_1])) ? (2147483647) : (-2147483624)))) ? (min((((/* implicit */unsigned long long int) (-(arr_37 [i_0] [i_0] [i_0] [i_0] [i_16] [i_0] [i_0])))), (var_9))) : (((/* implicit */unsigned long long int) 7959238182404205538LL))));
                            var_46 = ((/* implicit */long long int) min((var_46), (((((((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_16]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_16] [i_13] [i_1])))))))) + (9223372036854775807LL))) >> (((((((((/* implicit */int) (unsigned char)251)) >> (((2197726771U) - (2197726751U))))) - (arr_30 [i_0] [i_1] [i_13]))) - (1288112413)))))));
                            arr_53 [i_0] [i_0] [i_16] [i_0] [i_13] [i_16] |= (+(min((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_13] [i_16])), (var_9))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) var_1)))))))));
    var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_1)) < (max((var_5), (var_10))))))) : (var_4)));
}
