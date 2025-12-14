/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44789
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
    var_15 = ((/* implicit */signed char) var_10);
    var_16 = ((/* implicit */unsigned short) min((var_13), (var_3)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_13 [(signed char)14] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3 - 2] [i_3 - 2] [i_2] [i_3] [i_4]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3 + 1]))));
                            arr_14 [i_3] [i_2] [i_3] [(unsigned short)10] = var_6;
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */signed char) (~(min(((-(((/* implicit */int) var_14)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3 - 3] [i_3 - 1] [i_3 + 1])) ^ (((/* implicit */int) arr_11 [i_3 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (unsigned short)54745))))) : ((~(((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 1]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) arr_17 [i_3 + 1] [i_3 - 3]))));
                            arr_18 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3 + 1]))));
                            var_19 ^= arr_1 [i_3];
                        }
                        arr_19 [i_3] [(unsigned short)17] [i_2] [i_2] [i_2] [i_2] = arr_17 [(unsigned short)1] [i_1];
                        arr_20 [(signed char)16] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        arr_24 [i_6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) <= ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [(signed char)12] [i_6])) : (((/* implicit */int) arr_10 [i_0] [i_1]))))))));
                        var_20 = ((/* implicit */signed char) min((((/* implicit */int) var_2)), ((-((~(((/* implicit */int) var_1))))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)55305), ((unsigned short)10226)))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7342))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_1] [(signed char)3] [i_0]))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_8))))));
                    }
                    var_22 = ((/* implicit */unsigned short) var_2);
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((((unsigned short) (signed char)-113)), (min(((unsigned short)34326), ((unsigned short)10796)))));
                                var_24 = ((/* implicit */unsigned short) arr_10 [i_1] [i_8]);
                                arr_29 [i_0] [i_1] [(signed char)4] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                                arr_30 [i_0] [(signed char)14] [i_8] [i_1] [i_7] = ((/* implicit */unsigned short) var_6);
                                var_25 += (unsigned short)65517;
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_2 [i_1]), (arr_2 [i_1]))))));
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_10 = 1; i_10 < 22; i_10 += 3) 
                        {
                            arr_38 [i_9] [(signed char)8] = ((/* implicit */signed char) arr_22 [i_0] [i_0] [(signed char)19] [i_2] [(signed char)7] [(signed char)7]);
                            arr_39 [i_10] [i_1] [i_2] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_31 [i_0] [i_1] [i_1] [i_10 - 1] [(signed char)5]))));
                            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)61773))));
                            arr_40 [i_0] [i_1] [i_2] [i_2] [(unsigned short)11] = var_12;
                            arr_41 [i_0] [i_1] [i_0] [i_0] [i_10] [i_0] = arr_12 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_10 - 1];
                        }
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            var_28 += arr_1 [i_9];
                            var_29 ^= min(((unsigned short)65526), ((unsigned short)65533));
                            arr_46 [i_11] = ((/* implicit */signed char) var_4);
                            arr_47 [i_11] [i_11] = var_12;
                        }
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            arr_51 [i_0] [i_1] [(signed char)21] [i_9] [i_12] = ((/* implicit */signed char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61))))))), ((~(((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)20]))))));
                            var_30 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_36 [i_0] [i_1] [i_2] [(unsigned short)11] [i_2]), (arr_17 [i_0] [i_0]))))));
                            arr_52 [i_0] [i_2] [(unsigned short)9] [i_12] = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)65535)))) <= (((/* implicit */int) var_8))));
                            arr_53 [i_0] [(signed char)13] [i_2] [i_2] [i_9] [i_12] [(signed char)13] = ((/* implicit */signed char) (~(((((((/* implicit */int) max((var_13), (arr_7 [i_0] [i_1] [(unsigned short)11] [i_12])))) + (2147483647))) >> ((((~(((/* implicit */int) arr_1 [i_12])))) + (23)))))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            arr_56 [(unsigned short)10] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (var_7)))) >> (((((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [i_2] [i_9] [i_13])) - (41989)))));
                            var_31 *= ((/* implicit */signed char) min((min((((((/* implicit */_Bool) (unsigned short)51460)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (signed char)115)))), (((/* implicit */int) var_11)))), (((/* implicit */int) ((signed char) arr_32 [(unsigned short)23] [i_1] [i_2] [i_9])))));
                        }
                        for (signed char i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned short) arr_37 [i_0] [i_1] [i_2] [(signed char)16] [i_14]);
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)122)) >> (((((/* implicit */int) (unsigned short)14078)) - (14049)))));
                            arr_59 [(unsigned short)21] [i_1] [i_2] [i_1] [(unsigned short)17] [(unsigned short)21] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)51429))))));
                            arr_60 [i_0] [i_2] [i_9] [i_14] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_35 [(unsigned short)15] [i_1] [i_1] [i_9] [i_9] [i_14]))))) ? ((+(((/* implicit */int) arr_32 [(unsigned short)2] [(signed char)14] [i_9] [i_14])))) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_1)))) <= (((/* implicit */int) max((arr_43 [i_14] [i_14] [i_14] [i_14] [i_14]), (((/* implicit */unsigned short) arr_17 [i_0] [i_0]))))))))));
                        }
                        for (signed char i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
                        {
                            arr_63 [i_0] [i_1] [i_0] [i_1] [i_15] [i_1] [(unsigned short)18] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_8))))), (((((/* implicit */int) (unsigned short)18252)) + (((/* implicit */int) (unsigned short)65513))))));
                            var_34 += ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_10))))));
                        }
                        var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1])), (var_0))), (((/* implicit */unsigned short) min((var_6), (var_2)))))))));
                    }
                    for (unsigned short i_16 = 2; i_16 < 22; i_16 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (signed char)76)) == (((/* implicit */int) (unsigned short)51444))))));
                            var_37 -= ((/* implicit */signed char) arr_68 [i_16 + 1] [(signed char)16]);
                        }
                        for (signed char i_18 = 2; i_18 < 22; i_18 += 2) 
                        {
                            var_38 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_18] [(signed char)1] [i_18] [i_18 - 1] [i_18]))))), ((~(((/* implicit */int) (unsigned short)65185))))));
                            var_39 = var_12;
                            var_40 = ((/* implicit */signed char) ((((((/* implicit */int) arr_61 [i_0] [i_18] [(signed char)1] [i_18] [i_18 + 1] [i_18 + 2])) + (((/* implicit */int) var_14)))) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_37 [(unsigned short)11] [i_1] [i_18] [i_18 - 2] [i_18 + 1])) : (((/* implicit */int) arr_45 [i_18] [i_18] [(signed char)15] [i_18] [i_18 + 1] [i_18 - 2])))) - (85)))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_19 = 3; i_19 < 23; i_19 += 3) 
                        {
                            arr_76 [i_16] [i_16 + 2] [i_16 + 2] [i_16] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [(signed char)12] [i_0] [i_0] [(unsigned short)14]))));
                            var_41 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_1 [i_16 + 2])))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_36 [(unsigned short)7] [i_16] [i_2] [i_1] [(unsigned short)7]))))))))));
                            var_42 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0] [(signed char)10])) <= (((/* implicit */int) arr_64 [i_0] [i_1] [i_2] [i_16]))))), (((unsigned short) var_7))))) == (((((/* implicit */_Bool) arr_0 [i_16 + 1])) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) (unsigned short)65472)) ^ (((/* implicit */int) (unsigned short)15140))))))));
                            arr_77 [i_0] [i_0] [i_1] [i_2] [i_2] [i_16 + 2] [i_19 + 1] = arr_42 [(unsigned short)16] [i_1] [i_2] [i_16 - 1] [(unsigned short)12];
                            var_43 = ((/* implicit */signed char) arr_61 [i_0] [i_1] [i_1] [(unsigned short)11] [(unsigned short)11] [i_1]);
                        }
                    }
                    for (unsigned short i_20 = 2; i_20 < 22; i_20 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                        arr_81 [i_20] [i_2] [i_20] = ((/* implicit */signed char) arr_31 [i_0] [i_1] [(unsigned short)1] [i_20] [i_20]);
                    }
                }
            } 
        } 
        var_45 = ((/* implicit */signed char) max((var_45), (arr_9 [i_0] [i_0] [(signed char)23] [(signed char)7])));
    }
}
