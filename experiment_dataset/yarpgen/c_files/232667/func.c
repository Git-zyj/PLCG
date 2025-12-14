/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232667
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */signed char) ((arr_7 [i_0] [i_1] [(unsigned short)2]) & (arr_7 [i_0] [i_0] [i_0])));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) (((~((-2147483647 - 1)))) - (var_5)));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)250)) / (2147483647)));
                        arr_17 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) var_9));
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_1])) - (var_10)));
                        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) var_11)))))));
                    }
                    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)91)) && (((/* implicit */_Bool) ((2147483647) % (1759524214))))));
                }
            } 
        } 
        var_17 *= ((/* implicit */unsigned short) arr_3 [4] [4] [i_0]);
    }
    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        arr_23 [5ULL] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_5 - 2] [i_5 - 2])) ^ (((/* implicit */int) arr_20 [i_5 - 2] [i_5 - 1]))))), ((~(arr_19 [i_5] [i_5 + 1])))));
        var_18 = ((/* implicit */unsigned char) var_3);
        arr_24 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_20 [i_5] [i_5]))));
    }
    var_19 = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        for (long long int i_7 = 3; i_7 < 20; i_7 += 4) 
        {
            {
                arr_30 [16LL] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [(unsigned char)17])) ? (11980356874572698540ULL) : (((/* implicit */unsigned long long int) (+((~(-2147483630))))))));
                var_20 = ((/* implicit */int) (unsigned char)231);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                {
                    var_21 -= ((/* implicit */signed char) 6466387199136853058ULL);
                    arr_33 [i_8] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 2147483640)) + (arr_32 [i_6] [(unsigned short)12])))) ? (arr_32 [i_9] [i_7 - 1]) : (arr_32 [i_6] [i_9])));
                    var_23 = ((/* implicit */long long int) (signed char)-71);
                    arr_36 [i_6] [i_7] [i_7] = ((/* implicit */_Bool) var_5);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        var_24 ^= ((/* implicit */unsigned long long int) ((((var_7) ? (arr_29 [i_6] [(unsigned char)12] [(unsigned char)12]) : (arr_38 [i_6] [i_7] [i_7] [i_9] [i_10]))) ^ ((+(arr_38 [10ULL] [i_7] [i_9] [i_10] [i_10])))));
                        arr_39 [i_10 + 1] [i_9] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) var_10);
                        arr_40 [i_6] [i_6] [i_7] [i_9] [12U] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_26 [i_7 - 3]))));
                        arr_41 [i_6] = ((/* implicit */long long int) arr_37 [i_6] [i_7] [(unsigned short)13] [(signed char)3]);
                    }
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) != (var_8)));
                        var_26 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (arr_42 [i_7 - 3] [i_7 - 1]));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_6] [i_6])) ^ (var_10)));
                    }
                    for (unsigned int i_12 = 1; i_12 < 21; i_12 += 3) 
                    {
                        arr_46 [i_6] [i_6] [i_7] [i_9] [i_9] [i_7] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6])))))));
                        var_28 *= (+(((/* implicit */int) arr_31 [i_6] [6] [i_12 + 1] [i_7 - 2])));
                        /* LoopSeq 4 */
                        for (signed char i_13 = 2; i_13 < 20; i_13 += 2) 
                        {
                            var_29 ^= ((((/* implicit */_Bool) ((long long int) arr_44 [i_13]))) ? (var_1) : (var_5));
                            arr_50 [i_6] [i_12] [i_9] [i_7 - 2] [i_6] = ((/* implicit */unsigned int) (+(-1594497966)));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (arr_51 [i_6] [i_12] [i_12 - 1] [i_6] [i_7 - 2] [i_6])));
                            var_31 = ((/* implicit */unsigned short) arr_29 [i_6] [i_6] [i_6]);
                            var_32 = ((/* implicit */int) 4960845880756745045LL);
                            var_33 = ((/* implicit */unsigned int) (-(arr_42 [i_7] [i_7])));
                        }
                        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            arr_58 [i_6] [i_7] [i_9] [i_15] [i_15] |= ((/* implicit */unsigned char) ((((3650958453U) << (((arr_35 [(unsigned char)18] [(unsigned char)18] [4ULL] [i_15]) + (1151315232))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -3136941194438821930LL))))))));
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_34 [i_15] [i_9] [i_6] [i_6])) != (((/* implicit */int) arr_28 [i_6] [i_6]))))))));
                        }
                        for (signed char i_16 = 3; i_16 < 20; i_16 += 4) 
                        {
                            arr_61 [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_59 [i_6] [i_6] [i_6] [(short)9] [i_6] [(short)9] [(short)9])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_5)))) : (arr_47 [i_6] [i_7 - 3] [i_9] [i_9] [i_16 - 3])));
                            arr_62 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_45 [i_6] [i_6] [i_6] [i_6]))))));
                            var_35 = (-(((/* implicit */int) (_Bool)1)));
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_17 = 2; i_17 < 20; i_17 += 3) 
                        {
                            arr_67 [i_6] [i_6] [i_9] [i_12 + 1] [i_17] = arr_49 [i_17 - 1] [i_17] [i_17] [i_17] [i_17 - 1];
                            arr_68 [i_6] [i_6] [i_9] [i_12] [i_17] = ((/* implicit */int) arr_43 [i_6] [i_6] [i_6]);
                        }
                        for (unsigned short i_18 = 4; i_18 < 21; i_18 += 4) 
                        {
                            arr_72 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-16))) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_7 - 2] [i_7] [i_18 - 4]))) : (arr_29 [i_18 - 1] [i_6] [i_18])));
                            arr_73 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (arr_42 [i_6] [i_6]) : (arr_42 [i_6] [i_7])));
                            var_36 = ((/* implicit */unsigned short) (-(arr_35 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])));
                        }
                        for (unsigned short i_19 = 3; i_19 < 21; i_19 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((((/* implicit */int) arr_74 [i_6] [i_6] [i_6] [i_6] [i_6])) != (((/* implicit */int) (_Bool)0))))));
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) arr_65 [i_6] [i_7] [i_7] [(unsigned short)0] [(unsigned char)10]))));
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */_Bool) arr_70 [i_7 - 2] [2ULL] [i_9] [i_19 - 2] [20LL])) ? (((/* implicit */int) var_2)) : (var_8))))));
                        }
                        for (unsigned short i_20 = 3; i_20 < 21; i_20 += 2) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 2302094359U)) < (((((/* implicit */_Bool) (short)-1005)) ? (-545356757800881421LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_74 [i_12] [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1])) / (((/* implicit */int) var_0)))))));
                        }
                        arr_78 [i_6] [i_9] [(signed char)0] &= ((/* implicit */unsigned int) arr_42 [i_6] [14LL]);
                    }
                }
                for (unsigned int i_21 = 0; i_21 < 22; i_21 += 1) /* same iter space */
                {
                    arr_82 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */long long int) (((~(((/* implicit */int) var_7)))) != (((((/* implicit */int) arr_57 [i_21] [i_7] [i_6])) / ((~(((/* implicit */int) arr_71 [i_6] [i_6]))))))));
                    var_42 = ((/* implicit */signed char) var_4);
                    var_43 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (((((/* implicit */_Bool) 1253244675U)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [18U]))))) : (-9223372036854775801LL)))));
                    var_44 *= ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */int) arr_37 [(unsigned char)4] [(unsigned char)4] [i_21] [i_7 - 2])) / (var_10))) > (((/* implicit */int) arr_65 [i_6] [i_6] [i_6] [i_6] [(signed char)20])))));
                    /* LoopNest 2 */
                    for (signed char i_22 = 1; i_22 < 20; i_22 += 3) 
                    {
                        for (unsigned int i_23 = 0; i_23 < 22; i_23 += 3) 
                        {
                            {
                                var_45 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_69 [i_6] [i_6])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((signed char) arr_54 [i_6] [i_7] [i_6] [i_21] [i_22] [16U])))))));
                                arr_88 [i_6] [i_23] = ((/* implicit */unsigned long long int) arr_34 [i_6] [(signed char)13] [i_21] [i_23]);
                                arr_89 [i_6] [i_7] [i_6] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(2344018663U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_6] [i_6]))))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                var_46 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_74 [i_6] [i_7 - 1] [i_7] [i_7] [i_7]))));
                var_47 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) + (max((((/* implicit */long long int) ((var_9) > (((/* implicit */int) arr_69 [i_6] [i_6]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [(_Bool)1]))) / (arr_59 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
            }
        } 
    } 
}
