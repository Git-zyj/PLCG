/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235939
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
    var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)65526)))) : (((/* implicit */int) (unsigned short)65532)))), (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))))), ((unsigned short)9))))));
    var_21 = ((/* implicit */long long int) max((min((((/* implicit */int) min(((unsigned short)13), (((/* implicit */unsigned short) var_14))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)0)))))), (((/* implicit */int) min(((unsigned short)65526), ((unsigned short)0))))));
    var_22 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) && (((/* implicit */_Bool) var_1)))))));
    var_23 |= ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [(unsigned short)0] &= ((/* implicit */unsigned char) var_6);
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)1))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)4] [4]))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4)))));
        /* LoopSeq 4 */
        for (int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    arr_15 [(short)9] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_1 + 1]);
                    arr_16 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)19)) != (((/* implicit */int) (unsigned short)4))))) : (arr_8 [i_1] [i_1 - 3])));
                    arr_17 [5LL] [i_1] [i_1] [i_1 - 2] = ((/* implicit */signed char) var_8);
                }
                var_24 = ((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_1 - 3] [i_1 + 2] [i_1]);
            }
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_1] [i_1 - 4] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [7U] [i_0] [i_0] [i_1 - 4] [i_4])))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535))))));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */short) var_19);
            }
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))) % (var_3))))));
                    var_27 = ((/* implicit */_Bool) var_1);
                }
                var_28 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min(((unsigned short)0), ((unsigned short)65533)))) || (((/* implicit */_Bool) var_19)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65514)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))))));
            }
            arr_29 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_12)))) ? (min((((/* implicit */long long int) (unsigned short)0)), (var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) (unsigned short)65535)))))));
            arr_30 [i_1] = (+(((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned short)65517))) >= (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1 - 3] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 3] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_6))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_7 = 2; i_7 < 7; i_7 += 4) 
            {
                var_29 = ((/* implicit */signed char) (unsigned short)0);
                arr_34 [i_7 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_1] [i_7]))));
            }
            /* vectorizable */
            for (signed char i_8 = 2; i_8 < 9; i_8 += 2) 
            {
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_1 - 2] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_31 [(unsigned short)6] [i_1 + 2])) : (((/* implicit */int) arr_31 [i_1] [i_1 - 3])))))));
                arr_37 [i_0] [i_1] [i_8 + 2] [i_8] = arr_19 [i_8] [i_1];
                arr_38 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_18))));
                arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_7 [i_1 - 4])) : (((/* implicit */int) var_14))));
            }
            var_31 += ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) max(((unsigned short)11), ((unsigned short)0)))), ((~(((/* implicit */int) (unsigned short)7))))))), (var_10)));
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            arr_42 [i_9] [i_9] [i_9] = ((/* implicit */signed char) max((((/* implicit */int) max(((unsigned short)65527), ((unsigned short)1)))), ((-(((/* implicit */int) max((var_11), ((unsigned short)11))))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (unsigned short i_11 = 3; i_11 < 7; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) (unsigned short)65535))));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((max((var_6), (min(((unsigned short)65535), ((unsigned short)65535))))), ((unsigned short)65511)));
                            var_33 = ((/* implicit */unsigned long long int) min((max((max((var_15), (((/* implicit */long long int) (unsigned short)65525)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)13))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((((((/* implicit */int) var_11)) >> (((((/* implicit */int) (unsigned short)65529)) - (65528))))) - (23474))))))));
                            var_34 = ((/* implicit */long long int) min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65524))))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (unsigned short)24))));
        }
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            arr_56 [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65522))));
            /* LoopSeq 1 */
            for (unsigned short i_14 = 2; i_14 < 10; i_14 += 4) 
            {
                var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (var_10))))));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10)))))) <= (arr_10 [i_14 - 2] [i_14] [i_14 + 1])));
            }
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_60 [i_0])) ? (((((/* implicit */int) arr_9 [i_0] [i_0])) - (((/* implicit */int) (unsigned short)65527)))) : (((((/* implicit */_Bool) (unsigned short)65511)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_13] [i_13] [0LL]))))));
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                arr_67 [(signed char)2] [(short)0] [i_16] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_18))) > (arr_33 [i_0] [i_15] [i_16])));
                var_39 = (unsigned short)3;
            }
            for (signed char i_17 = 2; i_17 < 8; i_17 += 1) 
            {
                arr_70 [i_0] [i_15] [i_15] [i_17] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_7 [i_15]))));
                /* LoopSeq 1 */
                for (long long int i_18 = 3; i_18 < 9; i_18 += 1) 
                {
                    arr_75 [i_0] [i_15] [i_17] [8ULL] = (unsigned short)7;
                    var_40 *= ((/* implicit */unsigned int) ((unsigned char) var_12));
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) (unsigned short)6))))) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned short)4))));
                        var_42 |= ((/* implicit */short) var_5);
                        var_43 = ((/* implicit */_Bool) (unsigned short)14);
                        arr_79 [i_0] [i_0] [i_15] [i_17] [i_15] [i_18] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)8))));
                    }
                    var_44 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65527))))) ? (((/* implicit */int) (unsigned short)65490)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65522))))));
                }
                /* LoopSeq 1 */
                for (long long int i_20 = 4; i_20 < 10; i_20 += 1) 
                {
                    var_45 &= ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_17]))) : (arr_66 [i_0] [i_15] [i_17] [i_20])))));
                    var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_20 + 1] [(short)5] [i_20]))));
                    arr_82 [i_0] [i_15] [i_17 + 1] [i_17] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_78 [i_17 - 2] [i_20] [10LL] [i_20 - 4] [2U])) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)65498)) : (((/* implicit */int) var_18))))));
                    var_47 = (unsigned short)65498;
                    var_48 &= ((/* implicit */unsigned int) var_9);
                }
            }
            var_49 = ((/* implicit */unsigned long long int) (unsigned short)65535);
            arr_83 [i_0] = ((/* implicit */unsigned long long int) arr_52 [i_15] [i_0]);
        }
    }
}
