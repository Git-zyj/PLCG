/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32178
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) 1580251201)))))) >= ((~((-(arr_5 [i_0] [i_0] [i_0]))))))))));
                        arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1308))) % (var_1)))) | (((long long int) arr_1 [i_0]))));
                        var_18 = (+(arr_1 [i_0]));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((min(((-(-1))), (((/* implicit */int) var_5)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) -1580251202))))))))));
                            var_20 |= ((/* implicit */unsigned char) ((signed char) (+(-2647558335548820118LL))));
                            arr_15 [i_2] [i_2] [9] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) -3))))))), ((~((-(((/* implicit */int) var_0))))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (((+((-(((/* implicit */int) arr_7 [i_4] [i_6])))))) + (-1)));
                            var_22 = ((/* implicit */unsigned short) (short)-22012);
                            arr_19 [i_0] [i_2] [3LL] [i_2] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_2] [i_1] [i_2]))) ? (((((/* implicit */_Bool) 51582457)) ? (-8651037764269605149LL) : (arr_2 [i_2]))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_0] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4] [i_2] [i_6]))) : (arr_5 [i_0] [i_2] [i_2])))));
                        }
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_23 ^= ((/* implicit */short) ((arr_9 [i_0] [i_0]) ^ (arr_9 [i_0] [i_0])));
                        var_24 = (+(((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_14 [(signed char)0] [7LL] [i_2] [i_7]))))));
                        arr_23 [i_7] [i_7] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_16 [i_7] [i_2] [i_1] [i_2] [i_0]))));
                    }
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */int) ((((max((3263388392U), (((/* implicit */unsigned int) (_Bool)1)))) >> (((((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_1] [i_2])) - (51673))))) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_8] [i_2] [i_2])) ^ (var_3))))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((((min((((/* implicit */long long int) 0)), (8651037764269605131LL))) < (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_1] [i_8]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_4))))))));
                    }
                    var_27 = ((/* implicit */long long int) var_5);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            arr_31 [i_10] [i_10] = ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)53302))) <= (arr_27 [i_9] [i_10]))) ? ((-(((/* implicit */int) (unsigned short)46390)))) : (1580251210));
            /* LoopSeq 3 */
            for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_14))));
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)86))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    var_30 ^= ((/* implicit */unsigned long long int) arr_35 [i_9] [(short)0] [i_12] [i_13]);
                    var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-1819135117979905380LL)))) || (((/* implicit */_Bool) arr_36 [i_13] [i_10] [i_13]))));
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        var_32 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_12])) ^ (((/* implicit */int) arr_40 [i_13]))));
                        var_33 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -5318184032948545844LL)) ? (arr_30 [i_13] [i_13]) : (((/* implicit */int) arr_33 [i_14]))))));
                        arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_13] [i_14]))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_12] [i_13] [i_12])) ? (((/* implicit */unsigned long long int) 5318184032948545844LL)) : (12749171964099470031ULL)));
                    }
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned short) arr_45 [i_10] [i_10] [i_12] [i_13] [i_15] [i_13]);
                        var_36 = ((/* implicit */unsigned short) ((259466115U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)19604)))));
                        var_37 = ((/* implicit */unsigned long long int) (~(1580251221)));
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (signed char)120)))))) % ((-(var_14))))))));
                        var_39 *= ((/* implicit */signed char) (-(7414763693332314199LL)));
                    }
                    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        arr_51 [i_9] [i_10] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) arr_27 [i_9] [i_10]);
                        var_40 = ((((/* implicit */_Bool) arr_28 [i_9] [i_10])) || (((/* implicit */_Bool) arr_43 [i_9] [i_9] [i_9] [i_10] [i_12] [i_13] [i_16])));
                    }
                    var_41 -= ((/* implicit */signed char) ((757817692) * (((/* implicit */int) (!((_Bool)0))))));
                }
                for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    var_42 = ((/* implicit */_Bool) ((unsigned long long int) arr_45 [i_17] [i_17] [i_12] [i_10] [i_10] [i_9]));
                    var_43 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)4095))));
                }
                for (long long int i_18 = 3; i_18 < 20; i_18 += 4) 
                {
                    var_44 *= ((_Bool) 8651037764269605136LL);
                    var_45 += ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 19ULL))));
                    var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((17723737995428317919ULL) * (((/* implicit */unsigned long long int) 16376)))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned char) (~(1277129452)));
                            var_48 *= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65128))));
                            arr_65 [i_9] [i_10] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -7414763693332314200LL))));
                            var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) var_1))));
                            var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)24576))))) || (((/* implicit */_Bool) arr_61 [i_20] [i_9] [i_12] [i_10] [i_20])))))));
                        }
                    } 
                } 
                arr_66 [i_12] [i_10] = ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (unsigned char)198)));
                /* LoopSeq 3 */
                for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 4) 
                {
                    var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-17)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4035501181U)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10] [i_12] [i_9])))))))))));
                    arr_70 [i_9] [i_10] [i_10] [i_12] [i_21] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) arr_49 [i_21] [(_Bool)1] [i_12] [i_10] [i_9]))));
                    var_52 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                }
                for (unsigned long long int i_22 = 2; i_22 < 19; i_22 += 2) 
                {
                    var_53 = ((/* implicit */unsigned int) ((var_8) / (((/* implicit */long long int) arr_43 [i_9] [i_22 + 2] [i_22] [i_22 + 3] [i_22 + 3] [i_22 - 2] [i_22]))));
                    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_10] [i_10] [i_22 - 2] [i_22 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_10] [i_10] [i_22 - 2] [i_22 + 2]))) : (259466117U)));
                    var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)-105)))))))));
                }
                for (unsigned int i_23 = 0; i_23 < 23; i_23 += 2) 
                {
                    var_56 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                    var_57 = ((/* implicit */_Bool) (~(arr_45 [i_9] [i_9] [i_10] [i_12] [i_9] [i_23])));
                }
            }
            for (short i_24 = 0; i_24 < 23; i_24 += 2) 
            {
                var_58 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -7414763693332314221LL)) ? (arr_52 [i_9] [(unsigned short)20] [(unsigned short)20] [i_10] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206)))))));
                var_59 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4107365386886732805LL)))))) ^ (((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (arr_52 [i_9] [i_10] [i_10] [i_9] [i_9])))));
            }
        }
        for (signed char i_25 = 0; i_25 < 23; i_25 += 1) 
        {
            var_60 = ((/* implicit */unsigned long long int) 3209498440450478390LL);
            /* LoopNest 3 */
            for (long long int i_26 = 0; i_26 < 23; i_26 += 3) 
            {
                for (signed char i_27 = 0; i_27 < 23; i_27 += 1) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 23; i_28 += 2) 
                    {
                        {
                            var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_28] [i_27] [i_26] [i_25] [i_25] [i_9])) ? (((((/* implicit */_Bool) var_3)) ? (-7414763693332314220LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49)))))) ? (((/* implicit */int) (!(arr_88 [i_25] [i_26] [i_28])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((-2011127229) + (2147483647))) >> (((/* implicit */int) (signed char)6))))))))));
                            var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) (~(((unsigned long long int) var_6)))))));
                            var_63 = ((/* implicit */long long int) min((var_63), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((7414763693332314199LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_25] [i_26] [i_27])))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_28] [i_9] [i_9] [i_9])) | (((/* implicit */int) (unsigned short)65128)))))))))))));
                            arr_89 [i_25] = ((/* implicit */signed char) (unsigned char)169);
                        }
                    } 
                } 
            } 
        }
        arr_90 [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 7414763693332314176LL)) ? (((/* implicit */unsigned long long int) -7414763693332314200LL)) : (14ULL))) * (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) arr_57 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
    }
}
