/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241485
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
    var_17 -= ((/* implicit */long long int) ((max((((/* implicit */int) var_12)), ((~(((/* implicit */int) var_4)))))) - (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(var_10))))));
        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_10)))) << (((((/* implicit */int) var_14)) + (107)))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_5 [(unsigned char)1] = ((/* implicit */unsigned char) -8030238018069163816LL);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (var_9))))));
            arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)4]))))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                            var_22 = arr_14 [i_5] [i_4] [10LL] [(signed char)1];
                        }
                    } 
                } 
                var_23 = ((arr_13 [i_1] [i_2] [i_2] [i_2]) + (arr_3 [i_1] [i_1]));
                var_24 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)241))));
                var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)8] [i_1]))) ^ (arr_15 [i_1] [i_2] [i_2] [i_3] [(unsigned char)4] [i_3])));
            }
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                arr_20 [i_1] [i_2] [i_6] = ((/* implicit */long long int) arr_2 [(unsigned char)7] [i_1]);
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                arr_21 [i_6] = arr_18 [i_1] [(unsigned char)3] [(unsigned char)6] [i_1];
            }
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) || (((/* implicit */_Bool) arr_14 [i_1] [i_7] [i_1] [i_1]))));
            arr_25 [i_1] [5ULL] = ((/* implicit */unsigned char) ((signed char) (+(arr_3 [i_1] [i_7]))));
            var_28 = ((/* implicit */long long int) arr_19 [i_1] [(signed char)13] [i_1]);
        }
        /* LoopSeq 4 */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((((/* implicit */int) var_14)) == (((/* implicit */int) arr_28 [i_1])))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 627615594U)))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
            var_30 -= ((/* implicit */unsigned char) max((arr_1 [i_8]), (max((((/* implicit */short) (unsigned char)253)), (arr_12 [i_1] [i_1])))));
        }
        for (signed char i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_10 = 3; i_10 < 11; i_10 += 3) 
            {
                arr_35 [i_10] [i_10] [i_10] [i_1] = arr_18 [i_1] [5U] [i_9] [i_10 - 1];
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((unsigned int) (((!(((/* implicit */_Bool) (unsigned char)255)))) && (((((/* implicit */int) (signed char)83)) != (((/* implicit */int) (signed char)90))))))))));
                var_32 -= ((/* implicit */unsigned char) ((((arr_8 [i_10 + 3] [i_10 - 3] [i_10 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) arr_22 [i_10 - 2] [i_9] [i_1])) : (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_13))))))))));
                var_33 *= ((/* implicit */short) arr_27 [i_1]);
                var_34 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (max((((/* implicit */unsigned int) (unsigned char)240)), (arr_32 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_9] [i_10])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [6U] [(signed char)5]))) * (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_8 [i_10] [i_9] [i_1])) : (7499364229498984817ULL)))))));
            }
            var_35 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) (signed char)74))), ((~(((/* implicit */int) arr_14 [i_9] [i_1] [i_1] [(short)11]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_9] [i_9]))) ^ (arr_17 [i_1])))));
            arr_36 [i_1] &= ((/* implicit */unsigned long long int) var_1);
            var_36 &= ((/* implicit */unsigned char) arr_4 [i_9]);
            arr_37 [(unsigned char)13] [i_9] [13LL] = ((/* implicit */unsigned char) arr_19 [i_1] [i_9] [i_9]);
        }
        for (signed char i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                var_37 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_16) ^ (((/* implicit */unsigned long long int) var_9)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1])))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_1] [i_11])))))));
                var_38 = ((/* implicit */signed char) var_8);
                var_39 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned char)171), ((unsigned char)40)))) * (((/* implicit */int) (signed char)70))))) / ((+(3375915518U)))));
            }
            for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 3; i_14 < 12; i_14 += 1) 
                {
                    for (signed char i_15 = 2; i_15 < 12; i_15 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)-101)))) % (((((/* implicit */_Bool) arr_34 [i_1] [i_1])) ? (((/* implicit */int) arr_16 [(short)7] [i_15 - 2] [i_15 + 1] [i_15 + 2] [i_15 - 2] [i_15 + 3])) : (((/* implicit */int) ((signed char) (unsigned char)2)))))));
                            var_41 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)229))));
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((unsigned int) ((((((/* implicit */int) (short)28)) % (((/* implicit */int) var_2)))) << (((arr_31 [i_11] [(short)3] [(signed char)12]) - (8017507221356396494ULL))))))));
                        }
                    } 
                } 
                arr_51 [i_13] [i_1] [i_1] [(signed char)14] |= ((/* implicit */short) (signed char)94);
                arr_52 [i_1] [i_11] [(unsigned char)9] [i_13] = ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (919051777U)))) == (((/* implicit */long long int) (-((-(var_7))))))));
            }
            var_43 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82))) <= (((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_11]))) : (10947379844210566798ULL)))));
            var_44 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_1]))) + (2152344298U)))) ? (((/* implicit */int) ((unsigned char) arr_49 [i_1] [i_1] [i_1] [(signed char)5] [i_1]))) : (((((/* implicit */_Bool) arr_43 [i_1])) ? (((/* implicit */int) arr_1 [i_11])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) var_5)))))))));
            var_45 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), (arr_16 [i_1] [(short)1] [i_1] [i_1] [i_1] [9U]))))))), (max((((/* implicit */unsigned long long int) max((arr_16 [i_1] [i_11] [i_11] [(signed char)2] [i_11] [i_11]), (((/* implicit */short) arr_27 [i_1]))))), (arr_40 [i_1])))));
            arr_53 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_27 [i_11]), (arr_27 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_11]))))))));
        }
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 15; i_16 += 1) /* same iter space */
        {
            arr_56 [i_1] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (arr_3 [i_1] [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            arr_57 [i_16] = ((/* implicit */signed char) var_16);
            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) (~(3336597946U))))));
            arr_58 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((10947379844210566813ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
        }
        arr_59 [(short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_50 [i_1] [i_1] [i_1] [i_1] [(unsigned char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (arr_26 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) arr_14 [i_1] [12ULL] [i_1] [(unsigned char)0]))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [(short)4] [i_1] [(short)10])))));
        var_47 = ((/* implicit */short) var_10);
    }
}
