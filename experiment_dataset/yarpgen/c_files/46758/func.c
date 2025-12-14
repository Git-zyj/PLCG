/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46758
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_11 |= ((/* implicit */_Bool) min((arr_7 [i_0 + 1] [0LL] [i_2]), (((/* implicit */unsigned short) (short)32767))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */unsigned short) ((signed char) max(((short)(-32767 - 1)), (((/* implicit */short) arr_13 [i_2])))));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32766)) ? (max((((/* implicit */long long int) ((unsigned short) arr_5 [i_3]))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) : (var_9))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)36141)))))));
                        }
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_7))));
                            var_15 *= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (short)32767)) >> (((((/* implicit */int) (short)-32752)) + (32768))))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (short)(-32767 - 1)))));
                            var_17 += ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)32767)), ((-(arr_15 [i_0] [i_1] [(unsigned short)6] [i_3] [i_3] [i_5 + 1] [i_5])))));
                        }
                        for (long long int i_6 = 1; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [i_2] [i_2] [i_2] [(unsigned short)19] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) arr_1 [i_6 + 1] [i_0 + 1])))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6724)) ? (((((/* implicit */_Bool) (signed char)15)) ? (var_9) : (arr_18 [i_2] [i_1] [i_2] [i_6] [(short)16]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_2]), (((/* implicit */short) arr_20 [i_6] [i_3] [i_2] [i_1] [i_0]))))))))) ? ((+(arr_9 [i_0] [i_0] [i_2] [(_Bool)1] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))));
                            arr_22 [(signed char)0] [i_2] [i_6 + 1] |= ((/* implicit */long long int) (signed char)-16);
                            var_19 = ((/* implicit */short) ((signed char) ((signed char) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) arr_13 [i_2]))))));
                        }
                        arr_23 [i_0] [(short)3] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1])))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        arr_27 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */short) ((signed char) ((long long int) var_3)));
                        /* LoopSeq 1 */
                        for (short i_8 = 2; i_8 < 21; i_8 += 2) 
                        {
                            arr_30 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((var_4) % (9223372036854775807LL)))));
                            var_20 |= ((/* implicit */unsigned short) arr_8 [i_7] [i_7] [i_7]);
                        }
                        var_21 = ((/* implicit */long long int) ((unsigned short) arr_29 [i_0 + 1] [(unsigned short)21] [i_0] [i_0 + 1] [i_0 - 1]));
                    }
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        arr_35 [i_2] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_16 [i_0 - 1] [i_0 - 1] [i_2] [(signed char)11]))))))), (arr_17 [i_0] [i_0] [i_1] [i_0] [i_9]));
                        arr_36 [i_9] [i_2] [i_1] [i_0] [i_0] [i_9] &= ((/* implicit */signed char) max((((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_2] [i_0])))), (((/* implicit */int) arr_32 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_10 [i_0] [i_0] [i_9] [i_9] [i_9] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_9] [i_9] [i_2] [i_9] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_1] [i_2] [i_9]))) / (var_6)))))));
                    }
                    for (long long int i_10 = 3; i_10 < 20; i_10 += 1) 
                    {
                        var_22 = var_8;
                        /* LoopSeq 3 */
                        for (signed char i_11 = 2; i_11 < 21; i_11 += 3) 
                        {
                            arr_43 [i_2] [i_2] = ((/* implicit */short) arr_3 [(unsigned short)17] [(unsigned short)17]);
                            arr_44 [i_0] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_42 [i_11] [i_2] [i_2] [i_1])))));
                        }
                        for (unsigned short i_12 = 1; i_12 < 21; i_12 += 3) 
                        {
                            var_23 = ((/* implicit */short) (~(((long long int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (_Bool)1)))))));
                            var_24 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_26 [i_0 + 1])) ? (((/* implicit */int) arr_26 [i_0 + 1])) : (((/* implicit */int) arr_26 [i_0 + 1]))))));
                            var_25 ^= ((unsigned short) max(((short)(-32767 - 1)), (max((((/* implicit */short) arr_38 [(_Bool)1] [i_0] [i_10])), (arr_19 [(signed char)12] [i_2] [i_2] [(short)8] [(_Bool)1])))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            arr_49 [i_13] [i_1] [i_2] [i_2] [i_10] = ((/* implicit */long long int) ((short) ((long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191)))))));
                            arr_50 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1])), ((~(((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1]))))));
                            var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)30888), (((/* implicit */short) (signed char)-1))))) ? (((((/* implicit */_Bool) arr_8 [i_13] [i_0] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_0 - 1] [i_2]))) : ((-(-3800182353880673958LL))))) : (((long long int) var_8))));
                            arr_51 [i_0] [i_13] [i_2] [22LL] [i_0] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_10 + 1] [i_2] [i_13] [i_0 + 1])) ? (((/* implicit */int) arr_48 [i_10] [i_13] [i_10 - 2] [i_0 - 1] [i_13] [i_0 - 1])) : (((/* implicit */int) arr_48 [i_10] [i_13] [i_10 - 1] [i_1] [i_13] [i_0 + 1]))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (short i_14 = 3; i_14 < 19; i_14 += 3) 
                    {
                        arr_54 [i_2] [i_2] [i_2] [i_14] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30238))) : (var_2))), (((/* implicit */long long int) var_0))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_53 [i_0] [i_1] [i_2] [i_14] [i_14 + 3]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_14] [i_2] [i_2] [i_1] [i_0])) ? (max((2341935617218991693LL), (8082164255006317542LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), (arr_46 [i_0 + 1] [i_0] [i_1] [i_2] [i_2] [i_14 + 4] [i_14]))))))))));
                    }
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) arr_57 [i_2] [i_2] [i_1] [i_2])) : (((/* implicit */int) (short)(-32767 - 1)))));
                        /* LoopSeq 4 */
                        for (short i_16 = 2; i_16 < 22; i_16 += 1) 
                        {
                            arr_62 [i_1] [i_2] [i_1] [(short)15] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)35297))));
                            arr_63 [(signed char)5] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_45 [i_16 + 1] [i_15] [i_2] [i_1] [i_0]))));
                            var_29 += ((/* implicit */long long int) (short)30888);
                        }
                        for (unsigned short i_17 = 2; i_17 < 22; i_17 += 2) 
                        {
                            arr_67 [i_0] [i_2] [i_2] [i_2] [i_15] [i_17 - 1] [i_17] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))))));
                            arr_68 [i_17] [i_15] [i_2] [i_1] [i_17] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_0 + 1] [i_17 - 2]))));
                        }
                        for (long long int i_18 = 2; i_18 < 22; i_18 += 2) /* same iter space */
                        {
                            arr_71 [i_0 - 1] [i_2] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) (short)32752);
                            var_30 = ((/* implicit */unsigned short) (-(var_4)));
                            arr_72 [i_0] [i_1] [i_2] [i_2] [i_15] [i_2] = ((/* implicit */long long int) arr_26 [i_0]);
                        }
                        for (long long int i_19 = 2; i_19 < 22; i_19 += 2) /* same iter space */
                        {
                            var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (arr_40 [i_19] [i_0] [i_0] [i_0])))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_7 [i_0] [i_19] [i_15])))))));
                            arr_76 [i_0 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_1] [i_19 - 2] [i_2] [i_19 + 1] [i_0 - 1] [i_2])) <= ((+(((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0]))))));
                            arr_77 [i_0] [i_2] [i_2] [i_15] [i_19] = ((/* implicit */long long int) arr_48 [i_19 - 1] [i_2] [i_2] [i_1] [i_2] [i_0]);
                            arr_78 [i_0] [i_2] [(unsigned short)4] [(unsigned short)20] [i_19] = (i_2 % 2 == zero) ? ((~(((((arr_56 [i_0 - 1] [i_1] [i_2] [i_15]) + (9223372036854775807LL))) >> (((arr_15 [i_19] [i_2] [i_2] [i_2] [i_2] [i_0] [i_0 + 1]) - (8942370012641745269LL))))))) : ((~(((((arr_56 [i_0 - 1] [i_1] [i_2] [i_15]) + (9223372036854775807LL))) >> (((((arr_15 [i_19] [i_2] [i_2] [i_2] [i_2] [i_0] [i_0 + 1]) + (8942370012641745269LL))) - (6789817150575907453LL)))))));
                        }
                    }
                    for (short i_20 = 1; i_20 < 20; i_20 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_21 = 0; i_21 < 23; i_21 += 4) 
                        {
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (-(((/* implicit */int) arr_61 [i_20 + 1])))))));
                            var_33 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0 + 1] [i_2] [i_21] [i_20 - 1] [i_21])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)21747)))), (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_46 [i_0] [i_0] [i_0 - 1] [i_1] [i_21] [i_20 - 1] [i_1])))))));
                        }
                        var_34 = ((/* implicit */unsigned short) (signed char)50);
                        arr_84 [i_20] [i_2] [i_2] [i_1] [i_2] [i_0] = ((((long long int) arr_18 [i_2] [i_20 + 1] [i_0 + 1] [i_2] [i_2])) + (max((arr_18 [i_2] [i_20 + 1] [i_0 + 1] [i_0] [i_2]), (((/* implicit */long long int) arr_37 [i_20 + 3] [i_20 + 3] [i_0 + 1] [i_0] [i_0 + 1])))));
                        var_35 -= ((/* implicit */unsigned short) max(((-(((/* implicit */int) ((arr_18 [(short)16] [i_2] [(short)2] [i_1] [(short)16]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-2)))))))), (((/* implicit */int) ((short) arr_46 [i_2] [i_0] [i_0 + 1] [i_20 + 3] [4LL] [i_2] [i_0])))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_22 = 0; i_22 < 23; i_22 += 4) 
                    {
                        arr_89 [i_0 - 1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))) != (((long long int) arr_5 [i_2]))));
                        var_36 |= ((/* implicit */long long int) var_10);
                        arr_90 [i_2] [i_0] [i_2] [i_0] = (i_2 % 2 == zero) ? (((/* implicit */short) ((2341935617218991693LL) >> (((((/* implicit */int) arr_70 [i_0] [i_2] [i_0 + 1] [i_2] [i_0] [i_0 - 1])) - (2773)))))) : (((/* implicit */short) ((2341935617218991693LL) >> (((((((/* implicit */int) arr_70 [i_0] [i_2] [i_0 + 1] [i_2] [i_0] [i_0 - 1])) - (2773))) - (3474))))));
                    }
                }
                arr_91 [i_0 - 1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (short)13575))) ? (((2341935617218991679LL) % (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            }
        } 
    } 
    var_37 = (signed char)64;
    /* LoopNest 2 */
    for (signed char i_23 = 0; i_23 < 23; i_23 += 3) 
    {
        for (long long int i_24 = 0; i_24 < 23; i_24 += 3) 
        {
            {
                arr_96 [i_23] [i_23] [i_24] = ((/* implicit */short) (-(max((var_9), (((/* implicit */long long int) (short)-32767))))));
                var_38 -= ((/* implicit */signed char) arr_8 [(unsigned short)10] [i_23] [(unsigned short)10]);
            }
        } 
    } 
}
